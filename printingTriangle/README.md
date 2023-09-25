The function prints a triangle based on the entered integer n. The triangle must have n*2 -1 rows and the first row must be the same as the last and so on ({i - the number of the last row, f - the number of the current row}; 1 = k[i], 2 = k[i - 1], ... f = k[i - f]; this sequence continues until f = n/2 {n- number of rows} ) which means that the middle is reached. Each row must contain g numbers. The first number is 1, and the second is 2, the third is 3 (arithmetic progression which has step one) the progression continues depending on which row the numbers are: 3 means the row looks like this: 1 2 3, 10 means the row looks like this: 1 2 3 4 5 6 7 8 9 10. If the rows get past the middle row the next row  copies the row before the middle one and so on.

Sample input: 7

Sample output:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
