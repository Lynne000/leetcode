# 10/27/2018        Saturday
## 7:33 AM leetcode 48
## 7:42 AM leetcode 48

key idea here: rotate 90 degrees is equal to **对折（horizontal mirror), and then transpose**

1 2 3          7  8  9       7  4  1 
4 5 6   -->    4  5  6  -->  8  5  2
7 8 9          1  2  3       9  6  3
        mirror         transpose

the frist time submission, got error. 
error: when I do mirror, the end index should be less than \frac{n}{2}, not less than and equal to \frac{n}{2}
