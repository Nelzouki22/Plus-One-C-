# Problem: Plus One

## Description

The "Plus One" problem involves incrementing a large integer represented as an array of digits. Each element of the array represents a single digit of the integer, ordered from the most significant to the least significant. The task is to add one to this integer and return the resulting array of digits.

### Examples

1. **Example 1:**
   - **Input:** `digits = [1, 2, 3]`
   - **Output:** `[1, 2, 4]`
   - **Explanation:** The array represents the integer 123. Incrementing by one gives 124.

2. **Example 2:**
   - **Input:** `digits = [4, 3, 2, 1]`
   - **Output:** `[4, 3, 2, 2]`
   - **Explanation:** The array represents the integer 4321. Incrementing by one gives 4322.

3. **Example 3:**
   - **Input:** `digits = [9]`
   - **Output:** `[1, 0]`
   - **Explanation:** The array represents the integer 9. Incrementing by one gives 10.

### Constraints

- `1 <= digits.length <= 100`
- `0 <= digits[i] <= 9`
- The array does not contain any leading zeros.

## C++ Solution

The solution is implemented in C++ as follows:

```cpp
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Start from the last digit in the array
        for (int i = digits.size() - 1; i >= 0; --i) {
            // If the digit is less than 9, we can simply increment it by 1
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits; // Return the result
            }
            // If the digit is 9, it becomes 0
            digits[i] = 0;
        }
        
        // If all digits were 9, we need to add 1 at the beginning of the array
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution solution;
    
    // Usage examples
    vector<int> digits1 = {1, 2, 3};
    vector<int> result1 = solution.plusOne(digits1);
    for (int num : result1) {
        cout << num << " "; // Output: 1 2 4
    }
    cout << endl;

    vector<int> digits2 = {4, 3, 2, 1};
    vector<int> result2 = solution.plusOne(digits2);
    for (int num : result2) {
        cout << num << " "; // Output: 4 3 2 2
    }
    cout << endl;

    vector<int> digits3 = {9};
    vector<int> result3 = solution.plusOne(digits3);
    for (int num : result3) {
        cout << num << " "; // Output: 1 0
    }
    cout << endl;

    return 0;
}
Conclusion
This implementation effectively handles the incrementing of large integers represented as arrays of digits, ensuring that the constraints are respected and the results are accurate.


### كيفية استخدام هذا النموذج

1. **نسخ الكود:** يمكنك نسخ هذا الكود ولصقه في ملف `README.md` الخاص بمشروعك.
2. **تخصيص المحتوى:** يمكنك تخصيص العناوين أو الشروحات حسب الحاجة، أو إضافة معلومات إضافية حول المشروع.
3. **تنسيق Markdown:** تأكد من أن التنسيق صحيح وأن الرموز البرمجية تظهر بشكل واضح.

إذا كنت بحاجة إلى أي تعديلات إضافية أو لديك أي استفسارات، فلا تتردد في إخباري!
