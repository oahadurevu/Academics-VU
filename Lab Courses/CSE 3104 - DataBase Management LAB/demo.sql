create database Midfinal1;
use Midfinal1

CREATE TABLE Developers (
    DevID INT PRIMARY KEY,
    DevName VARCHAR(50),
    Department VARCHAR(50),
    BaseSalary INT,
    JoinDate DATE,
    Email VARCHAR(100)
);

CREATE TABLE Project (
    ProjectID VARCHAR(10) PRIMARY KEY,
    ProjectName VARCHAR(50),
    Client VARCHAR(50),
    Budget INT,
    Status VARCHAR(20)
);
CREATE TABLE ProjectAllocations (
    AllocID INT PRIMARY KEY,
    DevID INT,
    ProjectID VARCHAR(10),
    AllocHours INT,
    Role VARCHAR(50),

    FOREIGN KEY (DevID) REFERENCES Developers(DevID),
    FOREIGN KEY (ProjectID) REFERENCES Project(ProjectID)
);

INSERT INTO Developers VALUES
(1,'Alice Smith','Frontend',55000,'2021-05-10','alice@tech.com'),
(2,'Bob Johnson','Backend',72000,'2020-08-15','bob@dev.net'),
(3,'Charlie Brown','DevOps',65000,'2022-01-20','charlie@tech.com'),
(4,'Diana Prince','Backend',80000,'2019-11-05','diana@dev.net'),
(5,'Evan Wright','Frontend',48000,'2023-03-01','evan@tech.com'),
(6,'Fiona Gallagher','Data Science',95000,'2018-07-22','fiona@data.org'),
(7,'George Lucas','Backend',61000,'2022-09-10','george@dev.net'),
(8,'Hannah Abbott','DevOps',68000,'2021-12-12','hannah@tech.com'),
(9,'Ian Somerhalder','Frontend',52000,'2022-05-30','ian@tech.com'),
(10,'Jane Doe','Data Science',89000,'2020-02-18','jane@data.org');

INSERT INTO Project VALUES
('P1','Project Alpha','TechCorp',500000,'Active'),
('P2','Project Beta','HealthInc',300000,'Active'),
('P3','Project Gamma','FinBank',750000,'Completed'),
('P4','Project Delta','EduNet',200000,'Active');

INSERT INTO ProjectAllocations VALUES
(101,2,'P1',120,'Lead'),
(102,1,'P1',80,'Developer'),
(103,4,'P2',150,'Lead'),
(104,6,'P3',200,'Data Architect'),
(105,3,'P1',100,'Ops Manager'),
(106,7,'P2',90,'Developer'),
(107,10,'P3',180,'Analyst'),
(108,5,'P4',60,'UI/UX'),
(109,8,'P2',110,'Ops Manager'),
(110,9,'P4',70,'Developer');


--Q1. Count developers in each department


SELECT Department, COUNT(*) AS Total_Developers
FROM Developers
GROUP BY Department;

--Q2. Total allocation hours per project
SELECT P.ProjectName, SUM(A.AllocHours) AS Total_Hours
FROM Project P
JOIN ProjectAllocations A ON P.ProjectID = A.ProjectID
GROUP BY P.ProjectName;

--Q3. Average salary by department

--?? Hint: GROUP BY

SELECT Department, AVG(BaseSalary) AS Avg_Salary
FROM Developers
GROUP BY Department;

--Q4. List developers with their project names

--?? Hint: JOIN (3 tables)

SELECT D.DevName, P.ProjectName
FROM Developers D
JOIN ProjectAllocations A ON D.DevID = A.DevID
JOIN Project P ON A.ProjectID = P.ProjectID;

--Q5. Count developers working on each project


SELECT P.ProjectName, COUNT(A.DevID) AS Total_Developers
FROM Project P
JOIN ProjectAllocations A ON P.ProjectID = A.ProjectID
GROUP BY P.ProjectName;




Q6. Total salary of developers per department

?? Hint: SUM + GROUP BY

SELECT Department, SUM(BaseSalary) AS Total_Salary
FROM Developers
GROUP BY Department;


Q7. Projects with total allocation hours > 200

?? Hint: HAVING ??

SELECT P.ProjectName, SUM(A.AllocHours) AS Total_Hours
FROM Project P
JOIN ProjectAllocations A ON P.ProjectID = A.ProjectID
GROUP BY P.ProjectName
HAVING SUM(A.AllocHours) > 200;


Q8. Highest paid developer in each department

?? Hint: GROUP BY + MAX

SELECT Department, MAX(BaseSalary) AS Max_Salary
FROM Developers
GROUP BY Department;

Q9. Total budget of projects by status

?? Hint: GROUP BY

SELECT Status, SUM(Budget) AS Total_Budget
FROM Project
GROUP BY Status;


Q10. Developers working more than 100 hours

?? Hint: JOIN + WHERE

SELECT D.DevName, A.AllocHours
FROM Developers D
JOIN ProjectAllocations A ON D.DevID = A.DevID
WHERE A.AllocHours > 100;



