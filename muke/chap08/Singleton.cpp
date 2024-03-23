//
// Created by m1513 on 2024/3/23.
//

#include "Singleton.h"

// = default 默认实现
Singleton::Singleton() = default;
Singleton::~Singleton() = default;


const Singleton *Singleton::getInstance() {
    if (!instance) {
        instance = new Singleton;
    }
    return instance;
}
