# Write your MySQL query statement 
select p.product_name,s.year,s.price
from sales s
Inner join product p
on p.product_id = s.product_id