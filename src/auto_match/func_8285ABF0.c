typedef struct A_8285ABF0 { char pad[0x4c]; void *f4c; } A_8285ABF0;
typedef struct B_8285ABF0 { char pad[0x68]; char *base; } B_8285ABF0;
typedef struct C_8285ABF0 { char pad[0x8]; int offset; } C_8285ABF0;

extern int fn_828116B8(void *a, void *b);

int fn_8285ABF0(A_8285ABF0 *a, B_8285ABF0 *b, C_8285ABF0 *c)
{
    return fn_828116B8(*(void **)(b->base + c->offset + 0x2c), a->f4c);
}
