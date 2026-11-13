typedef struct String_8265D8A0 {
    union { char buf[16]; char *ptr; } bx;
    unsigned int size;
    unsigned int res;
    char alval;
} String_8265D8A0;

extern void fn_822300F0(String_8265D8A0 *dst, char *src, unsigned int count);
extern void fn_82668E40(char *al, char *p, unsigned int count);
extern void fn_8265DAB8(String_8265D8A0 *self, unsigned int size);

void fn_8265D8A0(String_8265D8A0 *self, unsigned char built, unsigned int newsize)
{
    if (!built)
        ;
    else if (16 <= self->res) {
        char *ptr = self->bx.ptr;
        if (0 < newsize)
            fn_822300F0(self, ptr, newsize);
        fn_82668E40(&self->alval, ptr, self->res + 1);
    }
    self->res = 16 - 1;
    fn_8265DAB8(self, newsize);
}
