# Write your MySQL query statement below
select customer_id,
Count(*) as count_no_trans
from visits
where visit_id not IN(
    select visit_id from transactions
)group by customer_id