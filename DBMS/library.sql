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
    year_purchase DATE
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
    department_name enum("CSE", "EEE", "EE", "ME", "CE", "Math & Sci")
);
*/


/* Q6. Insert 10 books details
USE college;
INSERT INTO book (No_, Book_name, Author_name, Publication, Edition, date_purchase, department_name) values 
("B1","Introduction to C","Y. Kanetkar","Pearson",4,str_to_date("10-5-21","%d-%m-%y"),"CSE"),
("B2","Approach to C++","T. Kamthane","TMH",5,str_to_date("7-3-22","%d-%m-%y"),"CSE"),
("B3","Theory of Algorithm","S. Sharma & P. Mishra","XP7",2,str_to_date("10-10-21","%d-%m-%y"),"CSE"),
("B4","Object Oriented Programming","C.J. Date","Pearson",6,str_to_date("7-3-22","%d-%m-%y"),"CSE"),
("B5","Computer Network","B. Forouzan","TMH",4,str_to_date("10-5-21","%d-%m-%y"),"CSE"),
("B6","Concrete Tech","K.P. Mishra","XP73",2,str_to_date("5-9-19","%d-%m-%y"),"CE"),
("B7","Mechanics","L. Parikar","TMH",6,str_to_date("5-9-19","%d-%m-%y"),"ME"),
("B8","Basic Electrical","J.D. Karni","Pearson",5,str_to_date("10-10-21","%d-%m-%y"),"EE"),
("B9","Applied Physics","P.L. Thareja","Pearson",8,str_to_date("7-3-22","%d-%m-%y"),"Math & Sci"),
("B10","Estimation Engg","S.K. Ghosh","TMH",5,str_to_date("4-5-18","%d-%m-%y"),"CE");
*/

/* Q7. Delete the book which belong to 4th edition.
USE college;
DELETE FROM book WHERE Edition=4;
*/

/* Q8. Modify the publication of the book to XP73 whose previous publication is XP7.
USE college;
UPDATE book SET Publication="XP73" WHERE Publication="XP7";
*/

/* Q9. Display No, Book_name & Author_name of books of CSE department.
USE college;
SELECT No_, Book_name, Author_name FROM book WHERE department_name = "CSE";
*/

/* Q10. Display Book_name, Publication & edition of the books of Civil Department
USE college;
SELECT Book_name, Publication, Edition FROM book WHERE department_name = "CE";
*/

/* Q11. Display Book_name, Author_name, Publication of all 2nd Edition books.
USE college;
SELECT Book_name, Author_name, Publication FROM book WHERE Edition = 2;
*/

/* Q12. Display all details of the books which belong to TMH publication & 5th edition.
USE college;
SELECT * FROM book WHERE (Publication = "TMH" AND Edition = 5);
*/

/* Q13. Display No, Book_name, Author_name of all books of pearson publication.
USE college;
SELECT No_, Book_name, Author_name FROM book WHERE Publication = "Pearson";
*/

/* Q14. Display whole table.
USE college;
SELECT * FROM book;
*/

/* Q15. Delete the books of 2nd edition.
USE college;
DELETE FROM book WHERE Edition = 2;
*/
