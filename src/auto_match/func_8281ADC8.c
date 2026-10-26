typedef struct {
    int v[16];
} Elem;

typedef struct {
    char pad[0x7c];
    Elem *base;
    char pad2[0x88 - 0x80];
    char list[0x108 - 0x88];
    char other[4];
} Owner;

extern int fn_828192C8(void);
extern void fn_828233A8(void *list, Elem **out, int (*pred)(void), int arg);
extern void fn_82819398(Elem *base, void *other, int idx);
extern void fn_82822E38(Elem *e);
extern void fn_8281A1A0(Owner *o, int idx);

void fn_8281ADC8(Owner *o, int arg)
{
    Elem *base = o->base;
    Elem *found;
    short idx;

    fn_828233A8(o->list, &found, fn_828192C8, arg);
    idx = (short)(found - base);
    fn_82819398(base, o->other, idx);
    fn_82822E38(&base[idx]);
    fn_8281A1A0(o, idx);
}
