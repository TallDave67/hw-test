#include <cassert>
#include <iostream>
#include "hw-test-constraining-concepts.hpp"

// Template class HwTestConstrainingRunner1
template<typename T>
requires CanBeOn<T> && CanBeOff<T> && CanBeTurnedOn<T> && CanBeTurnedOff<T> && HasCapacity<T>
class HwTestConstrainingRunner1 {
public:
    void runTest(T& hardware) {
        std::string name = hardware.name();
        assert(!name.empty());
        assert(hardware.power().is_off());
        std::cout << name << " is off" << std::endl;
        assert(hardware.power().turn_on());
        std::cout << name << " has been turned on" << std::endl;
        assert(hardware.power().is_on());
        std::cout << name << " is on" << std::endl;
        long cap = hardware.storage().capacity();
        assert(cap > 0L);
        std::cout << name << " has capacity = " << cap << std::endl;
        assert(hardware.power().turn_off());
        std::cout << name << " has been turned off" << std::endl;
        assert(hardware.power().is_off());
        std::cout << name << " is off" << std::endl;
    }
};

// Template class HwTestConstrainingRunner2
template<typename T>
requires CanBeOn<T> && CanBeOff<T> && CanBeTurnedOn<T> && CanBeTurnedOff<T> && HasCapacity<T> && HasFocalLength<T>
class HwTestConstrainingRunner2 {
public:
    void runTest(T& hardware) {
        std::string name = hardware.name();
        assert(!name.empty());
        assert(hardware.power().is_off());
        std::cout << name << " is off" << std::endl;
        assert(hardware.power().turn_on());
        std::cout << name << " has been turned on" << std::endl;
        assert(hardware.power().is_on());
        std::cout << name << " is on" << std::endl;
        long cap = hardware.storage().capacity();
        assert(cap > 0L);
        std::cout << name << " has capacity = " << cap << std::endl;
        double foc_len = hardware.optics().focal_length();
        assert(foc_len > 0L);
        std::cout << name << " has focal length = " << foc_len << std::endl;
        assert(hardware.power().turn_off());
        std::cout << name << " has been turned off" << std::endl;
        assert(hardware.power().is_off());
        std::cout << name << " is off" << std::endl;
    }
};
