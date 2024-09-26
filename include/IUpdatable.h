//
// Created by max on 9/24/24.
//

#ifndef IUPDATABLE_H
#define IUPDATABLE_H
class IUpdatable {
  public:
    virtual ~IUpdatable() = 0;
    virtual void Update() = 0;
};

inline IUpdatable::~IUpdatable() {}
#endif //IUPDATABLE_H
