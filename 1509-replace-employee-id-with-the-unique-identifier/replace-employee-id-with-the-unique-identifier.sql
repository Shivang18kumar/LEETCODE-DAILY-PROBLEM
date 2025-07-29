# Write your MySQL query statement below
select employeeUNI.unique_id, employees.name from employees
left join EmployeeUNI
on employees.id=employeeuni.id;