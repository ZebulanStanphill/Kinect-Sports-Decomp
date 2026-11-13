typedef struct String_8265DDA0 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_8265DDA0;

char *fn_8265DDA0(String_8265DDA0 *self)
{
    return self->res >= 16 ? self->bx.ptr : self->bx.buf;
}
