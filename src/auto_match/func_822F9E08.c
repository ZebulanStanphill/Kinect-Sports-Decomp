typedef struct Weight_822F9E08 {
    float weight; /* 0x0 */
    int pad4[2];
} Weight_822F9E08;

typedef struct Table_822F9E08 {
    char pad00[0x1c];
    Weight_822F9E08 weights[5][6]; /* 0x1c */
} Table_822F9E08;

typedef struct Game_822F9E08 {
    char pad000[0x844];
    int level; /* 0x844 */
} Game_822F9E08;

typedef struct Self_822F9E08 {
    Game_822F9E08 *game; /* 0x0 */
} Self_822F9E08;

extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;
extern Table_822F9E08 lbl_831CCAC0;

static __forceinline float rnd(void)
{
    union {
        unsigned int i;
        float f;
    } value;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    value.i = lbl_83265A28 & 0x7fffff | 0x3f800000;
    return value.f - lbl_821CA45C[1];
}

int fn_822F9E08(Self_822F9E08 *self)
{
    int level = self->game->level;
    float sum = 0.0f;
    float total = 0.0f;
    float roll;
    int i;

    for (i = 0; i < 6; i++) {
        total += lbl_831CCAC0.weights[level][i].weight;
    }
    roll = rnd();
    for (i = 0; i < 6; i++) {
        sum += lbl_831CCAC0.weights[level][i].weight * (lbl_821CA45C[1] / total);
        if (roll < sum) {
            return i;
        }
    }
    return 2;
}
