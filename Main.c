#include <stdint.h>
 #include <string.h>
 #include <stdlib.h>
 #include <stdbool.h>
 #include <stdio.h>
 #define LETTER_HEIGHT 10
 #define LETTER_WIDTH 9
 #define CHAR_BUFFER_BASE 0x09000000
 #define SAMPLE_RATE1 10000
 #define SAMPLE_RATE2 1000
 #define SAMPLE_RATE3 1500
 #define FREQ1 1400
 #define FREQ2 1500
 #define FREQ3 25
 #define FREQ4 10
 #define FREQ5 100
 #define FREQ6 50
uint8_t char_A[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {1, 1, 0, 0, 0, 0, 0, 1, 1} };

 uint8_t char_B[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0}, };

 uint8_t char_C[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0, 0}, };

 uint8_t char_D[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0}, };

 uint8_t char_E[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 0}, };

 uint8_t char_F[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0}, };

 uint8_t char_G[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 1, 0},
    {1, 1, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 1, 0, 0, 0, 0, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0, 0}, };

 uint8_t char_H[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0}, };

 uint8_t char_I[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 0}, };

 uint8_t char_J[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0, 0}, };

 uint8_t char_K[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0, 0},
    {0, 1, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 1}, };

 uint8_t char_L[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 0}, };

 uint8_t char_M[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {1, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 0, 1, 0, 1, 0, 0, 1},
    {1, 0, 0, 1, 0, 1, 0, 0, 1},
    {1, 0, 0, 1, 1, 1, 0, 0, 1},
    {1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0, 0, 0, 1}, };

 uint8_t char_N[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0}, };

 uint8_t char_O[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0, 0}, };

 uint8_t char_P[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0}, };

 uint8_t char_Q[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 0, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 0, 0, 0, 1, 0, 1, 1},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 1, 1}, };

 uint8_t char_R[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 1, 0}, };

 uint8_t char_S[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0, 0}, };

 uint8_t char_T[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0}, };

 uint8_t char_U[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 1, 0, 0, 0, 0, 1, 1},
    {0, 0, 1, 1, 1, 1, 1, 1, 0}, };

 uint8_t char_V[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0}, };

 uint8_t char_W[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 1, 0, 0, 1},
    {1, 0, 0, 1, 0, 1, 0, 0, 1},
    {1, 0, 0, 1, 0, 1, 0, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {1, 1, 0, 0, 0, 0, 0, 1, 1}, };

 uint8_t char_X[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 1, 0, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0},
    {1, 1, 0, 0, 0, 0, 0, 1, 1}, };

 uint8_t char_Y[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 1, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 1, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0}, };

 uint8_t char_Z[LETTER_HEIGHT][LETTER_WIDTH] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 0}, };

 uint8_t char_SPACE[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1}, };

 uint8_t char_DEL[LETTER_HEIGHT][LETTER_WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1}, };

 uint8_t char_VOID[LETTER_HEIGHT][LETTER_WIDTH] = {
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2}, };

 uint8_t char_ENTER[LETTER_HEIGHT][LETTER_WIDTH] = {
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3}, };

 uint8_t char_BREAK[LETTER_HEIGHT][LETTER_WIDTH] = {
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4}, };

 uint8_t char_SHIFT[LETTER_HEIGHT][LETTER_WIDTH] = {
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5}, };

struct audio_t {
        volatile unsigned int control;
        volatile unsigned char rarc;
        volatile unsigned char ralc;
        volatile unsigned char wsrc;
        volatile unsigned char wslc;
        volatile unsigned int ldata;
        volatile unsigned int rdata;
    };
 struct audio_t *const audiop = (struct audio_t *)0xFF203040;
 uint32_t MAX_AMPLITUDE;
 uint32_t half_period_samples;
 int32_t *buf;
 int j = 0;

 int BAR_Y_POS = 6;
 int pixel_buffer_start;

 uint8_t (*loader)[10][9] = &char_VOID;
 char bar[5] = {'\0', '\0', '\0', '\0', '\0'};
 uint8_t bar_pos = 0;
 char bar_char = '\0';
 uint8_t break_flag = 1;

 int slide_num = 0;

 double sqrt_newton (double number);
 void generate_wave(uint32_t half_period_samples);
 void plot_pixel(int x, int y, short int line_color);
 void clear_screen();
 void write_character(int x, int y, char c);
 void clear_text(int x, int y, int length);
 void draw_line(int x0, int y0, int x1, int y1, short int line_color);
 void draw_thick_line(int x0, int y0, int x1, int y1, short int line_color);
 int main();
 void start_screen();
 void wipe_screen();
 void draw_searchbar(short int color);
 void sleep(int j);
 void scancode_handler(char scancode);
 void plot_letter();
 void printer();
 void search();
 void sound1();
 void sound2();
 void sound3();
 void entry_CYQM();
 void slide_CYQM();
 void entry_CYTZ();
 void slide_CYTZ();
 void entry_CYYZ();
 void slide_CYYZ();
 void entry_CYUL();
 void slide_CYUL();
 void entry_CYFB();
 void slide_CYFB();
 void entry_CYOO();
 void slide_CYOO();
 void entry_CYSJ();
 void slide_CYSJ();
 void entry_CYVR();
 void slide_CYVR();
 void arrow_right_disp();
 void arrow_left_disp();
 void plot_string(int x, int y, char *str);
 void plot_entries(char **entries, int entries_num);

double sqrt_newton(double number) {
     if (number < 0) return -1;
     double guess = number / 2.0;
     double epsilon = 0.00001;
     while (1) {
         double new_guess = 0.5 * (guess + number / guess);
         if (fabs(new_guess - guess) < epsilon)
             break;
         guess = new_guess;
     }
     return guess;
 }

void generate_wave(uint32_t half_period_samples) {
    buf = (int32_t *)realloc(buf, sizeof(int32_t) * half_period_samples * 2);
    for (uint32_t i = 0; i < half_period_samples; i++) {buf[i] = (MAX_AMPLITUDE * i) / half_period_samples;}
    for (uint32_t i = 0; i < half_period_samples; i++) {
        buf[half_period_samples + i] = MAX_AMPLITUDE - ((MAX_AMPLITUDE * i) / half_period_samples);
    }
 }

