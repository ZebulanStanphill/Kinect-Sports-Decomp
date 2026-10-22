extern void fn_82864898(void *p);
extern void fn_828778E8(void *p);
extern void fn_828788D0(void *dst, void *src);

typedef struct Local {
    int a;
    char b[32];
} Local;

unsigned int fn_82877FC0(char *param_1)
{
    Local tmp;

    fn_828778E8(&tmp);
    fn_828788D0(param_1 + 0x10, &tmp);
    *(unsigned char *)(param_1 + 0xc) = 1;
    fn_82864898(tmp.b);
    return 0x20340000;
}
