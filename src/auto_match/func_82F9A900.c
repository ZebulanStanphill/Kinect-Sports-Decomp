typedef struct Params_82F9A900 {
    char pad0[4];
    float a;         /* 0x04 */
    float b;         /* 0x08 */
    float c;         /* 0x0c */
    float d;         /* 0x10 */
    float gain;      /* 0x14 */
    unsigned char e; /* 0x18 */
    unsigned char f; /* 0x19 */
} Params_82F9A900;

typedef struct Data_82F9A900 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int volume;
    unsigned char e;
    unsigned char f;
} Data_82F9A900;

extern double fn_82F655D8(double x, double y);

static __forceinline float AsFloat(unsigned int v)
{
    return *(float *)&v;
}

int fn_82F9A900(Params_82F9A900 *self, const unsigned int *data)
{
    const unsigned int *p = data;
    self->a = AsFloat(*p++);
    self->b = AsFloat(*p++);
    self->c = AsFloat(*p++);
    self->d = AsFloat(*p++);
    self->gain = (float)fn_82F655D8(10.0, AsFloat(*p++) * 0.05f);
    self->e = ((const unsigned char *)p)[0];
    self->f = ((const unsigned char *)p)[1];
    return 1;
}
