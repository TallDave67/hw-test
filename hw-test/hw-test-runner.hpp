#include <concepts>
#include <string>
#include <type_traits>
#include <cassert>
#include <iostream>

template<typename T>
concept HasName = requires (T t)
{
    { t.name() } -> std::convertible_to<std::string>;
};

template<typename T>
concept CanBeOn = requires (T t)
{
    { t.is_on() } -> std::convertible_to<bool>;
};

template<typename T>
concept CanBeOff = requires (T t)
{
    { t.is_off() } -> std::convertible_to<bool>;
};

template<typename T>
concept CanBeTurnedOn = requires (T t)
{
    { t.turn_on() } -> std::convertible_to<bool>;
};

template<typename T>
concept CanBeTurnedOff = requires (T t)
{
    { t.turn_off() } -> std::convertible_to<bool>;
};

template<typename T>
concept HasCapacity = requires (T t)
{
    { t.capacity() } -> std::convertible_to<long>;
};

// Template class HwTestRunner
template<typename T>
requires CanBeOn<T> && CanBeOff<T> && CanBeTurnedOn<T> && CanBeTurnedOff<T> && HasCapacity<T>
class HwTestRunner {
public:
    void runTest(T& hardware) {
        std::string name = hardware.name();
        assert(!name.empty());
        assert(hardware.is_off());
        std::cout << name << " is off" << std::endl;
        assert(hardware.turn_on());
        std::cout << name << " has been turned on" << std::endl;
        assert(hardware.is_on());
        std::cout << name << " is on" << std::endl;
        long cap = hardware.capacity();
        assert(cap > 0L);
        std::cout << name << " has capacity = " << cap << std::endl;
        assert(hardware.turn_off());
        std::cout << name << " has been turned off" << std::endl;
        assert(hardware.is_off());
        std::cout << name << " is off" << std::endl;
    }
};
