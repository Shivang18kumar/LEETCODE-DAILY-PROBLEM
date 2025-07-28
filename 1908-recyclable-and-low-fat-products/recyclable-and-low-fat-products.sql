# Write your MySQL query statement below
Select product_id from products
 Where product_id IN(
    select product_id from Products 
    where low_fats='y'AND recyclable = 'y'
);