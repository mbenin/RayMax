//
// Created by max on 9/12/24.
//

#ifndef GAME_H
#define GAME_H

#include <memory>
#include <string>

#include "raylib.h"
#include "IDrawable.h"
#include "IUpdatable.h"

typedef struct {
    int width;
    int height;
    int fps;
    std::string windowTitle;
}RayMaxInitParams;

class RayMax final : IDrawable, IUpdatable{
    public:
        static RayMax* getInstance();
        void Init(const RayMaxInitParams& params);
        void Run();
        void Exit() const;
        bool IsRunning() const;
        RayMax(const RayMax&) = delete;
        RayMax& operator=(const RayMax&) = delete;
        ~RayMax() override;
    private:
        void Draw() override;
        void Update() override;
        static std::unique_ptr<RayMax> instance;
        RayMaxInitParams params;
        static bool destroyed;


        RayMax();
        bool running;
};

#endif //GAME_H
