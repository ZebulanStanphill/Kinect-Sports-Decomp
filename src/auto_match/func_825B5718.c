typedef struct Cell_825B5718 {
    int pad0;
    int value; /* 0x04 */
    char pad8[0x18];
} Cell_825B5718;

typedef struct Level_825B5718 {
    int width;  /* 0x00 */
    int height; /* 0x04 */
    int depth;  /* 0x08 */
    char padc[0xc];
    Cell_825B5718 *cells; /* 0x18 */
} Level_825B5718;

typedef struct Grid_825B5718 {
    char pad0[0x18];
    int levelCount;         /* 0x18 */
    Level_825B5718 *levels; /* 0x1c */
} Grid_825B5718;

static __forceinline int AlignUp16(int value)
{
    int remainder = value % 16;

    if (remainder > 0) {
        value = value - remainder + 16;
    } else if (remainder < 0) {
        value -= remainder;
    }
    return value;
}

int fn_825B5718(Grid_825B5718 *self)
{
    int size = 16;
    int i;

    for (i = 0; i < self->levelCount; i++) {
        int used = 0;
        int cellCount = self->levels[i].width * self->levels[i].height * self->levels[i].depth;
        int j;

        for (j = 0; j < cellCount; j++) {
            if (self->levels[i].cells[j].value != -1) {
                used++;
            }
        }
        size += AlignUp16(used * 64);
    }
    return size;
}
