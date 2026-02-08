#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>

struct Tick {
    std::string symbol;
    double price;
};

int main()
{
    Tick t{"AAPL", 180.0};

    int positionQty = 10; //you own 10 shares
    double avgPrice = 180.0;

    for (int i = 0; i < 10; ++i) {
        double move = (std::rand() % 2 == 0) ? 0.5 : -0.5;
        t.price += move;

        double unrealizedPnL = (t.price - avgPrice) * positionQty;

        std::cout << t.symbol
                  << " | Price: " << t.price 
                  << " | Position: " << positionQty
                  << " | Unrealized PnL: " << unrealizedPnL
                  << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::srand(static_cast<unsigned>(std::time(nullptr)));
    }

    return 0;
}

