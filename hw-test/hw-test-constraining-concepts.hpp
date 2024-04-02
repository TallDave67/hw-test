#include <concepts>
#include <string>
#include <type_traits>

template<typename T>
concept HasName = requires (T t)
{
    { t.name() } -> std::convertible_to<std::string>;
};

template<typename T>
concept CanBeOn = requires (T t)
{
    { t.power().is_on() } -> std::convertible_to<bool>;
};

template<typename T>
concept CanBeOff = requires (T t)
{
    { t.power().is_off() } -> std::convertible_to<bool>;
};

template<typename T>
concept CanBeTurnedOn = requires (T t)
{
    { t.power().turn_on() } -> std::convertible_to<bool>;
};

template<typename T>
concept CanBeTurnedOff = requires (T t)
{
    { t.power().turn_off() } -> std::convertible_to<bool>;
};

template<typename T>
concept HasCapacity = requires (T t)
{
    { t.storage().capacity() } -> std::convertible_to<long>;
};

template<typename T>
concept HasFocalLength = requires (T t)
{
    { t.optics().focal_length() } -> std::convertible_to<double>;
};
