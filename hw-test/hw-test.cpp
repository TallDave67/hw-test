// hw-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "hw-test-runner.hpp"
#include "HardDrive.h"
#include "Camera.h"

int main()
{
    HardDrive hd;
    HwTestRunner<HardDrive> hd_runner;
    hd_runner.runTest(hd);
    std::cout << "====================" << std::endl;
    Camera cam;
    HwTestRunner<Camera> cam_runner;
    cam_runner.runTest(cam);

    return 0;
}
