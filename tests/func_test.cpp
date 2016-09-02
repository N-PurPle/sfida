//============================================================
//     func_test.cpp
//     Copyright(C)2016 N.Takahiro
//============================================================

#include <gtest/gtest.h>
#include <sfida/sfida.hpp>

namespace{
    
class MyFuncTest : public ::testing::Test{};

TEST_F(MyFuncTest,isSame)
{
    EXPECT_EQ(0, sfida::func());
}

} // unnamed namespace



