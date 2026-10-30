typedef struct Obj { char pad[0x28]; unsigned int flags; int x2c; } Obj;
extern void fn_83015E68(char *pool, Obj *o);
extern unsigned int fn_83016298(char *list, int key, Obj *o);
extern char *lbl_832642E0;

unsigned int fn_8302B4C8(Obj *o)
{
    if ((o->flags & 0x40000000) != 0) {
        fn_83015E68(lbl_832642E0 + 0x350, o);
        return 1;
    }
    return fn_83016298(lbl_832642E0 + 0x328, o->x2c, o);
}
