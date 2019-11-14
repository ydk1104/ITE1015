#ifndef class_function
#define class_function

class A{
	public:
		virtual void test1();
		virtual void test2() = 0;
};

class B:public A{
	public:
		virtual void test2();
};

class C:public A{
	public:
		virtual void test1();
		virtual void test2();
};

class BB:public B{
	public:
		virtual void test1();
};

#endif
