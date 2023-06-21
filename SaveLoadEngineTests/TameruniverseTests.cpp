#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <iostream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TameruniverseTests
{
	TEST_CLASS(FileManagerTests)
	{
	public:
		
		TEST_METHOD(OpenFileTest)
		{
			ofstream File;
			File.open("Universe.xml", ios::app);
		}
		TEST_METHOD(ReadFileTest)
		{
			ofstream File;
			char const* Data = "Universe.xml";
			char buffer[100];
			#pragma warning(disable : 4996)
			FILE* FileManager = fopen(Data, "r+b");
			while ((fgets(buffer, 100, FileManager)) != NULL) {
				cout << buffer;
			}
		}
		TEST_METHOD(WriteFileTest)
		{
			const char* Data = "<Universe>";
			ofstream File("Universe.xml", ios::app);
			File << Data << endl;
		}
		TEST_METHOD(CloseFileTest)
		{
			ofstream File;
			File.close();
		}
	};
	TEST_CLASS(TagBuilderTests)
	{
	public:

		TEST_METHOD(OpenFileTest)
		{
			
		}
		TEST_METHOD(ReadFileTest)
		{
			
		}
		TEST_METHOD(WriteFileTest)
		{
			
		}
		TEST_METHOD(CloseFileTest)
		{
			
		}
	};
	TEST_CLASS(SaveLoadEngineTests)
	{
	public:

		TEST_METHOD(LoadFromFile)
		{
			
		}
		TEST_METHOD(SaveToFile)
		{
			FileManagerTests File;
			TagBuilderTests Tager;
			const char* Data = Tager.WriteDefaultString();
			File.OpenFileTest();
			File.WriteFiletest(Data);
			File.CloseFiletest();
		}
	};
}
