#include <iostream>
#include <unordered_map>

std::unordered_map<size_t, size_t> mp;

std::size_t fibon(std::size_t N)
{
    if (N <= 1) {
        return N;
    }

    if (mp.find(N) != mp.end()) {

        return mp[N];
    }
    
    mp[N] = fibon(N -1) + fibon(N - 2);

    return mp[N];
}


int main ()
{
    int n = fibon(6);
    std::cout << n;

}

