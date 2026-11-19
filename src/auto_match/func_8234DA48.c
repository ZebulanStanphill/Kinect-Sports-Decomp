typedef struct Range_8234DA48 {
    float start;  /* 0x00 */
    float end;    /* 0x04 */
    float scale;  /* 0x08 */
    float offset; /* 0x0c */
    float value;  /* 0x10 */
    float weight; /* 0x14 */
} Range_8234DA48;

typedef struct Source_8234DA48 Source_8234DA48;

struct Source_8234DA48 {
    struct {
        char pad0[0x14];
        int (*getId)(Source_8234DA48 *self, int key); /* 0x14 */
    } *vt;
};

typedef struct Owner_8234DA48 {
    char pad0[0x1b4];
    Source_8234DA48 *source; /* 0x1b4 */
} Owner_8234DA48;

typedef struct World_8234DA48 {
    char pad0[0x8c0];
    Owner_8234DA48 *owner; /* 0x8c0 */
} World_8234DA48;

typedef struct Self_8234DA48 {
    char pad0[0x48];
    World_8234DA48 *world; /* 0x48 */
} Self_8234DA48;

extern const double lbl_821954B0[0x145];
extern const float lbl_82193AD8[0x52];
extern void fn_82564658(Self_8234DA48 *self, int id, float start, float end, float weight0, float scale,
                        float weight1, float offset, float weight2, float value);

void fn_8234DA48(Self_8234DA48 *self, Range_8234DA48 *input, int key)
{
    Range_8234DA48 *range = input;
    Owner_8234DA48 *owner;
    Source_8234DA48 *source;
    int id;
    float factor;
    float weight;

    if (range->scale >= ((const float *)lbl_821954B0)[0x139] && range->scale <= lbl_82193AD8[6] &&
        range->end - range->start >= ((const float *)lbl_821954B0)[0x139] &&
        range->end - range->start <= lbl_82193AD8[6]) {
        return;
    }
    owner = self->world->owner;
    if (owner != 0 && (source = owner->source) != 0) {
        id = source->vt->getId(source, key);
    } else {
        id = -1;
    }
    factor = ((const float *)lbl_821954B0)[0xf];
    weight = range->weight * factor;
    fn_82564658(self, id, range->start * factor, range->end * factor, weight, range->scale * factor, weight,
                range->offset * factor, weight, range->value);
}