void plot_pixel(int x, int y, short int line_color){
    volatile short int *one_pixel_address;
    one_pixel_address = (short int *)(pixel_buffer_start + (y << 10) + (x << 1));
    *one_pixel_address = line_color; }

void clear_screen(int _y){
    for (int x = 0; x < 320; x++) {
        for (int y = _y; y < 240; y++) {
            plot_pixel(x, y, 0x0000);
        }
    }
 }

void write_character(int x, int y, char c){
    volatile char *char_buffer = (volatile char *)CHAR_BUFFER_BASE;
    int addr_offset = (y << 7) + x;
    char_buffer[addr_offset] = c;
 }

void clear_text(int x, int y, int length){
    for (int i = 0; i < length; i++) {
        write_character(x + i, y, ' ');
    }
 }

void draw_line(int x0, int y0, int x1, int y1, short int line_color){
    bool is_steep = abs(y1 - y0) > abs(x1 - x0);
    if (is_steep) {
        int temp = x0;
        x0 = y0;
        y0 = temp;
        temp = x1;
        x1 = y1;
        y1 = temp;        
    }
    if (x0 > x1) {
        int temp = x0;
        x0 = x1;
        x1 = temp;
        temp = y0;
        y0 = y1;
        y1 = temp; }
    int deltax = x1 - x0;
    int deltay = abs(y1 - y0);
    int error = -(deltax / 2);
    int y = y0;
    int y_step = 0;
    if (y0 < y1){
        y_step = 1;    
    } else {
        y_step = -1; }
    for (int x = x0; x <= x1; x++) {
        if (is_steep) {
            plot_pixel(y, x, line_color);
        } else {
            plot_pixel(x, y, line_color);
        }
        error = error + deltay;
        if (error > 0) {
            y = y + y_step;
            error = error - deltax;
        }
    }
 }

void draw_thick_line(int x0, int y0, int x1, int y1, short int line_color){
    draw_line(x0, y0, x1, y1, line_color);

    int dx = x1 - x0;
    int dy = y1 - y0;

    int length = (int)sqrt_newton(dx * dx + dy * dy);
    if (length == 0) return;
    int offset_x = -(dy * 2) / length;
    int offset_y = (dx * 2) / length;

    draw_line(x0 + offset_x, y0 + offset_y, x1 + offset_x, y1 + offset_y, line_color);
    draw_line(x0 - offset_x, y0 - offset_y, x1 - offset_x, y1 - offset_y, line_color);
 }

int main() {
    volatile int *pixel_ctrl_ptr = (int *)0xFF203020;

    pixel_buffer_start = *pixel_ctrl_ptr;

    start_screen();

    volatile int *PS2_ptr = (int *)0xFF200100;

    int PS2_data, RVALID;

    while (1) {
        PS2_data = *(PS2_ptr);
        RVALID = (PS2_data & 0x8000);

        if (RVALID != 0) {
            char scancode = PS2_data & 0xFF;
            scancode_handler(scancode);
        }
        printer();
    }
 }

void start_screen(){
    clear_screen(0);
    for (int i = 0; i < 64; i++){
        clear_text(1, i, 80);
    }
    draw_searchbar(0xFFFF);
 }

void wipe_screen(){
    clear_screen(24);
    for (int i = 0; i < 64; i++){
        clear_text(1, i, 80);
    }
 }

void draw_searchbar(short int color){
    draw_line(5, 5, 50, 5, color);
    draw_line(5, 17, 50, 17, color);
    draw_line(5, 5, 5, 17, color);
    draw_line(50, 5, 50, 17, color);
 }

void sleep(int j){
    for (int i = 0; i < j; i++);
 }

void scancode_handler(char scancode){
    switch (scancode) {
        case 0x66: {
            if (bar_pos != 0){
                loader = &char_DEL;
            } else{
                loader = &char_VOID; }
            bar_char = '\0';
            break; }
        case 0x1C: loader = &char_A; bar_char = 'A'; break;
        case 0x32: loader = &char_B; bar_char = 'B'; break;  
        case 0x21: loader = &char_C; bar_char = 'C'; break;
        case 0x23: loader = &char_D; bar_char = 'D'; break;
        case 0x24: loader = &char_E; bar_char = 'E'; break;
        case 0x2B: loader = &char_F; bar_char = 'F'; break;  
        case 0x34: loader = &char_G; bar_char = 'G'; break;  
        case 0x33: loader = &char_H; bar_char = 'H'; break;
        case 0x43: loader = &char_I; bar_char = 'I'; break;
        case 0x3B: loader = &char_J; bar_char = 'J'; break;
        case 0x42: loader = &char_K; bar_char = 'K'; break;
        case 0x4B: loader = &char_L; bar_char = 'L'; break;
        case 0x3A: loader = &char_M; bar_char = 'M'; break;
        case 0x31: loader = &char_N; bar_char = 'N'; break;
        case 0x44: loader = &char_O; bar_char = 'O'; break;
        case 0x4D: loader = &char_P; bar_char = 'P'; break;
        case 0x15: loader = &char_Q; bar_char = 'Q'; break;
        case 0x2D: loader = &char_R; bar_char = 'R'; break;
        case 0x1B: loader = &char_S; bar_char = 'S'; break;
        case 0x2C: loader = &char_T; bar_char = 'T'; break;
        case 0x3C: loader = &char_U; bar_char = 'U'; break;
        case 0x2A: loader = &char_V; bar_char = 'V'; break;
        case 0x1D: loader = &char_W; bar_char = 'W'; break;
        case 0x22: loader = &char_X; bar_char = 'X'; break;
        case 0x35: loader = &char_Y; bar_char = 'Y'; break;
        case 0x1A: loader = &char_Z; bar_char = 'Z'; break;
        case 0x5A: loader = &char_ENTER; bar_char = '\0'; break;
        case 0xF0: loader = &char_BREAK; bar_char = '\0'; break;
        case 0xE0: loader = &char_SHIFT; bar_char = '\0'; break;
        default: loader = &char_VOID; bar_char = '\0'; break;
    }
 }

