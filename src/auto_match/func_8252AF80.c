extern const float lbl_821CA45C[2];

typedef struct Point_8252AF80 {
    float value;
    float pad[3];
} Point_8252AF80;

typedef struct Mix_8252AF80 {
    char pad0[0x10];
    unsigned int flags[4]; /* 0x10 */
    char pad1[0x2c - 0x20];
    Point_8252AF80 points[1]; /* 0x2c, stride 0x10 */
} Mix_8252AF80;

typedef struct Obj_8252AF80 {
    char pad0[0x1d0];
    Mix_8252AF80 mix; /* 0x1d0 */
} Obj_8252AF80;

static __forceinline void SetFlag(Mix_8252AF80 *m, int index, unsigned char on)
{
    if (on)
        m->flags[index] |= 0x20;
    else
        m->flags[index] &= ~0x20;
}

void fn_8252AF80(Obj_8252AF80 *self, int index, float value)
{
    float limit = lbl_821CA45C[1];
    Mix_8252AF80 *m = &self->mix;
    float weight = lbl_821CA45C[1];
    m->points[index].value = value;
    ((float *)m)[index + 0x10] = weight;
    SetFlag(m, index, value < limit);
}
