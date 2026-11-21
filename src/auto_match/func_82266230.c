typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float f[4];
} __vector4;

typedef struct Setup_82266230 {
    char name[0x40]; /* 0x00 */
    int field40;     /* 0x40 */
    int field44;     /* 0x44 */
    int field48;     /* 0x48 */
    int field4C;     /* 0x4c */
    __vector4 color; /* 0x50 */
    float x;         /* 0x60 */
    float y;         /* 0x64 */
    int hasPair;     /* 0x68 */
    int pairFirst;   /* 0x6c */
    int pairSecond;  /* 0x70 */
    int extra;       /* 0x74 */
    char pad78[0x8];
    __vector4 color2;    /* 0x80 */
    __vector4 color3;    /* 0x90 */
    int fieldA0;         /* 0xa0 */
    char reserved[0x24]; /* 0xa4 */
} Setup_82266230;

extern void XMemSet(void *dest, int value, unsigned int size);

static __forceinline int IsSet(int *value)
{
    if (value == 0) {
        return 0;
    }
    return *value != 0;
}

void fn_82266230(Setup_82266230 *self, const char *name, int field40, int field44, int *field48, int *field4C,
                 float x, float y, __vector4 color, int *pairFirst, int *pairSecond, int *extra,
                 __vector4 color2, __vector4 color3, int fieldA0)
{
    char *dst;
    char *end;
    int hasPair;

    self->x = x;
    self->y = y;
    self->field40 = field40;
    self->field44 = field44;
    self->fieldA0 = fieldA0;
    self->color = color;
    self->color2 = color2;
    self->color3 = color3;
    self->field48 = *field48;
    self->field4C = *field4C;
    dst = self->name;
    end = self->name + sizeof(self->name);
    while (dst < end && (*dst++ = *name++) != 0) {
    }
    if (dst == end) {
        dst[-1] = 0;
    }
    if (IsSet(pairFirst) && IsSet(pairSecond)) {
        hasPair = 1;
    } else {
        hasPair = 0;
    }
    self->hasPair = hasPair;
    if (hasPair != 0) {
        self->pairFirst = *pairFirst;
        self->pairSecond = *pairSecond;
    } else {
        self->pairFirst = 0;
        self->pairSecond = 0;
    }
    if (IsSet(extra)) {
        self->extra = *extra;
    } else {
        self->extra = 0;
    }
    XMemSet(self->reserved, 0, sizeof(self->reserved));
}
