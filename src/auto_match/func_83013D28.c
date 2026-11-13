typedef struct Obj_83013D28 {
    int pad0;
    void *first;
    void *last;
    char padc[0x24];
    char sub[4];
} Obj_83013D28;

extern void fn_82A1E968(void *p);

void fn_83013D28(Obj_83013D28 *o)
{
    if (o->last != o->first) {
        fn_82A1E968(o->sub);
    }
}
