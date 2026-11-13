typedef struct Src_8278E9B0 {
    unsigned char mode;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned short h4;
    unsigned short h6;
    union {
        unsigned int w8;
        unsigned char b8;
    } u8;
} Src_8278E9B0;

typedef struct Dial_8278E9B0 {
    char pad0[8];
    unsigned char b8;
    unsigned char b9;
    unsigned char bA;
    unsigned char bB;
    unsigned char bC;
    unsigned char bD;
    unsigned char bE;
    unsigned char bF;
    unsigned short h10;
    unsigned short h12;
    unsigned short h14;
    unsigned short h16;
    unsigned int w18;
} Dial_8278E9B0;

extern void fn_8272C070(void *dial);

void fn_8278E9B0(Dial_8278E9B0 *self, Src_8278E9B0 *src)
{
    unsigned int kind = src->mode & 0xf;

    if (kind == 1) {
        self->b8 = src->b1;
        self->b9 = src->b2;
        self->bA = src->b3;
        return;
    }
    if (kind != 0 && kind != 2) {
        return;
    }
    self->bB = src->mode & 0xf0;
    self->bC = src->b1;
    self->bD = src->b2;
    self->bE = src->b3;
    self->bF = src->u8.b8;
    self->h10 = src->h4;
    self->h12 = src->h6;
    self->h14 = 0;
    self->h16 = 0;
    self->w18 = src->u8.w8;
    fn_8272C070(self);
}
