typedef struct {
    char pad0[0x10];
    float offset;
    char pad14[0xc];
    char a[0x10];
    char b[0x10];
} Obj_82D3ECC0;

extern void fn_82D401F8(void *m, void *a, void *b, float t, void *out);

void fn_82D3ECC0(Obj_82D3ECC0 *o, void *m, float t, void *out)
{
    fn_82D401F8(m, o->a, o->b, o->offset + t, out);
}
