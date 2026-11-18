typedef struct Source_8305ADE8 {
    char pad0[0x4c];
    float type;  /* 0x4c */
    float gain0; /* 0x50 */
    char pad54[8];
    float param0; /* 0x5c */
    float gain2;  /* 0x60 */
    char pad64[8];
    float param2; /* 0x6c */
    float gain1;  /* 0x70 */
    char pad74[8];
    float param1; /* 0x7c */
    float gain3;  /* 0x80 */
    char pad84[8];
    float param3; /* 0x8c */
    float gain4;  /* 0x90 */
    char pad94[8];
    float param4; /* 0x9c */
    float gain5;  /* 0xa0 */
    char padA4[8];
    float param5; /* 0xac */
} Source_8305ADE8;

typedef struct Effect_8305ADE8 {
    char pad0[8];
    Source_8305ADE8 *source; /* 0x08 */
} Effect_8305ADE8;

typedef struct Owner_8305ADE8 {
    Effect_8305ADE8 *effect; /* 0x00 */
} Owner_8305ADE8;

typedef struct Params_8305ADE8 {
    int count;       /* 0x00 */
    float type;      /* 0x04 */
    float gains[6];  /* 0x08 */
    float params[6]; /* 0x20 */
} Params_8305ADE8;

void fn_8305ADE8(Owner_8305ADE8 *self, Params_8305ADE8 *out)
{
    Source_8305ADE8 *src = self->effect->source;
    float *values;

    out->count = 6;
    values = &out->type;
    *values++ = src->type;
    *values++ = src->gain0 * 3.98107171f;
    *values++ = src->gain1 * 3.98107171f;
    *values++ = src->gain2 * 3.98107171f;
    *values++ = src->gain3 * 3.98107171f;
    *values++ = src->gain4 * 3.98107171f;
    *values++ = src->gain5 * 3.98107171f;
    *values++ = src->param0;
    *values++ = src->param1;
    *values++ = src->param2;
    *values++ = src->param3;
    *values++ = src->param4;
    *values++ = src->param5;
}
