# Write your MySQL query statement below
select * from CINEMA
where id%2!=0 
and description !='Boring'
order by rating desc;