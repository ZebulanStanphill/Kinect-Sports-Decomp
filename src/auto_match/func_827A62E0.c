typedef struct { int type; int a; int b; } Item_827A62E0;
typedef struct { Item_827A62E0 *data; unsigned int count; } ItemVec_827A62E0;

typedef struct {
    char pad0[0x24];
    short value;  /* +0x24 */
    char pad1[4];
    unsigned short flags;  /* +0x2a */
} Obj_827A62E0;

typedef struct { Obj_827A62E0 **data; unsigned int count; } ObjVec_827A62E0;

extern int fn_8278FFF0(float *out, int a, int b);

void fn_827A62E0(int unused, ObjVec_827A62E0 *objs, ItemVec_827A62E0 *items)
{
    int idx = 0;
    Item_827A62E0 *it;

    if (items->data[0].type == 2) {
        idx = 1;
        if (items->count < 2) {
            return;
        }
    }
    it = &items->data[idx];
    if (it->type == 3) {
        float v;
        {
            float f = 0.0f;
            fn_8278FFF0(&f, it->a, it->b);
            v = f;
        }
        if (v != 0.0f) {
            unsigned int i;
            for (i = 0; i < objs->count; i++) {
                Obj_827A62E0 *o = objs->data[i];
                o->value = (short)(v * 20.0f);
                o->flags |= 2;
            }
        }
    }
}
