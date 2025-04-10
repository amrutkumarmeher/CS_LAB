select concat(common," * ",vals," = ",common*vals) multiplication_table from
(select 9 common) common
cross join (
select * from(
select 1 as vals union all
select 2 as vals union all
select 3 as vals union all
select 4 as vals union all
select 5 as vals union all
select 6 as vals union all
select 7 as vals union all
select 8 as vals union all
select 9 as vals union all
select 10 as vals ) muls
)muls;