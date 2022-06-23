#include "Time.h"

Time makeTime(int first, int second)
{
	Time t(first, second);
	return t;
}

int main()
{
	Time a(3, 13);
	cout << "Total minutes  = " << a.minutes() << "\n\n";
	cout << "Size of class = " << sizeof(a) << "\n\n";

	cout << "++a : " << ++a << '\n';
	cout << "--a : " << --a << '\n';
	cout << "a++ : " << a++ << '\n';
	cout << "a-- : " << a-- << "\n\n";

	Time b(5, 4);
	cout << string(b);
	cout << "Total minutes  = " << b.minutes() << "\n\n";

	Time c = b;
	cout << "Hours = " << c.getFirst() << '\n';
	cout << "Minutes = " << c.getSecond() << '\n';
	cout << "Total minutes  = " << c.minutes() << "\n\n";

	Time d = makeTime(2, 2);
	cout << "Hours = " << d.getFirst() << '\n';
	cout << "Minutes = " << d.getSecond() << '\n';
	cout << "Total minutes  = " << d.minutes() << "\n\n";

	Time e;
	cin >> e;
	cout << e << '\n';

	cin.get();
	cin.get();
	return 0;
}