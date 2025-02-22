#include <iostream> // No need to include <algorithm>

using namespace std;

// Create your custom namespace

    template <typename T,typename U>
    auto maxi(T x, U y) {
        return (x > y) ? x : y;
    }


int main() {
    // Call your custom max function
    cout << maxi(1, 2.6) << '\n';
    return 0;
}
