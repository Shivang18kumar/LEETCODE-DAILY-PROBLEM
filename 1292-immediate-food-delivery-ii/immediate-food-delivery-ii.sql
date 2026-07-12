# Write your MySQL query statement below
select
    ROUND(AVG(order_date=customer_pref_delivery_date)*100,2) as immediate_percentage
    from delivery d
    join(
        select customer_id,
           min(order_date) as first_order
           from delivery 
           group by customer_id
    )f

    on d.customer_id=f.customer_id
    and d.order_date=f.first_order;