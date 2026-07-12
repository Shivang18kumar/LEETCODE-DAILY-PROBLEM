# Write your MySQL query statement below
select 
round(COUNT(a.player_id)/(select count(DISTINCT player_id) from activity ),2) as fraction 

from activity a
join(
    select 
    player_id,
    MIN(event_date) as first_login
    from activity
    group by player_id
)f
on f.player_id=a.player_id and
a.event_date=DATE_ADD(f.first_login,INTERVAL 1 DAY)