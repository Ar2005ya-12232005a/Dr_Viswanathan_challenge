#include <iostream>
#include <stack>
using namespace std;

class StockSpanner {
private:
    stack<pair<int, int>> st;

public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;

        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});
        return span;
    }
};

int main() {
    StockSpanner stockSpanner;

    cout << stockSpanner.next(100) << endl; // 1
    cout << stockSpanner.next(80) << endl;  // 1
    cout << stockSpanner.next(60) << endl;  // 1
    cout << stockSpanner.next(70) << endl;  // 2
    cout << stockSpanner.next(60) << endl;  // 1
    cout << stockSpanner.next(75) << endl;  // 4
    cout << stockSpanner.next(85) << endl;  // 6

    return 0;
}