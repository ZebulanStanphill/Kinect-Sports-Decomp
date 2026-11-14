// Exact under LTCG with Matching func_8236B080.c and /O1 /QVMXReserve.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

typedef struct Input_8236B118 {
    int kind;
    char pad[12];
    __vector4 position;
    unsigned char enabled;
    char gap[15];
    float angle;
    char more[12];
    __vector4 direction;
} Input_8236B118;

typedef struct Item_8236B118 {
    unsigned short kind;
    char pad[30];
    __vector4 value;
} Item_8236B118;

typedef struct Obj_8236B118 {
    char pad[0x1c];
    float **data;
    char gap[0x264];
    Item_8236B118 *items[2];
    char rest[0xc74];
    int kind;
    char align[12];
    __vector4 a, b, c, d, e;
    int enabled;
} Obj_8236B118;

extern void fn_8236B080(Obj_8236B118 *);
extern __vector4 __VMXGetReg(int);
extern __vector4 fn_8255AE78(__vector4, float);

void fn_8236B118(Obj_8236B118 *self, const Input_8236B118 *input)
{
    Obj_8236B118 *dest = self;
    Item_8236B118 *item;
    __vector4 *out;
    fn_8236B080(self);
    dest->kind = input->kind;
    dest->a = input->position;
    dest->d = input->direction;
    self->e = fn_8255AE78(__VMXGetReg(71), input->angle);
    self->enabled = input->enabled;
    out = &self->b;
    item = self->items[(self->kind == 0)];
    switch (item->kind) {
    case 0:
        *out = item->value;
        break;
    case 1:
        *out = item->value;
        break;
    default:
        if (item->kind < 3)
            *out = item->value;
        break;
    }
    self->b.v[1] = self->data[1][1];
}
