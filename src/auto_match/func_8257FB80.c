extern double __fctid(double);
extern double __fcfid(double);

typedef struct Entry_8257FB80 {
    char pad0[0x18];
    float angles[3]; /* 0x18 */
    int changed;     /* 0x24 */
    char pad28[0x30 - 0x28];
} Entry_8257FB80;

typedef struct Table_8257FB80 {
    Entry_8257FB80 entries[1]; /* 0x00, stride 0x30 */
} Table_8257FB80;

static __forceinline float WrapAngle(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831854820251465);
}

void fn_8257FB80(Table_8257FB80 *self, int index, const float *angles)
{
    if (WrapAngle(angles[0]) == WrapAngle(0.0f) && WrapAngle(angles[1]) == WrapAngle(0.0f) &&
        WrapAngle(angles[2]) == WrapAngle(0.0f)) {
        self->entries[index].changed = 0;
    } else {
        self->entries[index].changed = 1;
        self->entries[index].angles[0] = angles[0];
        self->entries[index].angles[1] = angles[1];
        self->entries[index].angles[2] = angles[2];
    }
}
