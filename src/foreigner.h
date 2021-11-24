#ifndef FOREIGNER_H
#define FOREIGNER_H

#include <Godot.hpp>
#include <Reference.hpp>
#include <String.hpp>

#include "crossplatform.h"
#include "foreignlibrary.h"

namespace godot {

class Foreigner : public Reference {
    GODOT_CLASS(Foreigner, Reference)

public:
    static void _register_methods();

    Foreigner();
    ~Foreigner();

    void _init();

    Ref<ForeignLibrary> open(String path);

    void _process(float delta);
};

}

#endif
