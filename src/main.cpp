#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int x, y;
		cin >> x >> y;

		if (x < y) {
			cout << "NO BRAINS\n";
		}
		else {
			cout << "MMM BRAINS\n";
		}
	}

	return 0;
}