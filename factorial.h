class factorial{

public:

	int fact(int number) {
		int temp;

		if (number <= 1) return 1;

		temp = number * fact(number - 1);
		return temp;
	}

};