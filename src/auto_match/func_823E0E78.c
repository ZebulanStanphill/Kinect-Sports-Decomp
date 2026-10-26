extern float lbl_821CC160;

typedef struct Pair823E0E78 {
    int a;
    int b;
} Pair823E0E78;

typedef struct S823E0E78 {
    char pad0[8];
    Pair823E0E78 pair;
    char pad10[8];
    float f18;
    char pad1c[8];
    unsigned char f24;
    char pad25[0x3f];
    unsigned char f64;
} S823E0E78;

void fn_823E0E78(S823E0E78 *p)
{
    Pair823E0E78 *q = &p->pair;
    p->f18 = lbl_821CC160;
    q->b = 0;
    q->a = 0;
    p->f64 = 0;
    p->f24 = 0;
}
