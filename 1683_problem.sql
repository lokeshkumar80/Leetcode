USE db;
Create table If Not Exists Tweets(tweet_id int, content varchar(50));
Truncate table Tweets;
insert into Tweets (tweet_id, content) values ('1', 'Let us Code');
insert into Tweets (tweet_id, content) values ('2', 'More than fifteen chars are here!');

# Write your MySQL query statement below

-- take this as Note ...
-- MySQL stores text using a character set (e.g. latin1, utf8 (utf8mb3), utf8mb4). Some characters need more than 1 byte in UTF-8:
-- ASCII characters (A–Z, digits, space, punctuation) are 1 byte each.
-- Many Latin accented characters (e.g. é) are 2 bytes in UTF-8.
-- Some symbols (e.g. €) are 3 bytes.
-- Emojis and certain rare scripts are 4 bytes (must use utf8mb4 to store them).
-- CHAR_LENGTH() counts characters (roughly: Unicode code points), while LENGTH() counts the actual bytes stored.
-- Here we are using LENGTH(content) as in content no special character is allowed other than ! ' ' ...

Select tweet_id
From Tweets
Where LENGTH(content) > 15