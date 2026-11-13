typedef struct {
    union { char buf[16]; char *ptr; } bx;
    unsigned int size;
    unsigned int res;
} String_8251F3D8;
extern unsigned fn_8265BF48(const char *, int);

unsigned fn_8251F3D8(void *self, const String_8251F3D8 *s)
{
    unsigned k = fn_8265BF48(s->res >= 16 ? s->bx.ptr : s->bx.buf, 0);
    return k ? k >> 24 : 0x7a;
}
