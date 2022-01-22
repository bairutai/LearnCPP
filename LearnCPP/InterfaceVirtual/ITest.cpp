#include "ITest.h"



ITest::ITest()
{
	// 在父类构造函数中调用虚函数，虚函数会退化为普通函数
	// 因为类还没有构造完成，多态还没有生效
	init();

	// 在父类构造函数中调用纯虚函数编译不通过
	// 原因与上面的类似，子类还没有构造完成
	// test();

	// 在父类构造函数中先调用虚函数,然后在虚函数中调用纯虚函数
	// 可以编译通过，但运行会崩溃
	// init();
}


ITest::~ITest()
{
}

void ITest::init()
{
	test();
}
