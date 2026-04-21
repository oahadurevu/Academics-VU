/* ================================
   STEP 1: Create Database (Server part)
   ================================ */
CREATE DATABASE LAB_ASSIGNMENT1;
USE LAB_ASSIGNMENT1;



/* ================================
   STEP 2: Create WORKER Table
   ================================ */

CREATE TABLE WORKER (
    WORKER_ID INT PRIMARY KEY,
    FIRST_NAME VARCHAR(50) UNIQUE,
    LAST_NAME VARCHAR(50),
    DEPARTMENT VARCHAR(50),
    SALARY INT CHECK (SALARY > 100)
);


/* ================================
   STEP 3: Insert Sample Data
   ================================ */

INSERT INTO WORKER VALUES
(1, 'Sanjoy', 'Das', 'Admin', 12000),
(2, 'Asad', 'Khan', 'HR', 9000),
(3, 'Rafi', 'Ahmed', 'Admin', 15000),
(4, 'Nila', 'Roy', 'IT', 20000),
(5, 'Mitu', 'Islam', 'HR', 11000),
(6, 'Arif', 'Hossain', 'Admin', 18000),
(7, 'Sumi', 'Akter', 'IT', 9500),
(8, 'Tanvir', 'Hasan', 'Admin', 50000);


/* ================================
   STEP 4: Queries
   ================================ */

-- 1. Display all information of WORKER table
SELECT * FROM WORKER;

-- 2. Display all information of first 5 employees
SELECT * FROM WORKER
LIMIT 5;

-- 3. Display FIRST_NAME + LAST_NAME as FULL_NAME
SELECT CONCAT(FIRST_NAME, ' ', LAST_NAME) AS FULL_NAME
FROM WORKER;

-- 4. Display complete record of employees working in Admin department
SELECT * FROM WORKER
WHERE DEPARTMENT = 'Admin';

-- 5. Find employees whose salary is greater than 10000
SELECT FIRST_NAME, LAST_NAME
FROM WORKER
WHERE SALARY > 10000;

-- 6. Find employees whose salary is greater than Sanjoy
SELECT FIRST_NAME, LAST_NAME
FROM WORKER
WHERE SALARY > (
    SELECT SALARY FROM WORKER
    WHERE FIRST_NAME = 'Sanjoy'
);

-- 7. Update salary to 95000 whose WORKER_ID is 8
UPDATE WORKER
SET SALARY = 95000
WHERE WORKER_ID = 8;

-- 8. Delete record of employee whose FIRST_NAME is Asad
DELETE FROM WORKER
WHERE FIRST_NAME = 'Asad';