void plot_letter(){
    draw_searchbar(0xFFFF);
    short int color;
    if (loader == &char_DEL){
        bar_pos--;
        color = 0x0000;
    } else{
        if (bar_pos == 4){return;}
        color = 0xFFFF;
    }
    for (int row = 0; row < LETTER_HEIGHT; row++) {
        for (int col = 0; col < LETTER_WIDTH; col++) {
            if ((( uint8_t (*)[LETTER_WIDTH])loader)[row][col] == 1) {
                plot_pixel(((bar_pos*11)+6)+col, BAR_Y_POS+row, color);
            }
        }
    }
    bar[bar_pos] = bar_char;
    if (color != 0x0000){bar_pos++;}
    break_flag = 0;
 }

void printer(){
    if (loader == &char_BREAK){break_flag = 1; return;}
    if (break_flag == 0){sleep(10); return;}
    if (break_flag == 2){sleep(100); return;}
    if (loader == &char_VOID){return;}
    if (loader == &char_ENTER){slide_num = 0; search(); break_flag = 0; return;}
    if (loader == &char_SHIFT){
        if (slide_num == 1){slide_num = 0;}else{slide_num = 1;}
        search(); break_flag = 2; return;}
    plot_letter();
 }

void search(){
    if (strcmp(bar, "CYQM") == 0 && slide_num == 0){entry_CYQM();}
    else if (strcmp(bar, "CYQM") == 0 && slide_num == 1){slide_CYQM();}
    else if (strcmp(bar, "CYTZ") == 0 && slide_num == 0){entry_CYTZ();}
    else if (strcmp(bar, "CYTZ") == 0 && slide_num == 1){slide_CYTZ();}
    else if (strcmp(bar, "CYYZ") == 0 && slide_num == 0){entry_CYYZ();}
    else if (strcmp(bar, "CYYZ") == 0 && slide_num == 1){slide_CYYZ();}
    else if (strcmp(bar, "CYUL") == 0 && slide_num == 0){entry_CYUL();}
    else if (strcmp(bar, "CYUL") == 0 && slide_num == 1){slide_CYUL();}
    else if (strcmp(bar, "CYFB") == 0 && slide_num == 0){entry_CYFB();}
    else if (strcmp(bar, "CYFB") == 0 && slide_num == 1){slide_CYFB();}
    else if (strcmp(bar, "CYOO") == 0 && slide_num == 0){entry_CYOO();}
    else if (strcmp(bar, "CYOO") == 0 && slide_num == 1){slide_CYOO();}
    else if (strcmp(bar, "CYSJ") == 0 && slide_num == 0){entry_CYSJ();}
    else if (strcmp(bar, "CYSJ") == 0 && slide_num == 1){slide_CYSJ();}
    else if (strcmp(bar, "CYVR") == 0 && slide_num == 0){entry_CYVR();}
    else if (strcmp(bar, "CYVR") == 0 && slide_num == 1){slide_CYVR();}
    else if (loader == &char_ENTER){
        sound3();
        draw_searchbar(0xF800);
        return;
    } else{
        return;
    }

    if (loader == &char_ENTER){sound1();}
    else if (loader == &char_SHIFT){sound2();}
 }

