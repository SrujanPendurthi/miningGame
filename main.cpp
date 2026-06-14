#include <raylib.h>

namespace Entity{
    class Player{
        private:
            Vec2 position();
            float health; 
    };
    class 
};

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