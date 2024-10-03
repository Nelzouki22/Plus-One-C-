#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // بدء من الرقم الأخير في المصفوفة
        for (int i = digits.size() - 1; i >= 0; --i) {
            // إذا كان الرقم أقل من 9، يمكن زيادة الرقم بمقدار 1
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits; // إرجاع النتيجة
            }
            // إذا كان الرقم يساوي 9، يتم تحويله إلى 0
            digits[i] = 0;
        }

        // إذا كانت جميع الأرقام 9، نحتاج إلى إضافة 1 في بداية المصفوفة
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution solution;

    // أمثلة على الاستخدام
    vector<int> digits1 = { 1, 2, 3 };
    vector<int> result1 = solution.plusOne(digits1);
    for (int num : result1) {
        cout << num << " "; // الناتج: 1 2 4
    }
    cout << endl;

    vector<int> digits2 = { 4, 3, 2, 1 };
    vector<int> result2 = solution.plusOne(digits2);
    for (int num : result2) {
        cout << num << " "; // الناتج: 4 3 2 2
    }
    cout << endl;

    vector<int> digits3 = { 9 };
    vector<int> result3 = solution.plusOne(digits3);
    for (int num : result3) {
        cout << num << " "; // الناتج: 1 0
    }
    cout << endl;

    return 0;
}
