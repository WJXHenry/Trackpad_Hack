#include <Windows.h>
#include <iostream>

using namespace std;

int main() {

	int xPos = 0;
	int yPos = 0;

	int maxWidth = ::GetSystemMetrics(SM_CXSCREEN);
	int maxHeight = ::GetSystemMetrics(SM_CYSCREEN);

	cout << maxWidth << endl;
	cout << maxHeight << endl;

	SetCursorPos(1366,768);

	cout << "Enter x position: ";
	cin >> xPos;
	cout << "Enter y position: ";
	cin >> yPos;

	SetCursorPos(xPos, yPos);

	return 0;

}
