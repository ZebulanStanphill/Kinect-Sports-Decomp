typedef struct { int type; int a; int b; } Item_827A64B0;
typedef struct { Item_827A64B0 *data; unsigned int count; } ItemVec_827A64B0;

typedef struct {
    char pad0[0x14];
    unsigned short value;
    unsigned short flags;
} Sub_827A64B0;

typedef struct {
    char pad0[0x2c];
    Sub_827A64B0 sub;
} Obj_827A64B0;

typedef struct { Obj_827A64B0 **data; unsigned int count; } ObjVec_827A64B0;

extern int fn_8278FFF0(float *out, int a, int b);

void fn_827A64B0(int unused, ObjVec_827A64B0 *objs, ItemVec_827A64B0 *items)
{
    int idx = 0;
    Item_827A64B0 *it;

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
                Sub_827A64B0 *s = &objs->data[i]->sub;
                s->value = (unsigned short)(unsigned int)v;
                s->flags |= 0x20;
            }
        }
    }
}
