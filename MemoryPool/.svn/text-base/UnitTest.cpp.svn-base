#include "ByteMemoryPool.h"
#include <time.h>
#include <stdio.h>

class UnitTest{
	int n,d;
	static JC::ByteMemoryPool *memPool;
public:
	UnitTest(int a=0,int b=1):n(a),d(b){}

	void *operator new(size_t size){return memPool->alloc(size);}
	void operator delete(void *i_ptr,size_t size){memPool->free(i_ptr);}

	static void newMemPool(){memPool = new JC::ByteMemoryPool;}
	static void deleteMemPool(){delete memPool;}
};

JC::ByteMemoryPool * UnitTest::memPool = 0;

int main()
{
	UnitTest *ut_array[1000];
	UnitTest::newMemPool();
	unsigned old_clock = clock();
	unsigned current_clock =0;
	for (int j=0;j<500;j++)
	{
		for (int i=0;i<1000;i++)
		{
			ut_array[i] = new UnitTest(i);
		}
		for (int i =0;i<1000;i++)
		{
			delete ut_array[i];
		}
	}
	current_clock = clock();
	printf("%i\n",current_clock - old_clock);
	UnitTest::deleteMemPool();

}