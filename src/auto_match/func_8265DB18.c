/* std::string::assign(const string &right, size_type off, size_type count) (VC10, out of line, /Og-). */
typedef struct String_8265DB18 {
    char buf[16];
    unsigned int size;
    unsigned int res;
} String_8265DB18;

extern const unsigned int lbl_821961F0; /* npos */
extern unsigned int fn_8265DED8(String_8265DB18 *self);
extern void fn_82663F28(String_8265DB18 *self);
extern String_8265DB18 *fn_8265DDD8(String_8265DB18 *self, unsigned int off, unsigned int count);
extern unsigned char fn_8265DC30(String_8265DB18 *self, unsigned int count, unsigned char trim);
extern char *fn_8265DDA0(String_8265DB18 *self);
extern char *fn_822300F0(char *dst, const char *src, unsigned int count);
extern void fn_8265DAB8(String_8265DB18 *self, unsigned int count);

String_8265DB18 *fn_8265DB18(String_8265DB18 *self, String_8265DB18 *right, unsigned int off, unsigned int count)
{
    unsigned int num;

    if (fn_8265DED8(right) < off)
        fn_82663F28(self);
    num = fn_8265DED8(right) - off;
    if (count < num)
        num = count;
    if (self == right) {
        fn_8265DDD8(self, off + num, lbl_821961F0);
        fn_8265DDD8(self, 0, off);
    } else if (fn_8265DC30(self, num, 0)) {
        fn_822300F0(fn_8265DDA0(self), fn_8265DDA0(right) + off, num);
        fn_8265DAB8(self, num);
    }
    return self;
}
