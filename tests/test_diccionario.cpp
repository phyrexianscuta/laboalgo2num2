#include "gtest/gtest.h"
#include "../src/Diccionario.h"
#include "../src/Aux.hpp"

#if EJ >= 4

TEST(diccionario, ej4_def) {
    Diccionario d;
    ASSERT_FALSE(d.def(1));
    ASSERT_FALSE(d.def(2));
    ASSERT_FALSE(d.def(3));
    d.definir(1, 10);
    ASSERT_TRUE(d.def(1));
    ASSERT_FALSE(d.def(2));
    ASSERT_FALSE(d.def(3));
    d.definir(2, 20);
    ASSERT_TRUE(d.def(1));
    ASSERT_TRUE(d.def(2));
    ASSERT_FALSE(d.def(3));
}

TEST(diccionario, ej4_obtener) {
    Diccionario d;
    d.definir(1, 4);
    ASSERT_EQ(d.obtener(1), 4);
    d.definir(1, 44);
    ASSERT_EQ(d.obtener(1), 44);
    d.definir(2, 5);
    ASSERT_EQ(d.obtener(1), 44);
    ASSERT_EQ(d.obtener(2), 5);
    d.definir(1, 444);
    ASSERT_EQ(d.obtener(1), 444);
    ASSERT_EQ(d.obtener(2), 5);
    d.definir(2, 55);
    ASSERT_EQ(d.obtener(1), 444);
    ASSERT_EQ(d.obtener(2), 55);
}

#endif

#if EJ >= 5

TEST(diccionario, ej5_borrar) {
    Diccionario d;
    d.definir(1, 4);
    d.definir(1, 44);
    ASSERT_EQ(d.def(1), true);
    d.definir(2, 5);
    ASSERT_EQ(d.def(2), true);
    d.definir(1, 444);
    d.definir(0, -1);
    d.borrar(0);
    ASSERT_EQ(d.def(0), false);
    d.borrar(1);
    ASSERT_EQ(d.def(1), false);
}

TEST(diccionario, ej5_borrar2) {
    Diccionario d;
    d.definir(56, 4);
    d.definir(99, 44);
    ASSERT_EQ(d.def(1), false);
    d.definir(2, 5);
    ASSERT_EQ(d.def(2), true);
    d.definir(1, 444);
    d.definir(0, -1);
    Diccionario dp = d;
    d.borrar(-3);
    ASSERT_EQ(d, dp);
    Diccionario dpp = d;
    d.borrar(11);
    ASSERT_EQ(d, dpp);
}

#endif

#if EJ >= 6

TEST(diccionario, ej6_permutar) {
    vector<Clave> c1 = {3,6,10,0,3,0};
    vector<Clave> c2 = {0,6,10,0,3,3};
    vector<Clave> c3 = {0,6,3,3,0,10};
    vector<Clave> c4 = {3,0,10,0,3,0};
    vector<Clave> c5 = {3,6,10,3,0};
    vector<Clave> c6 = {7,7,7,5};
    vector<Clave> c7 = {7,5,7,7};
    vector<Clave> c8 = {7,7,7};
    vector<Clave> c9 = {-50,5,70,9549};

    ASSERT_EQ(esPermutacion(c1,c2), true);
    ASSERT_EQ(esPermutacion(c1,c3), true);
    ASSERT_EQ(esPermutacion(c1,c4), false);
    ASSERT_EQ(esPermutacion(c1,c5), false);
    ASSERT_EQ(esPermutacion(c2,c3), true);
    ASSERT_EQ(esPermutacion(c2,c4), false);
    ASSERT_EQ(esPermutacion(c2,c5), false);
    ASSERT_EQ(esPermutacion(c3,c4), false);
    ASSERT_EQ(esPermutacion(c3,c3), true);
    ASSERT_EQ(esPermutacion(c5,c3), false);
    ASSERT_EQ(esPermutacion(c4,c5), false);
    ASSERT_EQ(esPermutacion(c6,c7), true);
    ASSERT_EQ(esPermutacion(c6,c8), false);
    ASSERT_EQ(esPermutacion(c6,c9), false);

}
#endif

#if EJ >= 7

TEST(diccionario, ej7_igualdad) {
    Diccionario d1;
    d1.definir(0,10);
    d1.definir(1,20);
    d1.definir(2,30);

    Diccionario d2;
    d2.definir(2,30);
    d2.definir(0,10);
    d2.definir(1,20);

    Diccionario d3;
    d3.definir(2,30);
    d3.definir(1,20);
    d3.definir(0,11);

    Diccionario d4;
    d4.definir(2,30);
    d4.definir(1,20);
    d4.definir(0,10);

    ASSERT_EQ(d1 ==d2, true);
    ASSERT_EQ(d1 ==d3, false);
    ASSERT_EQ(d1 ==d4, true);
    ASSERT_EQ(d2 ==d3, false);
    ASSERT_EQ(d3 ==d4, false);

}


#endif

#if EJ >= 8

#endif

