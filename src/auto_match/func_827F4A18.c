typedef struct Obj_827F4A18 {
    unsigned char pad00[0x34];
    int f34;
    unsigned char pad38[8];
    int f40;
} Obj_827F4A18;

extern void *fn_827F3C20(Obj_827F4A18 *obj);
extern void *fn_827F3C28(void *item);
extern void *fn_827F3C48(Obj_827F4A18 *obj, unsigned short index);
extern float fn_827F4868(Obj_827F4A18 *obj);
extern void fn_827FD760(void *a, void *b, void *c, float t, int d, int e);

void fn_827F4A18(Obj_827F4A18 *obj)
{
    void *a = fn_827F3C28(fn_827F3C48(obj, 0));
    void *b = fn_827F3C28(fn_827F3C48(obj, 1));
    void *c = fn_827F3C20(obj);
    float t = fn_827F4868(obj);

    fn_827FD760(a, b, c, t, obj->f40, obj->f34);
}
