#include <raylib.h>

struct Vec2{
    float x{};
    float y{};
};
// add sprite component
class Player{
    private:
        Vec2 position{};
        float health{}; 
    };
class World{};



int main() {
    InitWindow(1000,700,"pokemon");
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}