void sound1(){
    MAX_AMPLITUDE = 0x08000000;
    j = 0;
    half_period_samples = SAMPLE_RATE1 / (2 * FREQ1);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    for (int count = 0; count < 50000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    half_period_samples = SAMPLE_RATE1 / (2 * FREQ2);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    j = 0;
    for (int count = 0; count < 300000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    half_period_samples = SAMPLE_RATE1 / (2 * FREQ1);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    j = 0;
    for (int count = 0; count < 50000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    return;
 }

void sound2(){
    MAX_AMPLITUDE = 0x08000000;
    j = 0;
    half_period_samples = SAMPLE_RATE2 / (2 * FREQ3);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    for (int count = 0; count < 50000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    half_period_samples = SAMPLE_RATE2 / (2 * FREQ4);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    j = 0;
    for (int count = 0; count < 50000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    half_period_samples = SAMPLE_RATE2 / (2 * FREQ3);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    j = 0;
    for (int count = 0; count < 1000000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
 }

void sound3(){
    MAX_AMPLITUDE = 0x10000000;
    j = 0;
    half_period_samples = SAMPLE_RATE3 / (2 * FREQ5);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    for (int count = 0; count < 50000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    half_period_samples = SAMPLE_RATE3 / (2 * FREQ6);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    j = 0;
    for (int count = 0; count < 500000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
    half_period_samples = SAMPLE_RATE3 / (2 * FREQ6);
    buf = (int32_t *)malloc(sizeof(int32_t) * half_period_samples * 2);
    generate_wave(half_period_samples);
    j = 0;
    for (int count = 0; count < 50000; count++) {
        if (audiop->wsrc) {
            audiop->ldata = buf[j];
            audiop->rdata = buf[j];
            j = (j + 1) % (half_period_samples * 2);
        }
    }
    free(buf);
 }

void entry_CYQM(){ //Moncton
    wipe_screen();
    draw_thick_line(103, 130, 203, 60, 0xFFFF);
    draw_thick_line(97, 126, 210, 123, 0xFFFF);
    write_character(21, 31, '1');
    write_character(22, 31, '1');
    write_character(25, 34, '0');
    write_character(26, 34, '6');
    write_character(51, 14, '2');
    write_character(52, 14, '4');
    write_character(51, 32, '2');
    write_character(52, 32, '9');
    arrow_right_disp();
 }

 void slide_CYQM(){
    wipe_screen();
    int _x = 6;  // Starting X position
    int _y = 30;  // Y position

    char *entries[] = {
        "REF     N46 06 58 W64 40 43 4ENE 18W (2013) UTC-4(3) Elev 232'",
        "        A5003 LO8 HI6 T2 CAP OC",
        "OPR     Greater Moncton International Airport Authority Inc",
        "        506-865-5444 0945-0345Z O/T 2hr PN call out charge Cert",
        "PF      A-1,2,6 C-3,4,5",
        "CUST    AOE/300 888-226-7277 12-04Z",
        "FLT PLN ",
        "    FIC London 866-WXBRIEF (Toll free within Canada) or",
        "        866-541-4104 (Toll free within Canada & USA)",
        "    ACC (IFR only) Moncton 506-867-7177 or 866-480-8200",
        "     WX METAR H24 TAF H24, isue times: 00, 06, 12, 18Z",
        
        "SERVICES Call out chg may be levied for one or more svcs",
        "     FUEL 100LL, JA-1 (FSII avbl) PN ASIG 506-857-9140",
        "      OIL All",
        "        S 1,2",
        "     ARFF PARTICIPATING CAT 5 (CAT 7 2 hr PN) 0945-0345Z O/T 2 hr",
        "          PN call out chg.",
        "   SUP FL O & D-ice",
        "     JASU (Hobart 1400 amp 30-40 volts), Elect Start 10/25, GTC/GTE-85",
        "          & NC-10A/A1/B/C",
        "  PVT ADV Shell Aerocentre 122.15, ATS 131.75",
        "          Moncton Flight College 123.5 (Ltd hrs)",
        "          Air Canada gnd hldg 130/37 506-857-1065",
        "          Skylink Express 131.37, ltd hangarage avbl",
        "  MIL CON Airport Terminal Services Atlantic Canada Co. (Shell) 506-857-0942",

        "RWY DATA  Rwy 06(061)/24(241) 10,001x200 ASPH",
        "          Rwy 11(106)/29(286) 8000x200 ASPH",
        " RWY CERT Rwy 06 RVR 1200(1/4sm)/Rwy 24 RVR 1200(1/4sm) AGN V",
        "          Rwy 11 RVR 1200(1/4sm)/Rwy 29 RVR 1200(1/4sm) AGB V",
        "LIGHTING  06-AN(TE HI), 24-AS(TE HI)P3, 11-AO(TE HI)P2, 29-AN(TE HI)",
        "COMM",
        "      RCO London rdo 122.5 (FISE) 126.7 (bcst)",
        "     ATIS 128.65",
        "APRON ADV Apron VIII 122.075",
        "      GND 121.8 275.8",
        "      TWR 120.8 236.6 (E) (emerg only 506-867-7220)",
        "      ARR 124.4",
        "      DEP 124.4",
        "      PAL 124.4 127.125 132.2"
    };
    
    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYTZ(){ //Billy Bishop
    wipe_screen();
    draw_thick_line(154, 132, 140, 63, 0xFFFF);
    draw_thick_line(170, 107, 145, 70, 0xFFFF);
    write_character(33, 13, '2');
    write_character(34, 13, '6');
    write_character(37, 15, '2');
    write_character(38, 15, '4');
    write_character(37, 35, '0');
    write_character(38, 35, '8');
    write_character(42, 28, '0');
    write_character(43, 28, '6');
    arrow_right_disp();
 }

 void slide_CYTZ(){
    wipe_screen();
    char *entries[] = {
        "REF       N43 37 42 W79 23 46 Adj S 11W UTC-5(4) Elev 232' VTA A5000 LO6 T2",
        "          CAP RCAP",
        "OPR       Toronto Port Authority 416-203-6942 Cert Ldg fees",
        "PF        A-1,6 B-2,3 C-   4,5",
        "CUST      AOE/90 888-226-7277 13-05Z",
        "FLT PLN   Pilots to open/ close VFR flt plan with London rdo 123.15 or by",
        "          phone.",
        "      FIC London 866-WXBRIEF (Toll free within Canada) or 866-541-4104",
        "          (Toll free within Canada & USA)",
        "      ACC Toronto 905-676-4590/4591/4592 or 888-217-1241",
        "       WX METAR AUTO H24 (see COMM).",
        "          TAF H24, issue times: 02, 08, 14, 20Z.",
        "          WxCam",
        "     DUAT Porter FBO",

        "SERVICES  1145-0400Z dly  Ferry and pedestrian tunnel ltd hrs - no other",
        "          access to aprt.",
        "     FUEL 100LL, JA-1 (FSII avbl)",
        "      OIL All",
        "        S 1,3",
        "     ARFF DESIGNATED CAT 6  1145-0400Z, O/T call out chg 2 hr PN",
        "  PVT ADV Stolport FBO 416-361-1100  130.57  1145-0400Z",
        "Porter FBO 416-203-2424  123.35  1145-0400Z",
        "RWY DATA  Rwy 08(082)/26(262) 3988x150 grooved ASPH",
        "          Rwy 06(061)/24(241) 2460x100 ASPH",
        " RWY CERT Rwy 08 RVR 1200(1/4sm)/Rwy26 RVR 1200(1/4sm) AGN IIIA",
        "          Rwy 06/24 AGN I",
        "      RCR Opr 1145-0345Z CRFI/RSC avbl ltd hrs. PLR/PCN",
        "LIGHTING  06-(TE ME), 24-(TE ME)",
        "          08-AS(TE HI CL) P1 3.9, 26-AZ(TE HI CL) AP 4.25 MEHT 63'",
        "          See CAUTION PAPI P1 apch Rwy 08 and APAPI apch Rwy 26.",
        "          Rwys 08 & 26 - three white inset pre-thld centerline lgts.",
        "          Two pairs of inset white lgts 1099 upwind of each thld mark.",
        "          Yellow rwy edge lgts for final 1305 Rwy 26 and Rwy 08.",
        "COMM",
        "     ATIS 133.6  1130-0400Z dly",
        "      GND 121.7 1130-0400Z dly",
        "      TWR City 118.2 119.2(V) 1130-0400Z dly (emerg only 416-973-9240)",
        "      ATF tfc 118.2 0400-1130Z dly  within CZ 7NM SHAPE IRREGULAR 2500 ASL",
        "      ARR Toronto 133.4",
        "      DEP Toronto 133.4",
        "     ADVS 123.6 0400-1130Z"
    };
    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYYZ(){ //Toronto Pearson
    wipe_screen();
 
    draw_thick_line(20, 111, 121, 39, 0xFFFF);
    draw_thick_line(88, 41, 241, 142, 0xFFFF);
    draw_thick_line(52, 68, 171, 154, 0xFFFF);
    draw_thick_line(299, 100, 233, 190, 0xFFFF);
    draw_thick_line(308, 113, 240, 208, 0xFFFF);
    write_character(2, 28, '0');
    write_character(3, 28, '5');
    write_character(30, 8, '2');
    write_character(31, 8, '3');
    write_character(9, 15, '1');
    write_character(10, 15, '5');
    write_character(11, 15, 'R');
    write_character(18, 10, '1');
    write_character(19, 10, '5');
    write_character(20, 10, 'L');
    write_character(42, 40, '3');
    write_character(43, 40, '3');
    write_character(44, 40, 'L');
    write_character(58, 37, '3');
    write_character(59, 37, '3');
    write_character(60, 37, 'R');
    write_character(56, 49, '0');
    write_character(57, 49, '6');
    write_character(58, 49, 'L');
    write_character(58, 53, '0');
    write_character(59, 53, '6');
    write_character(60, 53, 'R');
    write_character(73, 23, '2');
    write_character(74, 23, '4');
    write_character(75, 23, 'R');
    write_character(75, 27, '2');
    write_character(76, 27, '4');
    write_character(77, 27, 'L');
    arrow_right_disp();
 }

 void slide_CYYZ(){
    wipe_screen();
    char *entries[] = {
        "RWY DATA  Rwy 15L(147)/33R(327) 11,050x200 ASPH",
        "          Rwy 15R(147)/33L(327) 9088x200 ASPH Thlds 15R & 33L displ 588",
        "          Rwy 05(057)/23(237) 11,120x200 ASPH Thld 05 displ 135' Thld 23",
        "          displ 485'",
        "          Rwy 06L(057)/24R(237) 9697x200 ASPH Thld 24R displ 197'",
        "          Rwy 06R(057)/24L(237) 9000x200 ASPH",
        "RESA      All Rwys 492'",
        "          Departures from holding bay inner centerlines Rwy 06L, 24R and 05/H6",
        "          subtract 263' from declared distances.",
        "RWY CERT  Rwy 15L RVR 1200(1/4sm)/Rwy 33R RVR 600 AGN V",
        "          Rwy 15R RVR 1200(1/4sm)/Rwy 33L RVR 1200(1/4sm) AGN V",
        "          Rwy 05 RVR 600/Rwy 23 RVR 1200(1/4sm) AGN V",
        "          Rwy 06L RVR 600/Rwy 24R RVR 1200(1/4sm) AGN V",
        "          Rwy 06R RVR 1200(1/4sm)/Rwy 24L RVR 1200(1/4sm) AGN V",
        "TWY CERT  Twy K AGN IV",
        "          Twy: W, Y AGN IIIB",
        "TWY       Twy K is uncontrolled & is rstd to acft with wingspans 41.15m/135'",
        "          (B757W) or less & an Aircraft Load Rating of 9.0 or less.",
        "          Other acft may be auth with prior appr from opr.",
        "          Design spd for C2, B2, H3, D6, D4, D2, D1, D3, D5 & D7 is 50 kt",
        "          (93 kph).",
        "          Design spd for J2, F1, F2, F3 & F4 is 45 kt (85 kph).",
        "          All other rapid exits designed for an exit speed of 35 kt (65 kph).",
        "          Normal Rwy 23 deps are from Twy 'H'.",
        "          Rwy 23 deps do not enter Twy 'Q' without specific clearance from ATC.",
        "          Acft requiring full length must notify gnd ctl on initial contact.",
        "          During CAT II/III arrivals 05 departures shall be from H6.",
        "          Twys W & Y rstd to acft with wingspans of 35.9m/118' or less.",
        "APRON     At all T1, T1 East Hold, T3, Infield & FedEx Apron/Parking areas,",
        "          all acft must contact the applicable Apron Advisory prior to engine",
        "          start, pushback or taxi.",
        "          FedEx Apron rstd to acft with wingspans 51.9m/170' or less.",
        "          Taxilane between 3C and 4C rstd to acft with wingspans 35.9m/118'",
        "          or less.",
        "          Wingspans of 64.9m/213' permitted to Gate C27 Code E.",
        "          Asphalt apron sfc E of positions 5G and 6F to 101A rstd to acft with",
        "          wingspans 28.4m/93' (DH8-400) or less & an acft load rating of 9.0",
        "          or less.",
        "          Outer/East loop btwn 7E-8E rstd to acft with wingspans 35.9m/118'",
        "          or less",
        "          and Inner/East loop btwn 7D-8D rstd to acft with wingspans 79.9m/262'",
        "          or less.",
        "          Simultaneous use of lane 7 & 8 max wingspan 64.9m/213' Code E.",
        "          Outer/North loop btwn 9C-9D-10D-10C restricted to wingspans",
        "          35.9m/118' or less.",
        "          Strict adherence to Taxilane centerline required between DR and DV",
        "          and on Taxilanes 10 and 13.",
        "          Taxilane 10 rstd to aircraft with wingspans 50.9m/167' or less.",
        "          Refer to CAP parking areas (Terminal 1 and Terminal 1 East Hold)",
        "          for details.",
    };
  
    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYUL(){ //Montreal/Pierre Elliot Trudeau
    wipe_screen();

    draw_line(30, 118, 180, 33, 0xFFFF);
    draw_line(30, 115, 180, 30, 0xFFFF);
    draw_line(30, 112, 180, 27, 0xFFFF);
    draw_thick_line(25, 105, 150, 105, 0xFFFF);
    draw_line(150, 150, 300, 65, 0xFFFF);
    draw_line(150, 148, 300, 63, 0xFFFF);
    draw_line(150, 146, 300, 61, 0xFFFF);
 
    draw_line(160, 90, 180, 80, 0xFFFF);
    draw_line(156, 83, 176, 73, 0xFFFF);
    draw_line(160, 90, 156, 83, 0xFFFF);
    draw_line(180, 80, 176, 73, 0xFFFF);
    
    draw_line(158, 84, 155, 75, 0xFFFF);
    draw_line(152, 84, 155, 75, 0xFFFF);
    plot_pixel(155, 81, 0xFFFF);

    draw_line(195, 68, 210, 60, 0xFFFF);
    draw_line(193, 65, 208, 57, 0xFFFF);
    draw_line(195, 68, 193, 65, 0xFFFF);
    draw_line(210, 60, 208, 57, 0xFFFF);

    draw_line(214, 68, 221, 64, 0xFFFF);
    draw_line(212, 66, 221, 62, 0xFFFF);
    draw_line(213, 51, 221, 64, 0xFFFF);
    draw_line(228, 43, 236, 56, 0xFFFF);
    draw_line(228, 43, 213, 51, 0xFFFF);
    draw_line(221, 64, 236, 56, 0xFFFF);

    write_character(6, 30, '0');
    write_character(7, 30, '6');
    write_character(8, 30, 'L');

    write_character(7, 24, '1');
    write_character(8, 24, '0');

    write_character(35, 28, '2');
    write_character(36, 28, '8');

    write_character(45, 6, '2');
    write_character(46, 6, '4');
    write_character(47, 6, 'R');

    write_character(33, 37, '0');
    write_character(34, 37, '6');
    write_character(35, 37, 'R');

    write_character(74, 14, '2');
    write_character(75, 14, '4');
    write_character(76, 14, 'L');

    arrow_right_disp();
 }

 void slide_CYUL(){
    wipe_screen();
    char *entries[] = {
        "REF       N45 28 14 W73 44 27 Adj SW 15W(2013) UTC-5(4) Elev 118' VTA A5002",
        "          LO6 LO7 LO8 HI5 T2 CAP OC",
        "OPR       Aeroports de Montreal 514-633-3223 Cert Ldg fees",
        "PF        A-1,2,3,4,6 C-5",
        "CUST      AOE 888-226-7277",
        "FLT PLN   (bil)",
        "      FIC Quebec 866-GOMETEO or 866-WXBRIEF (Toll free within Canada) or",
        "          866-541-4105 (Toll free within Canada & USA)",
        "      ACC Montreal 514-633-3211 or 800-633-1353. All Flt Plns, IFR tng flts",
        "          PPR. Flt Plns by Fax at 514-633-2877 & include phone numbers where",
        "          pilot can be reached prior to dep.",
        "       WX METAR H24.",
        "          TAF H24, issue times: 00, 03, 06, 09, 12, 15, 18, 21Z.",
        
        "SERVICES",
        "     FUEL 100LL, JA-1 (FSII avbl), F-34 JB",
        "      OIL All",
        "        S 1,2,3",
        "     ARFF DESIGNATED CAT 9",
        "   SUP FL ADI, D & A-ice 514-636-1850, LHOX",
        "     JASU Elect Start 10/15",
        "  PVT ADV Esso Avitat 122.85; Shell Aerocentre 129.3;",
        "          Aeromag 122.525; Iceman 123.125 514-636-1850",
        "          Starlink-Avionair 123.075 514-631-7500; Aviation Etcetera",
        "          122.725; 800-319-7849 or 514-633-7000",
        "          MONTREAL DE-ICE 123.425",
        "          Air Inuit 129.05 514-905-9413 Fax 514-905-9881",
        "  MIL CON Innotech Aviation Services Inc. (Shell) 514-636-5870",

        "RWY DATA  Rwy 06L(057)/24R(237) 11,000x200 ASPH/CONC",
        "          Rwy 06R(057)/24L(237) 9600x200 CONC",
        "          Rwy 10(102)/28(282) 7000x200 ASPH",
        "          RESA: 06R 295', avbl for acft over 910,000 lbs",
        "          Departures from inner centerline of holding bay Rwy 06R substract",
        "          276' from declared distances.",
        " RWY CERT Rwy 06L RVR 600/Rwy 24R RVR 1200(1/4sm) AGN V",
        "          Rwy 06R RVR 1200(1/4sm)/Rwy 24L RVR 1200(1/4sm) AGN V",
        "          Rwy 10 RVR 1200(1/4sm)/Rwy 28 RVR 1200(1/4sm) AGN V",
        "LIGHTING  06R-AN(TE HI), 06L-AL(TE HI A TDZL), 10-AN(TE HI),",
        "          24R-AN(TE HI CL), 24L-AN(TE HI), 28-AS(TE HI)P3",
        "COMM      (bil)",
        "      RCO Quebec 123.55 (FISE) 126.7 (bcst)",
        "     ATIS (English) 133.7 514-633-3037; (French) 127.5 514-633-3034",
        " CLNC DEL Montreal 125.6 all dep acft ctc clnc del",
        "    APRON Montreal 122.075",
        "      GND Montreal 121.0 121.9 275.8",
        "      TWR Montreal 119.3 119.9 124.3 (old port) 267.1 (E) (emerg only",
        "          514-633-3311)",
        "      ARR Montreal Tml 118.9 126.9 132.85 268.3",
        "      DEP Montreal Tml 120.42 124.65 268.3",
        "  VFR ADV Montreal Tml 134.15"
    };

    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYFB(){ //Iqaluit
    wipe_screen();
    draw_thick_line(47, 28, 266, 196, 0xFFFF);
    write_character(9, 7, '1');
    write_character(10, 7, '6');
    write_character(68, 49, '3');
    write_character(69, 49, '4');
    arrow_right_disp();
 }

 void slide_CYFB(){
    wipe_screen();
    char *entries[] = {
        "REF", "N63 45 24 W68 33 22 27W (2018) UTC-5(4) Elev 110' A5033 LO5 HI1 CAP",
        "OPR", "Nunavut Airport Services Ltd 867-877-6060 Cert",
        "PF", "A-1,2 (ltd hrs), 3,6 C-4,5",
        "CUST", "AOE/15 general aviation 888-226-7277 14-22Z Mon-Fri exc hols O/T 1 hr PN.",
        "CUST2", "Thru flts should carry onward documentation to final destn in Europe or North",
        "         America.",
        "FLT PLN", "NOTAM FILE CYFB",
        "FIC", "Quebec 866-GOMETEO or 866-WXBRIEF (Toll free within Canada) or 866-541-4105",
        "       (Toll free CA & USA)",
        "ACC", "Montreal 800-633-1353",
        "WX", "METAR H24. TAF H24, issue times: 00, 06, 12, 18Z.",
        "SERVICES", "FUEL 100LL ltd qty, prior arrangements thru Uqsuq Corp 867-979-1620 or",
        "            867-979-2855",
        "FUEL2", "JA-1 (CON I IP JA-1)",
        "OIL", "All",
        "S", "1,2,4,5, O/R, 6",
        "ARFF", "PARTICIPATING CAT 5 1300-2200Z Mon-Fri, O/T call out chg 12 hr PN.",
        "ARFF2", "Cat 7 avbl with Operational Agreement in place, call out chg applies.",
        "SUP FL", "D & A-ice",
        "JASU", "Hobart 28V",
        "PVT ADV", "Frobisher Bay Touchdown Svcs FBO 123.35 867-979-6226 13-23Z Mon-Fri, 14-22Z",
        "           Sat-Sun",
        "PVT ADV2", "O/T 867-222-1202 1hr PN",
        "MIL CON", "Uqsuq Corp 867-979-2855 11-03Z O/T call 867-222-2855. Call out chg.",
        "RWY DATA", "Rwy 16(163)/34(343) 8605x200 asphalt Rwy 16 down 0.45",
    };
    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYOO(){ //Oshawa Executive
    wipe_screen();
    draw_thick_line(35, 75, 288, 124, 0xFFFF);
    draw_thick_line(128, 143, 233, 67, 0xFFFF);
    write_character(6, 17, '1');
    write_character(7, 17, '2');
    write_character(73, 31, '3');
    write_character(74, 31, '0');
    write_character(60, 15, '2');
    write_character(61, 15, '3');
    write_character(29, 38, '0');
    write_character(30, 38, '5');
    arrow_right_disp();
 }

 void slide_CYOO(){
    wipe_screen();
    char *entries[] = {
        "REF", "N43 55 22 W78 53 47 Adj N 11W (2015) UTC-5(4) Elev 460' VTA A5000 LO6 T2 HI5",
        "       CAP",
        "OPR", "Muni 905-576-8146 Fax 905-723-6937 Cert",
        "PF", "A-2,7 B-6 C-1,3,4,5",
        "CUST", "AOE/50 1330-2130Z Mon-Fri exc hols. 888-226-7277; AOE/15 1330-0500Z",
        "FLT PLN", "NOTAM FILE CYOO",
        "FLT PLN2", "Pilots to open/close VFR flt pln with London rdo 123.15 or by phone.",
        "FIC", "London 866-WXBRIEF (Toll free within Canada) or 866-541-4104 (Toll free CA &",
        "       USA)",
        "WX", "METAR AUTO H24 (see COMM) TAF H24, issue times: 02, 08, 14 and 20Z WxCam",
        "SERVICES", "FUEL 100LL (cardlock on Apron I), JA-1",
        "OIL", "All",
        "S", "1,2,3,4,5,6",
        "PVT ADV", "Enterprise Air Inc 131.05 905-721-0054",
        "RWY DATA", "Rwy 12(122)/30(302) 4250x100 ASPH Rwy 12 down 0.31",
        "RWY DATA2", "Rwy 05(046)/23(226) 2654x100 ASPH Rwy 23 down 0.6",
        "RWY CERT", "Rwy 12 RVR 1200(1/4sm)/Rwy 30 RVR 1200(1/4sm) AGN IIIA Rwy 05/23 AGN II",
        "TWY CERT", "Twy C: AGN I fr Apron V to Twy B & AGN IIIA fr Twy B to Rwy 12/30 & AGN I",
        "            fr Rwy 12/30 to Rwy 05/23",
        "TWY", "Normal Rwy 30 deps are from Twy B. Acft requiring full length must notify gnd",
        "       ctl on initial contact.",
        "RCR", "Twr 905-576-2398 RSC/CRFI avbl 1130-0330Z OPR 905-576-8146",
        "RCR2", "RSC/CRFI avbl 0330-1130Z PLR/PCN.",
        "LIGHTING", "05-AS(TE ME) P1, 23-(TE ME) P1, 12-AS(TE HI) P2, 30-AS(TE HI) P2",
        "LIGHTING2", "ARCAL-120.1 type K",
        "COMM", "ATIS 125.675 1130-0330Z",
        "GND", "118.4 1130-0330Z",
        "TWR", "120.1 (V) 1130-0330Z (emerg only 905-576-2398)"
    };
    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYSJ(){ //Saint John
    wipe_screen();
    draw_thick_line(82, 39, 208, 75, 0xFFFF);
    draw_thick_line(231, 108, 151, 220, 0xFFFF);
    write_character(18, 9, '1');
    write_character(19, 9, '4');
    write_character(53, 18, '3');
    write_character(54, 18, '2');
    write_character(58, 25, '0');
    write_character(59, 25, '5');
    write_character(35, 55, '2');
    write_character(36, 55, '3');
    arrow_right_disp();
 }

 void slide_CYSJ(){
    wipe_screen();
    char *entries[] = {
        "REF", "N45 18 57 W65 53 24 8ENE 18W (2014) UTC-4(3) Elev 357' A5003 LO8 HI6 CAP",
        "OPR", "Saint John Airport Inc 506-638-5555 Cert",
        "PF", "A-1,2,3,6,7 09-04Z C-4,5",
        "CUST", "AOE/120 (140 with staged off-loading) 888-226-7277 12-04Z",
        "FLT PLN", "NOTAM FILE CYSJ",
        "FIC", "London 866-WXBRIEF (Toll free CA) or 866-541-4104 (Toll free CA & USA)",
        "ACC", "(IFR only) Moncton 506-867-7177 or 866-480-8200.",
        "WX", "METAR H24 TAF H24, issue times: 00, 06, 12, 18Z",
        "SERVICES", "Call out chg may be levied for one or more svcs",
        "FUEL", "100LL H24 self-serve, JA (FSII avbl) 12-21Z Mon-Fri, JA-1 (FSII avbl) 08-24Z",
        "OIL", "All",
        "S", "1(ltd, for lgt acft),2,4,5,6",
        "ARFF", "DESIGNATED CAT 6 0900-0330Z, O/T call out chg.",
        "JASU", "CE8, CA2",
        "PVT ADV", "Atlantic Flt Centre 123.3 12-21Z Mon-Fri 506-634-5565 O/T 506-650-8402",
        "          exc hols",
        "PVT ADV2", "Air Canada Ground Handling 130.37 506-632-1524",
        "MIL CON", "ASIG Canada (Irving Oil) 506-653-7409",
        "RWY DATA", "Rwy 05(049)/23(229) 7201x148 ASPH Thlds 05 & 23 displ 197",
        "RWY DATA2", "Rwy 14(138)/32(318) 5100x148 ASPH Rwy 14 down 0.84",
        "RWY DATA3", "Rwy 14/32 avbl as twy dur night when Rwy 05/23 RVR 1200(1/4sm) down to",
        "             600(1/8sm)",
        "RESA", "All Rwys 492",
        "RWY CERT", "Rwy 05 RVR 600(1/8sm)/Rwy 23 RVR 600(1/8sm) AGN IV",
        "RWY CERT2", "Rwy 14 RVR 1200(1/4sm)/Rwy 32 RVR 1200(1/4sm) AGN IV",
        "TWY CERT", "Twy I AGN IIIB",
        "TWY", "Twy I Pvt",
        "RCR", "Opr CRFI and win maint avbl ltd hrs. PLR/PCN"
    };
    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void entry_CYVR(){ //Vancouver
    wipe_screen();
    draw_thick_line(43, 66, 272, 70, 0xFFFF);
    draw_thick_line(43, 116, 272, 120, 0xFFFF);
    draw_thick_line(47, 86, 117, 151, 0xFFFF);

    write_character(8, 14, '0');
    write_character(9, 14, '8');
    write_character(10, 14, 'L');

    write_character(69, 17, '2');
    write_character(70, 17, '6');
    write_character(71, 17, 'R');

    write_character(9, 21, '1');
    write_character(10, 21, '3');

    write_character(30, 38, '3');
    write_character(31, 38, '1');

    write_character(6, 29, '0');
    write_character(7, 29, '8');
    write_character(8, 29, 'R');

    write_character(70, 30, '2');
    write_character(71, 30, '6');
    write_character(72, 30, 'L');
    arrow_right_disp();
 }

 void slide_CYVR(){
    wipe_screen();
    char *entries[] = {
        "REF       N49 11 41 W123 10 57 Adj SW 17E (2015) UTC-8(7) Elev 13' VTA A5004",
        "          LO2 HI3 T1 CAP OC",
        "OPR       Vancouver International Airport Authority 604-207-7022",
        "PF        Main tml bldg A-1,2,3,4,5,6; South side tml bldg A-1,2,3,6 B-5",
        "CUST      AOE/25 888-226-7277",
        "FLT PLN   (bil)",
        "      FIC Kamloops 666-WXBRIEF (Toll free within Canada) or 866-541-4104",
        "          (Toll free within Canada & USA",
        "      ACC IFR 604-586-4590/4591 or 800-668-1333; IFR tng flts PPR ctc",
        "          604-586-4592 (collect calls accepted)",
        "       WX METAR H24.",
        "          TAF H24, issue times: 00, 03, 06, 09, 12, 15, 18, 21Z.",
        "          WxCam",
        "     DUAT Esso Avitat, Landmark (Shell Aerocentre)",
        
        "SERVICES",
        "     FUEL 100LL, JA (FSII avbl), JA-1 (FSII avbl) HPR",
        "      OIL All",
        "        S 1,2,3",
        "     ARFF DESIGNATED CAT 10",
        "   SUP FL LHOX D & A-ice",
        "     JASU CE16, Air Start",
        "  PVT ADV Air Elite by World Fuel 122.85 604-270-2222; Million Air 122.95",
        "          604-273-6688;",
        "          Signature Flight Support 123.0 640-279-9922; Seair Seaplanes 122.85",
        "          1-800-447-3245 604-273-8900 at adj water A/D.",
        "  MIL CON Signature Flight Support 604-279-9922",

        "RWY DATA  Rwy 08R(083)/26L(263) 10803x200 ASPH/CONC",
        "          Rwy 08L(083)/26R(263) 9941x200 CONC Rwy 08L first 2027' down 0.3",
        "          Rwy 13(125)/31(305) 7300x200 ASPH/CONC",
        "          RESA: 08R/26L 984'; 08L 984'; 26R 492'; 13/31 492'",
        " RWY CERT Rwy 08R RVR 600/Rwy 26L RVR 600 AGN VI",
        "          Rwy 08L RVR 600/Rwy 26R RVR 600 AGN VI",
        "          Rwy 13/31 AGN V",
        "LIGHTING  08R-AL(TE HI A TDZL)P3, 26L-AL(TE HI CL TDZL)P3,",
        "          08L-AL(TE HI A TDZL)P3, 26R-AL(TE HI A TDZL)P3",
        "          13-AO(TE ME)P3, 31-AO(TE ME)P3",
        "          Pad B: RY(HI) Pad C: RY(HI)",
        "COMM"
        "      RCO Pacific rdo 123.15 (FISE)",
        "     ATIS 124.6 restrictions are bcst on ATIS 1-877-517-2847",
        " CLNC DEL 121.4 all dep acft ctc clnc del",
        "      GND 121.7 (South) 127.15 (North) 275.8",
        "      TWR 118.7 (South) 119.55 (North) VFR 124.02 125.65 226.5 236.6 (E)",
        "          (emerg 604-775-9531)",
        "      TML 125.2",
        "      ARR 128.6/128.17 (Outer) 133.1 (Inner) 134.225 (Inner) 352.7",
        "      DEP 126.125 (North) 132.3 (South) 363.8",
    };

    int entries_num = sizeof(entries) / sizeof(entries[0]);
    plot_entries(entries, entries_num);
    arrow_left_disp();
 }

void arrow_right_disp(){
    char disp[4];
    disp[0] = '1';
    disp[1] = '/';
    disp[2] = '2';
    disp[3] = '\0';
    plot_string(73, 55, disp);
    draw_line(307, 221, 305, 223, 0xFFFF);
    draw_line(307, 221, 305, 219, 0xFFFF);
 }

 void arrow_left_disp(){
    char disp[4];
    disp[0] = '2';
    disp[1] = '/';
    disp[2] = '2';
    disp[3] = '\0';
    plot_string(73, 55, disp);
    draw_line(287, 221, 289, 223, 0xFFFF);
    draw_line(287, 221, 289, 219, 0xFFFF);
 }

void plot_string(int x, int y, char *str) {
    int offset = 0;
    while (str[offset] != '\0') {
        write_character(x + offset, y, str[offset]);
        offset++;
    }
 }

void plot_entries(char **entries, int entries_num){
    int _x = 1;
    int _y = 5;

    for (int i = 0; i < entries_num; i++){
        plot_string(_x, _y+i, entries[i]);
    }
 }

