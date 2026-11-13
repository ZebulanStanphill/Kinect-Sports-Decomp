typedef struct A_8252DE80 {
    unsigned char active;    /* 0x00 */
    float f4;                /* 0x04 */
    float f8;                /* 0x08 */
    float fc;                /* 0x0c */
    float f10;               /* 0x10 */
    float f14;               /* 0x14 */
    float f18;               /* 0x18 */
    float f1c;               /* 0x1c */
    int i20;                 /* 0x20 */
    float f24;               /* 0x24 */
    float f28;               /* 0x28 */
} A_8252DE80;

typedef struct B_8252DE80 {
    int i0;                  /* 0x00 */
    int i4;                  /* 0x04 */
    int i8;                  /* 0x08 */
    float fc;                /* 0x0c */
    float f10;               /* 0x10 */
    int i14;                 /* 0x14 */
    float f18;               /* 0x18 */
    float f1c;               /* 0x1c */
    int i20;                 /* 0x20 */
    int i24;                 /* 0x24 */
    int i28;                 /* 0x28 */
} B_8252DE80;

typedef struct Obj_8252DE80 {
    char pad0[0x40];
    A_8252DE80 a[2];         /* 0x40 */
    B_8252DE80 b[2];         /* 0x98 */
    int if0;                 /* 0xf0 */
    int if4;                 /* 0xf4 */
    float ff8;               /* 0xf8 */
    float ffc;               /* 0xfc */
    float f100;              /* 0x100 */
    float f104;              /* 0x104 */
    float f108;              /* 0x108 */
    float f10c;              /* 0x10c */
    float f110;              /* 0x110 */
    float f114;              /* 0x114 */
} Obj_8252DE80;

void fn_8252DE80(Obj_8252DE80 *self)
{
    int i;

    for (i = 0; i < 2; i++) {
        self->a[i].active = 0;
        self->a[i].f4 = 0.0f;
        self->a[i].f8 = 0.0f;
        self->a[i].fc = 0.0f;
        self->a[i].f10 = 0.0f;
        self->a[i].f14 = 0.0f;
        self->a[i].f18 = 0.0f;
        self->a[i].f1c = 0.0f;
        self->a[i].i20 = 0;
        self->a[i].f24 = 0.0f;
        self->a[i].f28 = 0.0f;
        self->b[i].i4 = 0;
        self->b[i].i0 = 0;
        self->b[i].f18 = 0.0f;
        self->b[i].f1c = 0.0f;
        self->b[i].fc = 0.0f;
        self->b[i].f10 = 0.0f;
        self->b[i].i28 = 0;
    }
    self->f100 = 0.0f;
    self->if0 = 0;
    self->f10c = 0.0f;
    self->if4 = 0;
    self->f110 = 0.0f;
    self->f108 = 0.0f;
    self->f114 = 0.0f;
    self->f104 = 0.0f;
    self->ffc = 0.0f;
    self->ff8 = 0.0f;
}
