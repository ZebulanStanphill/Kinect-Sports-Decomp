typedef struct Desc_82BB2CF8 {
    char pad0[0x14];
    int count;
} Desc_82BB2CF8;

typedef struct Obj_82BB2CF8 {
    char pad0[0x10];
    Desc_82BB2CF8 *desc;
    int seed;
    char pad18[0x64 - 0x18];
    int values[1][4];   /* desc->count rows */
} Obj_82BB2CF8;

int fn_82BB2CF8(Obj_82BB2CF8 *self)
{
    int hash = 1;
    int i;
    int j;

    for (i = 0; i < self->desc->count; i++) {
        for (j = 0; j < 4; j++)
            hash *= self->values[i][j];
    }
    return (self->seed + hash) % 101;
}
