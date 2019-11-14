#ifndef dynamic_cast_h
#define dynamic_cast_h

class B
{
public:
	virtual ~B(){}
};
class C : public B
{
public:
    void test_C();
};
class D : public B
{
public:
    void test_D(); 
};


#endif
