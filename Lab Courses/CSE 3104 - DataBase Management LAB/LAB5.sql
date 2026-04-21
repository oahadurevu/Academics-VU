create database lab4;
use lab4

  CREATE TABLE Bonus
(
    WORKER_REF_ID INT NOT NULL,
    Bonus_Date DAtE ,

   Bonus_Ammount INT
   );
    Insert into bonus Values
   (1,'2019-02-20',5000),
   (2,'2019-06-11',3000),
   (3,'2019-02-20',4000),
   (4,'2019-02-20',4500),
   (5,'2019-06-11',3500),
   (6,'2019-06-12',NULL);

   select *from bonus;
   create table titlee
   (
  WORKER_REF_ID INT ,
  Worker_Title VARCHAR(50),
  Affected_From Date
   );
INSERT INTO Titlee VALUES
(1,'Manager','2019-02-10'),
(2,'Executive','2019-02-10'),
(8,'Executive','2019-02-28'),
(5,'Manager','2019-02-10'),
(4,'Asst. Manager','2019-02-11'),
(7,'Executive','2019-02-10'),
(6,'Lead','2019-02-15'),
(3,'Lead','2019-06-11');
     select *from titlee;

   SELECT *from titlee where  Affected_From>'2024-04-01' 
   order by  Worker_Title ASC;
  




