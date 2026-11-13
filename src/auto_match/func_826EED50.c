typedef struct Tail_826EED50 {
    int f2c;
    int f30;
    int f34;
    int f38;
    unsigned char f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
} Tail_826EED50;

typedef struct Desc_826EED50 {
    int f00;
    int f04;
    int f08;
    float f0c;
    int f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    Tail_826EED50 tail;
} Desc_826EED50;

static __forceinline void Tail_Clear(Tail_826EED50 *t)
{
    t->f2c = 0;
    t->f30 = 0;
    t->f34 = 0;
    t->f38 = 0;
    t->f3c = 0;
    t->f40 = 0;
    t->f44 = 0;
    t->f48 = 0;
    t->f4c = 0;
    t->f50 = 0;
    t->f54 = 0;
    t->f58 = 0;
    t->f5c = 0;
}

void fn_826EED50(Desc_826EED50 *d)
{
    d->f00 = 3;
    d->f04 = 2;
    d->f08 = 2;
    d->f0c = 4.0f;
    d->f10 = 0;
    d->f14 = 0;
    d->f18 = 0.0f;
    d->f1c = 0.0f;
    d->f20 = 0.5f;
    d->f24 = 0.5f;
    d->f28 = 1.0f;
    Tail_Clear(&d->tail);
}
