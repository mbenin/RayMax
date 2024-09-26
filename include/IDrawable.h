//
// Created by max on 9/24/24.
//

#ifndef IDRAWABLE_H
#define IDRAWABLE_H
class IDrawable {
    public:
    virtual ~IDrawable() = 0;
    virtual void Draw() = 0;
};

inline IDrawable::~IDrawable() {}

#endif //IDRAWABLE_H
