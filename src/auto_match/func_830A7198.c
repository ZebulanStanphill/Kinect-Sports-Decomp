typedef struct Rows_830A7198 {
    char pad0[0x60];
    float rows[6][4]; /* 0x60 */
} Rows_830A7198;

void fn_830A7198(const unsigned char *mask, char both, Rows_830A7198 *a, Rows_830A7198 *b)
{
    int i;

    if (*mask == 0) {
        return;
    }
    for (i = 0; i < 3; i++) {
        if (((*mask >> (unsigned char)(i * 2)) & 3) != 0) {
            a->rows[0][i] = 0.0f;
            a->rows[1][i] = 0.0f;
            a->rows[2][i] = 0.0f;
            a->rows[3][i] = 0.0f;
            a->rows[4][i] = 0.0f;
            a->rows[5][i] = 0.0f;
            a->rows[3 + i][i] = 1.0f;
            if (both) {
                b->rows[0][i] = 0.0f;
                b->rows[1][i] = 0.0f;
                b->rows[2][i] = 0.0f;
                b->rows[3][i] = 0.0f;
                b->rows[4][i] = 0.0f;
                b->rows[5][i] = 0.0f;
            }
        }
    }
}
