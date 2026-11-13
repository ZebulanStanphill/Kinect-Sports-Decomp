typedef struct A_8285AC08 { char pad[0x4c]; void *f4c; } A_8285AC08;
typedef struct B_8285AC08 { char pad[0x68]; char *base; } B_8285AC08;
typedef struct C_8285AC08 { char pad[0x8]; int offset; } C_8285AC08;

extern int fn_828114A8(void *a, void *b);

int fn_8285AC08(A_8285AC08 *a, B_8285AC08 *b, C_8285AC08 *c)
{
    return fn_828114A8(*(void **)(b->base + c->offset + 0x2c), a->f4c);
}
