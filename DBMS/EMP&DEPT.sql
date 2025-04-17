/* Q1. Create a DEPARTMENT TABLE having structure 
____________________________________
|  DNo | Dname | Location | Mgr_id |
|______|_______|__________|________| 

USE company;
CREATE TABLE DEPT (
	DNo varchar(3) UNIQUE,
    Dname varchar(20),
    Location varchar(20),
    Mgr_id varchar(3)
); */

/* Q2. Show the structure of DEPARTMENT TABLE. (DESC)

USE company;
DESC DEPT; */

/* Q3. Create EMP TABLE.
__________________________________________________________
| Eid | Fname | Lname | Job | HireDate | Salary | Gender |
|_____|_______|_______|_____|__________|________|________| 

USE company;
CREATE TABLE EMP (
	Eid varchar(3),
    Fname varchar(20),
    Lname varchar(20),
    Job varchar(20),
    HireDate DATE,
    Salary integer,
    Gender enum("M", "F")
); */

/* Q4. Display structure of EMP TABLE.(DESC)

USE company;
DESC EMP; */

/* Q5. Insert 5 rows to DEPT TABLE

USE company;
INSERT INTO DEPT (DNo, Dname, Location, Mgr_id) values
("D1","Sales","Location","E3"),
("D2","Marketing","Sambalpur","E1"),
("D3","Procurement","Cuttack","E3"),
("D4","Purchase","Cuttack","E1"),
("D5","HR","Bhubaneswar","E1"); */

/* Q6. Insert 5 rows to EMP TABLE.*/

USE company;
INSERT INTO EMP (Eid, Fname, Lname, Job, Hiredate, Salary, Gender) values

;

