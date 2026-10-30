extern void fn_827FA3D0(void *p, int index, void **out);
extern int fn_827FA3E8(void *p);

typedef struct {
    char pad[0x138];
    void *list;
} Obj_82837A40;

void fn_82837A40(Obj_82837A40 *o, void **out)
{
    if (o->list != 0 && fn_827FA3E8(o->list) > 0) {
        fn_827FA3D0(o->list, 0, out);
    } else {
        *out = 0;
    }
}
