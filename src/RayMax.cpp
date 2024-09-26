#include "RayMax.h"

#include <valarray>

std::unique_ptr<RayMax> RayMax::instance = nullptr;
bool RayMax::destroyed = false;

RayMax *RayMax::getInstance() {

    if(destroyed) {
        TraceLog(LOG_WARNING, "Attemped to access RayMax after ir was destroyed.");
        return nullptr;
    }

    if(instance == nullptr) {
        instance = std::make_unique<RayMax>();
    }
    return instance.get();
}


void RayMax::Draw() {

}

void RayMax::Update() {

}


void RayMax::Init(const RayMaxInitParams& params) {
    this->params = params;
    InitWindow(params.width, params.height, params.windowTitle.c_str());
    SetTargetFPS(params.fps);
}

void RayMax::Run() {
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
}

RayMax::RayMax() = default;

RayMax::~RayMax() {

    CloseWindow();
}

void RayMax::Exit() const {
    TraceLog(LOG_INFO,"Destroying RayMax");
    instance = nullptr;
    delete(this);
}

