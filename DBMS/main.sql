/*
Database college.

create database college;
use std;
CREATE TABLE employee (
    id SMALLINT UNSIGNED,
    name_E VARCHAR(50),
    CONSTRAINT valid_id CHECK ((id <= 9999) AND (id >= 0000)),
    CONSTRAINT pk_employee PRIMARY KEY (id)
);
insert into employee (id,name_E) values
(0000,'Parinita'),
(0001,'Amrut'),
(0002,'Biswa'),
(0003,'Satya'),
(0040,'Homee'),
(0500,'Pruthibi'),
(6000,'Swastika'),
(0700,'Abhishek'),
(0080,'prabin'),
(0009,'pratiksha');
use std;
SELECT 
    *
FROM
    employee
ORDER BY id DESC;
use std;
CREATE TABLE student (
    rollno SMALLINT UNSIGNED,
    name_s VARCHAR(30),
    gender ENUM('Male', 'Female'),
    contact_no SMALLINT UNSIGNED,
    CONSTRAINT pk_student PRIMARY KEY (rollno),
    CONSTRAINT valid_rollno CHECK (rollno < 9999999999),
    CONSTRAINT valid_contact CHECK (contact_no < 9999999999)
);
-- insert into student (rollno,name_s,gender,contact_no) values 
-- (1,'Amrut','Male',1234567890),
-- (2,'Pruthibi','Male',1234567890),
-- (3,'Biswa','Male',1234567890),
-- (4,'Jay Krishna','Male',0987654321),
-- (5,'Satya','Male',0987654321),
-- (6,'Parinita','Female',0987654321),
-- (7,'Anchal','Female',1234567890),
-- (8,'Sneha','Female',1234567890),
-- (9,'Naina','Female',1234567890),
-- (10,'Swastika','Female',1234567890)
-- ;
-- alter table student modify column contact_no long;
/*
create table employee (
ID varchar(4),
fname varchar(20),
lname varchar(20),
dept_name varchar(7),
salary mediumint unsigned,
dob smallint unsigned
);
*/


/*
Database company.

create database company;
*/
use company;
/*
create table employee(
ID varchar(3) not null,
FNAME varchar(10) not null,
LNAME varchar(10) not null,
DEPT_NAME varchar(2) not null,
Salary mediumint unsigned not null,
DOB date not null,
gender varchar(6) not null,
DOJ date not null,
constraint pk_emp primary key (ID),
constraint valid_sex check (gender in ('Male', 'Female'))
);
*/
/*
insert into employee (ID,FNAME,LNAME,DEPT_NAME,Salary,DOB,gender,DOJ) values
('E1','RAMESH','DAS','CSE',15000,str_to_date('01-05-1987','%d-%m-%Y'),'Male',str_to_date('02-10-2016','%d-%m-%Y')),
('E2','RIYA','SAHU','CIVIL',25000,str_to_date('02-09-1986','%d-%m-%Y'),'Female',str_to_date('02-10-2016','%d-%m-%Y')),
('E3','KARAN','SHARMA','CSE',17000,str_to_date('02-09-1987','%d-%m-%Y'),'Male',str_to_date('03-09-2017','%d-%m-%Y')),
('E4','LOKESH','DAS','MATH',20000,str_to_date('01-10-1989','%d-%m-%Y'),'Male',str_to_date('11-10-2017','%d-%m-%Y')),
('E5','AJAY','SAHU','CIVIL',15000,str_to_date('02-10-1987','%d-%m-%Y'),'Male',str_to_date('10-09-2017','%d-%m-%Y')),
('E6','BIJAY','DAS','CSE',18000,str_to_date('10-05-1988','%d-%m-%Y'),'Male',str_to_date('11-11-2016','%d-%m-%Y')),
('E7','SIYA','RAY','MATH',19000,str_to_dept_namedate('26-09-1987','%d-%m-%Y'),'Female',str_to_date('10-10-2017','%d-%m-%Y')),
('E8','RIYA','PATTANAIK','CSE',12000,str_to_date('25-10-1986','%d-%m-%Y'),'Female',str_to_date('01-05-2016','%d-%m-%Y')),
('E9','RAM','DAS','CSE',15000,str_to_date('10-01-1987','%d-%m-%Y'),'Male',str_to_date('02-06-2016','%d-%m-%Y')),01
('E10','LAXMAN','MISHRA','CIVIL',18000,str_to_date('11-02-1987','%d-%m-%Y'),'Male',str_to_date('10-05-2017','%d-%m-%Y'));

SELECT 
    fname, dob, doj
FROM
    employee
WHERE
    dept_name = 'CIVIL' AND gender = 'Male';
    
SELECT 
    id,
    dept_name,
    fname
FROM
    employee
WHERE
    dept_name = 'CSE';
*/
