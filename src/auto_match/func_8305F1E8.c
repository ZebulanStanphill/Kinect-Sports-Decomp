typedef struct Arr_8305F1E8 {
    char pad0[0x34];
    char sub[4];
} Arr_8305F1E8;

extern void fn_8305EBE0(void *a, void *b, void *c, float f, void *d);

void fn_8305F1E8(Arr_8305F1E8 *a, void *b, float f, void *d)
{
    fn_8305EBE0(a, b, a->sub, f, d ? d : a);
}
