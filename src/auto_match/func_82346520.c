typedef struct Sp_82346520 {
    void *px;
    void *rep;
} Sp_82346520;

typedef struct Color_82346520 {
    float r;
    float g;
    float b;
    float a;
} Color_82346520;

static __forceinline void SetColor(Color_82346520 *c, float r, float g, float b, float a)
{
    c->r = r;
    c->g = g;
    c->b = b;
    c->a = a;
}

typedef struct Tuning_82346520 {
    float unknown00;      /* 0x00 */
    float unknown04;      /* 0x04 */
    int unknown08;        /* 0x08 */
    float unknown0c;      /* 0x0c */
    float unknown10;      /* 0x10 */
    float unknown14;      /* 0x14 */
    Sp_82346520 first;    /* 0x18 */
    Sp_82346520 second;   /* 0x20 */
    float unknown28;      /* 0x28 */
    int unknown2c;        /* 0x2c */
    float unknown30;      /* 0x30 */
    float unknown34;      /* 0x34 */
    float unknown38;      /* 0x38 */
    float unknown3c;      /* 0x3c */
    float unknown40;      /* 0x40 */
    float unknown44;      /* 0x44 */
    int unknown48;        /* 0x48 */
    Color_82346520 color; /* 0x4c */
} Tuning_82346520;

extern Sp_82346520 *fn_82365BD8(Sp_82346520 *out, Sp_82346520 *in);

Tuning_82346520 *fn_82346520(Tuning_82346520 *self, Sp_82346520 *first, Sp_82346520 *second)
{
    self->unknown00 = 1.0f;
    self->unknown08 = 0;
    self->unknown04 = 2.0f;
    self->unknown0c = 4.0f;
    self->unknown10 = 2.0f;
    self->unknown14 = 25.0f;
    fn_82365BD8(&self->first, first);
    fn_82365BD8(&self->second, second);
    self->unknown2c = 0;
    self->unknown30 = 0.5f;
    self->unknown48 = 0;
    self->unknown34 = 0.5f;
    self->unknown40 = 0.9f;
    self->unknown44 = 0.25f;
    self->unknown28 = 0.0f;
    SetColor(&self->color, 0.05f, 0.3f, 0.55f, 0.8f);
    self->unknown38 = -0.16f;
    self->unknown3c = 0.0f;
    return self;
}
