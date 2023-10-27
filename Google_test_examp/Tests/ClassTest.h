//
// Created by alicee on 25.10.2023.
//

#ifndef GOOGLE_TEST_EXAMP_CLASSTEST_H
#define GOOGLE_TEST_EXAMP_CLASSTEST_H


class ClassTest {
private:
    int number;
public:
    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        ClassTest::number = number;
    }

};


#endif //GOOGLE_TEST_EXAMP_CLASSTEST_H
