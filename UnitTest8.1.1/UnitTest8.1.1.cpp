#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Pavilion\Desktop\Універ\Алгоритмізація та програмування\лаб 8.1\lab8.1.4\lab8.1.4\lab8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "abcsdiedabc";
			int a = Itr(str);
			Assert::AreEqual(a, 2);
		}
	};
}
