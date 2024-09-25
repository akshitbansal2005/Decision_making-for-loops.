```markdown
# Exploring the Use of For and While Loops in C++

## Aim:
To explore the use of for, while, and do-while loops in C++.

## Software Used:
VS Code

## Theory:

### Loops:
Loops in C++ are control flow structures that allow for the repeated execution of a block of code. They help automate repetitive tasks, iterate over objects, and implement algorithms efficiently.

### Types of Loops:

#### 1. For Loop:
Used when the number of iterations is known beforehand.

#### Syntax:
```cpp
for (initialization; condition; increment/decrement) {
    // loop body
}
```

#### Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    return 0;
}
```

#### 2. While Loop:
Used when the number of iterations is unknown, and the loop continues as long as a condition is true.

#### Syntax:
```cpp
while (condition) {
    // loop body
}
```

#### Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 1;
    while (number <= 5) {
        cout << "Number: " << number << endl;
        number++;
    }
    return 0;
}
```

#### 3. Do-While Loop:
Executes the loop body at least once, then checks the condition. Useful when the loop must run at least once, regardless of the initial condition.

#### Syntax:
```cpp
do {
    // loop body
} while (condition);
```

#### Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 1;
    do {
        cout << "Number: " << number << endl;
        number++;
    } while (number <= 5);
    return 0;
}
```

## Algorithms:

### 1. Inverse Right Triangle:

#### Steps:
1. **Start**
2. **Input**: Read the desired height of the triangle (`n`) from the user.
3. **Initialization**: Set a counter variable `row` to `n`.
4. **Outer Loop**:
    - Repeat while `row` is greater than or equal to 1.
    - Set a counter variable `col` to 1.
5. **Inner Loop**:
    - Repeat while `col` is less than or equal to `row`:
      - Print the desired character (e.g., `*` or `col`) depending on the desired pattern.
      - Increment `col` by 1.
6. **Newline**: Print a newline character to move to the next row.
7. **Decrement**: Decrement `row` by 1.
8. **End**

#### Example Code for Inverse Right Triangle:
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the triangle: ";
    cin >> n;

    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "*"; // You can change '*' to col for a number pattern
        }
        cout << endl;
    }
    return 0;
}
```

### 2. Reverse PRN:

#### Steps:
1. **Input**: Read an integer PRN from the user.
2. **Initialization**: Create a variable `num` to store the extracted digit.
3. **Reversing Loop**:
    - While `PRN` is greater than 0:
      - Extract the last digit of `PRN` using `num = PRN % 10`.
      - Print the extracted digit `num`.
      - Remove the last digit from `PRN` using `PRN = PRN / 10`.
4. **Output**: The reversed number is printed to the console.

#### Example Code for Reversing PRN:
```cpp
#include <iostream>
using namespace std;

int main() {
    int PRN, num;
    cout << "Enter your PRN: ";
    cin >> PRN;

    cout << "Reversed PRN: ";
    while (PRN > 0) {
        num = PRN % 10;
        cout << num;
        PRN = PRN / 10;
    }
    cout << endl;
    
    return 0;
}
```

## Conclusion:
We explored the use of for, while, and do-while loops in C++. We implemented examples using each loop type and applied them to solve common problems such as generating patterns and reversing numbers.
