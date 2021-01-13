#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3]; 
	test_val[0] = "./c-echo";
	test_val[1] = "hello";
	test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString){
	char* test_val[1];
	test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, numberString){
	char* test_val[3];
	test_val[0] = "./c-echo";
	test_val[1] = "111";
	test_val[2] = "222";
	EXPECT_EQ("111 222", echo(3,test_val));
}

TEST(EchoTest, combineString){
	char* test_val[3];
	test_val[0] = "./c-echo";
	test_val[1] = "Hello";
	test_val[2] = "";
	EXPECT_EQ("Hello ", echo(3,test_val));
}

TEST(EchoTest, randomString){
	char* test_val[3];
	test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1,test_val));
}

int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
