// hw-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "hw-test-constraining-runner.hpp"
#include "hd-satisfying.h"
#include "cam-satisfying.h"

int main()
{
    HdSatisfying hd;
    HwTestConstrainingRunner1<HdSatisfying> hd_test_constraining_runner;
    hd_test_constraining_runner.runTest(hd);
    std::cout << "====================" << std::endl;
    CamSatisfying cam;
    HwTestConstrainingRunner2<CamSatisfying> cam_test_constraining_runner;
    cam_test_constraining_runner.runTest(cam);

    return 0;
}
