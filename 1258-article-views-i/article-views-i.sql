# Write your MySQL query statement below
Select viewer_id as id from Views -- can also use distinct
where author_id = viewer_id
group by viewer_id
order by viewer_id;