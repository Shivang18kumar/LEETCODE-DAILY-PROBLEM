# Write your MySQL query statement below
select p.product_name,s.year,s.price from sales as s
INNER Join product as p 
on s.product_id = p.product_id;
