typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
typedef struct Obj_826A9318 {
    int pad[4];
    int sink;
    int pad14;
    unsigned bits : 30;
    unsigned enabled : 1;
    unsigned active : 1;
} Obj_826A9318;
void fn_826A9318(unsigned p, int a, ...)
{
    va_list ap;
    Obj_826A9318 *q, *s;
    int *r;
    char *b;
    __va_start(&ap, a);
    q = p != 0 ? (Obj_826A9318 *)(p - 0x14) : 0;
    b = (char *)q + 0x14;
    s = b != 0 ? (Obj_826A9318 *)(b - 0x14) : 0;
    if ((unsigned char)s->enabled) {
        r = *(int **)(q->sink + 0xc);
        if (r != 0) ((void (*)(int *, int, int, va_list))(*(int *)(*r + 4)))(r, 0x33, a, ap);
    }
}
