#include <iostream>

template<typename... Ts>
int sum(Ts... args)
{
   return (args + ...);
}

template<typename... Ts>
int sub(Ts... args)
{
   return (args - ...);
}

template<typename... Ts>
int mul(Ts... args)
{
    return (args * ...);
}

int main()
{
   std::cout << sum(1, 2, 3, 4) << std::endl; 
   std::cout << mul(1, 2, 3, 4) << std::endl; 
   std::cout << sub(4, 5, 6, 7) << std::endl; 
}
