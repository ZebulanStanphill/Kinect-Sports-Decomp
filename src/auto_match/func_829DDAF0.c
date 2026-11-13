typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec_829DDAF0 {
    __vector4 v;
} Vec_829DDAF0;

typedef struct Item_829DDAF0 {
    int v[3];
} Item_829DDAF0;

typedef struct Out_829DDAF0 {
    __vector4 head;
    Item_829DDAF0 items[8];
} Out_829DDAF0;

typedef struct Elem_829DDAF0 {
    char data[0x260];
} Elem_829DDAF0;

typedef struct Obj_829DDAF0 {
    char pad0[0x18];
    Elem_829DDAF0 elems[8];
} Obj_829DDAF0;

extern Vec_829DDAF0 fn_829DD678(Obj_829DDAF0 *self);
extern void fn_829DD980(Elem_829DDAF0 *e, Item_829DDAF0 *out);

void fn_829DDAF0(Obj_829DDAF0 *self, Out_829DDAF0 *out)
{
    int i;
    out->head = fn_829DD678(self).v;
    for (i = 0; i < 8; i++)
        fn_829DD980(&self->elems[i], &out->items[i]);
}
