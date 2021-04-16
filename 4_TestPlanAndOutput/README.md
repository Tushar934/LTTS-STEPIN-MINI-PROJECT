<h1> Test Plans </h1>
<h2> High Level Test Plans </h2>
<br>

|      ID       |                   Description                |     Expected I/P       |   Expected O/P    |  Actual O/P  |     Type        |      Status     |
| ------------- | ---------------------------------------      | ---------------------  | ----------------  | ------------ | --------------- | --------------  |
|      H1       |          The choice is 1 for Addition.       |       10.0,5.0         |     15.000000     |   15.000000  |  Requirement    |     Success     |
|      H2       |          The choice is 2 for Sustration.     |       10.0,5.0         |      5.000000     |    5.000000  |  Requirement    |     Success     |
|      H3       |          The choice is 3 for Multiplication. |       1.0,5.0          |      5.000000     |    5.000000  |  Requirement    |     Success     |
|      H4       |          The choice is 4 for Division.       |       10,5             |      2.000000     |    2.000000  |  Requirement    |     Success     |
|      H5       |          The choice is 5 for Square root.    |       4                |      2.000000     |    2.000000  |  Requirement    |     Success     |
|      H6       |          The choice is 6 for x^y.            |       3,3              |     27.000000     |   27.000000  |  Requirement    |     Success     |
|      H7       |          The choice is 7 for x^2.            |       4.0              |     16.000000     |   16.000000  |  Requirement    |     Success     |
|      H8       |          The choice is 8 for x^3.            |       3.0              |     27.000000     |   27.000000  |  Requirement    |     Success     |
|      H9       |          The choice is 9 for 1/x.            |       10               |      0.100000     |    0.100000  |  Requirement    |     Success     |
|      H10      |          The choice is 10 for x^(1/y).       |       3,3              |      1.442250     |    1.442250  |  Requirement    |     Success     |
|      H11      |          The choice is 11 for x^(1/3.        |        6               |      1.817121     |    1.817121  |  Requirement    |     Success     |
|      H12      |          The choice is 12 for 10^x.          |        6               |  1000000.000000   | 1000000.000000| Requirement    |     Success     |
|      H13      |          The choice is 13 for x!.            |        5               |        120        |     120      |  Requirement    |     Success     |
|      H14      |          The choice is 14 for Percent.       |       5,2              |        0.10       |     0.10     |  Requirement    |     Success     |
|      H15      |          The choice is 15 for log10(x).      |       10               |        1.00       |     1.00     |  Requirement    |     Success     |
|      H16      |          The choice is 16 for Modulus.       |       6,5              |          1        |       1      |  Requirement    |     Success     |
|      H17      |          The choice is 17 for Sin(x).        |        8               |        0.14       |     0.14     |  Requirement    |     Success     |
|      H18      |          The choice is 18 for Cos(x).        |        8               |        0.99       |     0.99     |  Requirement    |     Success     |
|      H19      |          The choice is 19 for Tan(x).        |        8               |        0.14       |     0.14     |  Requirement    |     Success     |
|      H20      |          The choice is 20 for Cosec(x).      |        8               |        7.19       |     7.19     |  Requirement    |     Success     |
|      H21      |          The choice is 21 for Sec(x).        |        8               |        1.01       |     1.01     |  Requirement    |     Success     |
|      H22      |          The choice is 22 for Cot(x).        |        8               |        7.12       |     7.12     |  Requirement    |     Success     |

<br>




<h2> Low Level Test Plans </h2> 
<br>

|      ID       |                   Description                |     Expected I/P       |   Expected O/P    |  Actual O/P  |     Type        |      Status     |
| ------------- | ---------------------------------------      | ---------------------  | ----------------  | ------------ | --------------- | --------------  |
|      L1       |          Negative numbers Addition.          |       -10.0,-5.0       |     -15.000000    |   -15.000000 |  Requirement    |     Success     |
|      H2       |          Negative number and Positive Substration.|    -10.0,5.0      |      -15.000000   |   -15.000000 |  Requirement    |     Success     |
|      H3       |          Negative number Multiplication.     |       -10.0,-5.0       |      50.000000    |    50.000000 |  Requirement    |     Success     |
|      H4       |          Number divide by 0 for Division.    |        10.0,0          |      -1.000000    |    -1.000000 |  Scenario       |     Success     |
|      H5       |          Negative number for Square root.    |        -4              |      -1.000000    |    -1.000000 |  Scenario       |     Success     |
|      H6       |          Neagtive numbers for x^y.           |       -3.0,-4.0        |      0.012346     |     0.012346 |  Requirement    |     Success     |
|      H7       |          Negative number for x^2.            |       -4.0             |      16.000000    |    16.000000 |  Requirement    |     Success     |
|      H8       |          Negative number for x^3.            |       -3.0             |     -27.000000    |   -27.000000 |  Requirement    |     Success     |
|      H9       |          Negative number for factorial.      |       -8               |        -1         |     -1       |  Scenario       |     Success     |
|      H10      |          Zero Value for factorial.           |        0               |         1         |      1       |  Scenario       |     Success     |
|      H11      |          Negative value for 10^x.            |        -9              |      0.000000     |    0.000000  |  Scenario       |     Success     |
|      H12      |          Zero value for log10(x).            |        0.0             |       -1.00       |    -1.00     |  Scenario       |     Success     |
|      H13      |          Negative value for log10(x).        |        -9              |       -1.00       |    -1.00     |  Scenario       |     Success     |
|      H14      |          Negative values for Percent.        |       -5,-8            |        0.40       |     0.40     |  Requirement    |     Success     |
|      H15      |          One positive nad one negative for Percent.|  3.0,-4.0        |        -0.12      |    -0.12     |  Requirement    |     Success     |
|      H16      |          Negative numbers for division.      |       -5,-8            |       0.625000    |    0.625000  |  Requirement    |     Success     |
|      H17      |          Negative value for Sin(x).          |        -8              |        -0.14      |     -0.14    |  Requirement    |     Success     |
|      H18      |          Negative value for Cos(x).          |        -8              |        0.99       |     0.99     |  Requirement    |     Success     |
|      H19      |          Negative value for Tan(x).          |        -8              |        -0.14      |     -0.14    |  Requirement    |     Success     |
|      H20      |          Negative value for Cosec(x).        |        -8              |        -7.19      |     -7.19    |  Requirement    |     Success     |
|      H21      |          Negative value for Sec(x).          |        -8              |        1.01       |     1.01     |  Requirement    |     Success     |
|      H22      |          Negative value for Cot(x).          |        -8              |        -7.12      |     -7.12    |  Requirement    |     Success     |

<br>
