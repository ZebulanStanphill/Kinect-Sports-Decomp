typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float components[4];
} __vector4;

typedef struct Query_82563C38 {
    char pad[0x30];
    __vector4 defaults;
} Query_82563C38;

typedef struct Pair_82563C38 {
    __vector4 first;
    __vector4 second;
} Pair_82563C38;

typedef struct Shape_82563C38 Shape_82563C38;

typedef struct VTable_82563C38 {
    void *slots[7];
    void (*bounds)(Shape_82563C38 *, Query_82563C38 *, float, Pair_82563C38 *);
} VTable_82563C38;

struct Shape_82563C38 {
    const VTable_82563C38 *vtable;
};

typedef struct Object_82563C38 {
    char pad[0x10];
    Shape_82563C38 *shape;
} Object_82563C38;

extern const __vector4 lbl_821962C0;
extern const __vector4 lbl_82196750;
extern void fn_82CE6010(Query_82563C38 *, const __vector4 *);
__vector4 __VMXGetReg(unsigned int);
__vector4 __vsel(__vector4, __vector4, __vector4);

void fn_82563C38(Object_82563C38 *self, __vector4 *first, __vector4 *second)
{
    Pair_82563C38 box;
    Query_82563C38 query;
    __vector4 zeroFirst;
    __vector4 zeroSecond;
    __vector4 maskFirst;
    __vector4 maskSecond;

    query.defaults = lbl_821962C0;
    fn_82CE6010(&query, &lbl_82196750);
    self->shape->vtable->bounds(self->shape, &query, 0.0f, &box);
    zeroFirst = __VMXGetReg(77);
    maskFirst = __VMXGetReg(67);
    maskSecond = __VMXGetReg(67);
    zeroSecond = __VMXGetReg(77);
    *first = __vsel(box.first, zeroFirst, maskFirst);
    *second = __vsel(box.second, zeroSecond, maskSecond);
}
