#include "gtest/gtest.h"
#include "../../U03_Pilas/Pila/Pila.h"

Pila<int> *miPila;

TEST(U03_Pilas, nuevaPilaVacia) {
    miPila = new Pila<int>();
    EXPECT_EQ(miPila->esVacia(), true);
}

TEST(U03_Pilas, agregoTres_noVacia) {
    miPila->push(3);
    miPila->push(2);
    miPila->push(1);
    EXPECT_EQ(miPila->esVacia(), false);
}

TEST(U03_Pilas, popEnSentidoInverso) {
    EXPECT_EQ(miPila->pop(nullptr), 1);
    EXPECT_EQ(miPila->pop(nullptr), 2);
    EXPECT_EQ(miPila->pop(nullptr), 3);
    EXPECT_EQ(miPila->esVacia(), true);
}

TEST(U03_Pilas, otroPopException) {
    EXPECT_ANY_THROW(miPila->pop(nullptr));
}
