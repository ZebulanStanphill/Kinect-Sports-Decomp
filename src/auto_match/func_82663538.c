typedef struct String_82663538 {
    union { unsigned short buf[8]; unsigned short *ptr; } bx;
    unsigned int size;
    unsigned int res;
    char alval;
} String_82663538;

extern void fn_82297D98(String_82663538 *dst, unsigned short *src, unsigned int count);
extern void fn_82668E40(char *al, unsigned short *p, unsigned int count);
extern void fn_82663848(String_82663538 *self, unsigned int size);

void fn_82663538(String_82663538 *self, unsigned char built, unsigned int newsize)
{
    if (!built)
        ;
    else if (8 <= self->res) {
        unsigned short *ptr = self->bx.ptr;
        if (0 < newsize)
            fn_82297D98(self, ptr, newsize);
        fn_82668E40(&self->alval, ptr, self->res + 1);
    }
    self->res = 8 - 1;
    fn_82663848(self, newsize);
}
