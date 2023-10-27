//
// Created by alicee on 25.10.2023.
//
#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassTest.h"

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test{
    public:
        ClassTest obj;
        ClassDeclaration(){
            obj;
        }

    };
}

TEST_F(ClassDeclaration, Working_test_of_get_number){
    obj.setNumber(123);
    ASSERT_EQ(123,obj.getNumber());
}

TEST_F(ClassDeclaration, Wrong_Test_Check){
    obj.setNumber(3);
    ASSERT_EQ(2,obj.getNumber());
}