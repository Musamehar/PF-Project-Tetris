#include <raylib.h>
#include "game.h"
#include "colors.h"
#include <iostream>

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{
    InitWindow(500, 620, "Zeeshan's Tetris");
    SetTargetFPS(60);

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        UpdateMusicStream(game.music);
        game.HandleInput();
        if (EventTriggered(0.5))
        {
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Score", { 365.0f, 15.0f }, 38.0f, 2.0f, WHITE);
        DrawTextEx(font, "Next", { 370.0f, 175.0f }, 38.0f, 2.0f, WHITE);
        if (game.gameOver)
        {
            DrawTextEx(font, "GAME OVER", { 320.0f, 450.0f }, 38.0f, 2.0f, WHITE);
        }
        DrawRectangleRounded({ 320.0f, 55.0f, 170.0f, 60.0f }, 0.3f, 6, lightBlue);

        char scoreText[10];
        sprintf_s(scoreText, "%d", game.score); 
        Vector2 textSize = MeasureTextEx(font, scoreText, 38.0f, 2.0f);

        DrawTextEx(font, scoreText, { 320.0f + (170.0f - textSize.x) / 2.0f, 65.0f }, 38.0f, 2.0f, WHITE);
        DrawRectangleRounded({ 320.0f, 215.0f, 170.0f, 180.0f }, 0.3f, 6, lightBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}
