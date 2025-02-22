#include <iostream> // No need to include <algorithm>

using namespace std;

// Create your custom namespace
namespace myspace {
    template <typename T>
    T max(T x, T y) {
        return (x > y) ? x : y;
    }
}

int main() {
    // Call your custom max function
    cout << myspace::max(1, 2) << '\n';
    return 0;
}
