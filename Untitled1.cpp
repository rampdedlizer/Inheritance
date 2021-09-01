#include <iostream>

class staff
{
	int code;
	std::string name;
public:
	void input()
	{
		std::cout<<""<<std::endl;
		std::cout << "Enter your code : ";
		std::cin >> code;

		std::cout << "Enter your name : ";
		std::cin >> name;
	}
	void display()
	{
		std::cout << "Your code number is " << code << std::endl;
		std::cout << "Your name is " << name << std::endl;
	}
};

class teacher :public staff
{
protected:
	std::string subject;
	std::string publication;
public:
	void in1()
	{
		input();
		std::cout << "Enter the subject you are teaching : ";
		std::cin >> subject;

		std::cout << "Enter the publication you are using : ";
		std::cin >> publication;
	}

	void d1()
	{
		
		display();

		std::cout << "The subject you are teaching is " << subject << std::endl;
		std::cout << "The publication that you are using is " << publication << std::endl;

		std::cout << "" << std::endl;
	}
};

class officer :public staff
{
protected:
	int grade;
public:
	void enter()
	{
		input();
		std::cout << "Enter your grade : ";
		std::cin >> grade;
	}
	
	void out()
	{
		
		display();
		std::cout << "Your grade is " << grade << std::endl;

		std::cout << "" << std::endl;
	}

};

class typist :public staff
{
protected:
	int speed;
public:

};

class casual :public typist
{
	int dw;
public:
	void speak()
	{
		input();

		std::cout << "Enter your daily wages : ";
		std::cin >> dw;

		std::cout << "Enter your speed : ";
		std::cin >> speed;
	}
	void spread()
	{
		
		display();
		
		std::cout << "Your speed is " << speed << std::endl;
		std::cout << "Your daily wages is " << dw << std::endl;
	}
};

int main()
{
	// Teacher
	teacher	a1;
	a1.in1();
	//a1.d1();

	std::cout << "" << std::endl;
	
	//Officer
	officer a2;
	a2.enter();
	//a2.out();

	//Casual
	casual a3;
	a3.speak();
	//a3.spread();

	int z;

	std::cout << "Enter whether you want to access teachers' credentials : ";
	std::cin >> z;

	if (z == 0)
	{
		a1.d1();
	}
	else if(z == 1)
	{
		a2.out();
	}
	else{ a3.spread(); }
		
}



#include <iostream>

class person
{
protected:
	std::string name;
	int code;
public:
	void input()
	{
		std::cout << "Enter your name : ";
		std::cin >> name;

		std::cout << "Enter your code : ";
		std::cin >> code;
	}
	void display()
	{
		std::cout << "Name -> " << name << std::endl;
		std::cout << "Code -> " << code << std::endl;
	}
};

class account :public virtual person
{
protected:
	int pay;
public:
	void enter()
	{
		std::cout << "Enter your pay : ";
		std::cin >> pay;
	}
	void d1()
	{
		std::cout << "Pay -> " << pay << std::endl;
	}
};

class admin :virtual public person
{
protected:
	int exp;
public:
	void speak()
	{
		std::cout << "Enter your experience( in yrs) : ";
		std::cin >> exp;
	}
	void d2()
	{
		std::cout << "Experience -> " << exp << std::endl;
	}
};

class object :public account, public admin
{
public:
	void result()
	{
		input();
		enter();
		speak();
		display();
		d1();
		d2();
	}
};

int main()
{
	object p1;
	p1.result();
}
