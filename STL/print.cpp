#include <iostream>
#include <sstream>
#include <array>

std::string sep()
{
    return " ";
}

std::string end()
{
    return "\n";
}

std::string arrow()
{   
    return " -> ";
}

template <std::string(*SEP)() = sep, std::string(*END)() = end, typename ...Ts>
void print(Ts... args)
{
    int c{};
    ((std::cout << (c++ ? SEP() : "") << args), ...) << end();
}

template < typename ...Ts>
void print(std::stringstream& ob, Ts... args)
{   
    (ob << ... << args);
}



int main()
{   
    std::stringstream ob;

    print<arrow>( 4, 5.5, "hi");
    print(ob, 4, 5.5, "hi");

    std::string tmp{};
    ob >> tmp;
    
    std::cout << tmp;
}