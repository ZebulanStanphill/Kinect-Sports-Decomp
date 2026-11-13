typedef struct String_8265DA00 {
    char buf[16];
    unsigned int size;
    unsigned int res;
} String_8265DA00;

extern unsigned char fn_8265DD28(String_8265DA00 *self, const char *ptr);
extern String_8265DA00 *fn_8265DB18(String_8265DA00 *self, String_8265DA00 *right, unsigned int off, unsigned int count);
extern unsigned char fn_8265DC30(String_8265DA00 *self, unsigned int count, unsigned char trim);
extern char *fn_8265DDA0(String_8265DA00 *self);
extern char *fn_822300F0(char *dst, const char *src, unsigned int count);
extern void fn_8265DAB8(String_8265DA00 *self, unsigned int count);

String_8265DA00 *fn_8265DA00(String_8265DA00 *self, const char *ptr, unsigned int count)
{
    if (fn_8265DD28(self, ptr))
        return fn_8265DB18(self, self, ptr - fn_8265DDA0(self), count);
    if (fn_8265DC30(self, count, 0)) {
        fn_822300F0(fn_8265DDA0(self), ptr, count);
        fn_8265DAB8(self, count);
    }
    return self;
}
