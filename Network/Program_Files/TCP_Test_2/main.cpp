#include <iostream>

#include <SFML/Network.hpp>



int main()
{
    /*
    sf::TcpListener listener;

    // bind the listener to a port
    if (listener.listen(53000) != sf::Socket::Done)
    {
        // error...
    }

    // accept a new connection
    sf::TcpSocket client;
    if (listener.accept(client) != sf::Socket::Done)
    {
        // error...
    }
    */


    /*
    std::vector<int> primes
    { 2 };

    int start
    { primes[0] + 1 };

    const int stop
    { 100000 };

    for (int count{ start }; count <= stop; count += 2)
    {
        bool is_prime
        { true };

        for (int index { 0 }; count/2 >= primes[index]; ++index)
        {
            if (count % primes[index] == 0)
            { is_prime = false; }
        }

        if (is_prime)
        { primes.push_back(count); }
    }

    int index
    { 1 };

    for (const int prime : primes)
    {
        std::cout << "Prime number " << index << " : " << prime << '\n';
        ++index;
    }
    */

    return 0;
}

