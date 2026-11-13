typedef struct String_8265DAB8 {
    char pad0[0x10];
    unsigned int size;
} String_8265DAB8;

extern char *fn_8265DDA0(String_8265DAB8 *s);
extern void fn_82230100(char *dst, const char *src);

void fn_8265DAB8(String_8265DAB8 *s, unsigned int n)
{
    char nul = 0;
    s->size = n;
    fn_82230100(fn_8265DDA0(s) + n, &nul);
}
