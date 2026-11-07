typedef struct { int type; int a; int b; } Item_827A6910;
typedef struct { Item_827A6910 *data; unsigned int count; } ItemVec_827A6910;

typedef struct {
    char pad0[0xe];
    short value;
    char pad1[6];
    unsigned short flags;
} Sub_827A6910;

typedef struct {
    char pad0[0x2c];
    Sub_827A6910 sub;
} Obj_827A6910;

typedef struct { Obj_827A6910 **data; unsigned int count; } ObjVec_827A6910;

extern int fn_8278FFF0(float *out, int a, int b);

void fn_827A6910(int unused, ObjVec_827A6910 *objs, ItemVec_827A6910 *items)
{
    int idx = 0;
    Item_827A6910 *it;

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
                Sub_827A6910 *s = &objs->data[i]->sub;
                s->value = (short)(int)v;
                s->flags |= 4;
            }
        }
    }
}
