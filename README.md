# PF-Project-Tetris

A classic Tetris game built with C++ and the Raylib library. This project was developed as part of a Programming Fundamentals course and demonstrates core concepts like object-oriented design, game loops, event handling, and 2D array manipulation.

## ✨ Features

*   **Classic Tetris Gameplay:** Move and rotate the falling tetriminos to complete horizontal lines.
*   **All Seven Tetrominos:** Includes the I, J, L, O, S, T, and Z blocks, each with unique rotation patterns.
*   **Scoring System:** Earn points for clearing lines, with bonus points for clearing multiple lines at once.
*   **"Next Block" Preview:** See which block is coming up next to plan your strategy.
*   **Audio:** Features background music and sound effects for block rotation and line clearing.
*   **Game Over & Restart:** The game ends when the blocks stack to the top, and you can restart immediately by pressing any key.

## 🎮 Controls

*   **Left Arrow:** Move the block left
*   **Right Arrow:** Move the block right
*   **Down Arrow:** Accelerate the block's descent and score a point
*   **Up Arrow:** Rotate the block
  
<div align="center">
  <img width="495" height="649" alt="image" src="https://github.com/user-attachments/assets/b03cc9c6-1314-4daa-80b0-2139059076a8" />
</div>

## 🛠️ Setup and Installation

This project is configured as a Microsoft Visual Studio solution.

### Prerequisites

*   [Microsoft Visual Studio](https://visualstudio.microsoft.com/)
*   [Raylib](https://www.raylib.com/) library configured for your Visual Studio environment.
*   The project requires assets (font and audio files) placed in `Font/` and `Sounds/` directories respectively.
    *   `Font/monogram.ttf`
    *   `Sounds/music.mp3`
    *   `Sounds/rotate.mp3`
    *   `Sounds/clear.mp3`

### Running the Game

1.  Clone the repository:
    ```bash
    git clone https://github.com/musamehar/pf-project-tetris.git
    ```
2.  Navigate to the cloned directory.
3.  Ensure the required asset directories (`Font`, `Sounds`) and files are present in the project's root folder.
4.  Open the `Semester Project.sln` file in Visual Studio.
5.  Build the solution and run the application.

## 📂 Code Structure

The project is organized into several classes to manage different aspects of the game:

*   `main.cpp`: The main entry point, responsible for initializing the window, managing the game loop, and drawing UI elements like the score and next block area.
*   `game.h` / `game.cpp`: Manages the overall game state, handles player input, orchestrates block movements, and contains the core game logic.
*   `grid.h` / `grid.cpp`: Represents the game board, handling the placement of blocks, detecting full lines, and clearing them.
*   `block.h` / `block.cpp`: A base class for all tetriminos, defining common behaviors like movement, drawing, and rotation.
*   `blocks.cpp`: Contains the derived classes for each specific tetromino (e.g., `IBlock`, `JBlock`), defining their unique shapes and rotation states.
*   `position.h` / `position.cpp`: A simple helper class to manage 2D coordinates on the grid.
*   `colors.h` / `colors.cpp`: Defines the color palette used for the blocks and the UI.
