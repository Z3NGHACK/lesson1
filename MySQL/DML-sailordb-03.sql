use sailordb;

-- 1. find the oldest age of sailor
SELECT MAX(age) AS oldest_age 
FROM Sailors;

--  2. find the oldest sailor's name and age
SELECT sname, age 
FROM Sailors 
WHERE age = (SELECT MAX(age) FROM Sailors);

-- 3. Find the id and name of the sailors with the highest rating.
SELECT sid, sname 
FROM Sailors 
WHERE rating = (SELECT MAX(rating) FROM Sailors);

-- 4. Find the number of sailors and average age of sailors in the database
SELECT COUNT(*) AS number_of_sailors, AVG(age) AS average_age 
FROM Sailors;

-- 5. Find the number of sailors who have made reservation.
SELECT COUNT(DISTINCT sid) AS sailors_with_reservations 
FROM Reserves;

-- 6. Find how many boats that each sailor in the database has reserved. (include all sailors in the output)
SELECT Sailors.sid, Sailors.sname, COUNT(Reserves.bid) AS number_of_boats_reserved
FROM Sailors
LEFT JOIN Reserves ON Sailors.sid = Reserves.sid
GROUP BY Sailors.sid, Sailors.sname;

-- 7. Find how many sailors reserved in each boat. (include all boats)
SELECT Boats.bid, Boats.bname, COUNT(Reserves.sid) AS number_of_sailors
FROM Boats
LEFT JOIN Reserves ON Boats.bid = Reserves.bid
GROUP BY Boats.bid, Boats.bname;

-- 8. Insert a new record to database: sailor sid 64 reserved boat 102 on current date. Find all reservations made within the last 5 days.
INSERT INTO Reserves (sid, bid, day) VALUES (64, 102, CURDATE());
SELECT * FROM Reserves WHERE day >= CURDATE() - INTERVAL 5 DAY;

-- 9. Find the reservation made on October 1998
SELECT * FROM Reserves WHERE MONTH(day) = 10 AND YEAR(day) = 1998;

-- 10. Find the rank of boats based on the number of reservation on that boat. 
SELECT Boats.bid, Boats.bname, COUNT(Reserves.sid) AS number_of_reservations,
RANK() OVER (ORDER BY COUNT(Reserves.sid) DESC) 
FROM Boats
LEFT JOIN Reserves ON Boats.bid = Reserves.bid
GROUP BY Boats.bid, Boats.bname;

