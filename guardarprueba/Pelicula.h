#pragma once
using namespace System;

public ref class Pelicula {
public:
    String^ titulo;
    String^ genero;
    int duracion;

    Pelicula() {
        titulo = "";
        genero = "";
        duracion = 0;
    }

    String^ ToString() override {
        return titulo + " - " + genero + " - " + duracion + " min";
    }
};
#pragma once
