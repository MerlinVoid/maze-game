#ifndef UI_H
#define UI_H

#include <iostream>
#include "GameEngine.h"
#include "ScoreBoard.h"

class UI {
private:
    int gridRows;
    int gridCols;

public:
    UI(int rows = 9, int cols = 9);
    ~UI() = default;

    // Terminal screen management
    void clearScreen() const;
    void renderWelcomeBanner() const;
    void renderControls() const;
    void renderFrame(const GameEngine& engine, const ScoreBoard& sb) const;
    void renderWinScreen(const ScoreBoard& sb) const;

    // Cross-platform instant single-key input (no Enter required)
    char getInstantInput() const;
};

// Operator Overloading << for GameEngine so the entire board can be printed via std::cout << engine
std::ostream& operator<<(std::ostream& os, const GameEngine& engine);

#endif