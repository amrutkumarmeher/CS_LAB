-- create database college;


/* Q1. Create table book
________________________________________________________________________
| No | Book_name | Author_name | Publication | Edition | year_purchase |
|____|___________|_____________|_____________|_________|_______________|

USE college;
CREATE TABLE book (
    No_ VARCHAR(3),
    Book_name VARCHAR(40),
    Author_name VARCHAR(40),
    Publication VARCHAR(20),
    Edition SMALLINT UNSIGNED,
    year_purchase DATE,
);
*/

/* Q2. describe table
USE college;
DESC book;
*/

/* Q3. Drop column year_purchase.
USE college;
ALTER TABLE book DROP year_purchase;
*/

/* Q4. describe table.
USE college;
DESC book;
*/

/* Q5. Add new column date_publication, department_name.
USE college;
ALTER TABLE book ADD (
	date_purchase DATE,
    department_name VARCHAR(5)
);
*/

/* Q6. Insert 10 books details*/
USE college;
INSERT INTO book (No_, Book_name, Author_name, Publication, Edition, date_purchase, department_name) values 
("B1","Introduction to C","Y. Kanetkar","Pearson",4,str_to_date("10-5-21","%d-%m-%y"),"CSE"),
("B2","Approach to C++","T. Kamthane","TMH",4,,""),
("B0",,,4,,""),
("B0",,,4,,""),
("B0",,,4,,""),
("B0",,,4,,""),
("B0",,,4,,""),
("B0",,,4,,""),
("B0",,,4,,"")
;