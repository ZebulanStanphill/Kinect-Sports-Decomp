extern const float lbl_821954B0[];
extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;

typedef struct Params_8234F0D8 {
    char pad0[0x40];
    float first;  /* 0x40 */
    float second; /* 0x44 */
    float scaleB; /* 0x48 */
    float scaleA; /* 0x4c */
    float scaleC; /* 0x50 */
    float scaleD; /* 0x54 */
} Params_8234F0D8;

typedef struct Owner_8234F0D8 {
    void **database; /* 0x0 */
} Owner_8234F0D8;

extern Params_8234F0D8 *fn_82560010(void *self, const char *name);
extern void fn_8234F188(Owner_8234F0D8 *self, float *first, float *second, float a, float b, float c,
                        float d);

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

void fn_8234F0D8(Owner_8234F0D8 *self, const char *name)
{
    Params_8234F0D8 *params = fn_82560010(*self->database, name);
    float scale = params->scaleA;
    float scaleD = params->scaleD;
    float *first = &params->first;
    float scaleC = params->scaleC;
    float scaleB = params->scaleB;
    float *second = &params->second;

    fn_8234F188(self, first, second, scale == lbl_821954B0[14] ? rnd() : scale, scaleB, scaleC, scaleD);
}
