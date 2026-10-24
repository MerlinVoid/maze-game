# C++ Terminal Maze Game (OOP Project)

Welcome to our mid-semester C++ Object-Oriented Programming project. This is a single-player terminal-based maze game designed to demonstrate core OOP principles.

## 🎮 Gameplay
Navigate your character (\`P\`) through the dynamically generated grid to reach the Exit (\`E\`) while avoiding walls (\`#\`). 

**Controls:** 
- \`W\` : Move Up
- \`A\` : Move Left
- \`S\` : Move Down
- \`D\` : Move Right

## 🏗️ Project Structure
To prevent merge conflicts, the codebase is split:
- **\`include/\`** : Contains all header files (\`.h\`) outlining class definitions.
- **\`src/\`** : Contains all implementation files (\`.cpp\`) including the main loop.

## 🧠 OOP Concepts Implemented
1. **Dynamic Memory Management**: Using \`new\` and \`delete[]\` to generate scaling maze grids safely.
2. **Encapsulation**: Private class members accessed only via explicit getters/setters.
3. **Constructors & Destructors**: Safe initialization of the engine and prevention of memory leaks.
4. **Inheritance & Reusability**: Base \`GameObject\` classes for player and enemies.
5. **Composition**: The \`GameEngine\` containing instances of the Maze and Player.
6. **Operator Overloading & Friend Functions**: Custom terminal rendering logic by overloading the \`<<\` operator.

## 🚀 How to Compile and Run
Compile the game from the root directory of the repository:

\`\`\`bash
g++ src/*.cpp -Iinclude -o mazegame
\`\`\`

Run the executable:
- **Linux/Mac:** \`./mazegame\`
- **Windows:** \`mazegame.exe\`
