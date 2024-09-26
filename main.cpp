#include "RayMax.h"

int main() {
    RayMax *rm = RayMax::getInstance();

    rm->Init({800,600,60,"RayMax Test"});
    rm->Run();
    rm->Exit();

    return 0;
}
