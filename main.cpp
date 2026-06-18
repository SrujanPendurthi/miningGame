#include <raylib.h>

// add sprite component
class Player{
    private:
        Vec2 position{};
        float health{}; 
    };
namespace ECS {
    using Entity = std::unint32_t;
    
    struct Vec2{
        float x{};
        float y{};
    };

    struct destructible{
        bool destructible{};
    };
    class World{
        public: 
            Entity createEntity(){
                return 
            }
    };

};


int main() {
    InitWindow(1000,700,"pokemon");
    setTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}