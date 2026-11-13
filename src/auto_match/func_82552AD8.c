typedef struct Obj_82552AD8 Obj_82552AD8;

typedef struct Vtbl_82552AD8 {
    void *slots[4];
    void (*f10)(Obj_82552AD8 *self, void *arg, float f);
} Vtbl_82552AD8;

struct Obj_82552AD8 {
    Vtbl_82552AD8 *vt;
};

typedef struct Temp_82552AD8 {
    unsigned char data[0x28];
} Temp_82552AD8;

extern void *fn_82864988(Temp_82552AD8 *t);
extern void fn_82864898(Temp_82552AD8 *t);

void fn_82552AD8(Obj_82552AD8 **pp, float f)
{
    Temp_82552AD8 t;
    Vtbl_82552AD8 *vt;

    if (*pp != 0) {
        vt = (*pp)->vt;
        vt->f10(*pp, fn_82864988(&t), f);
        fn_82864898(&t);
    }
}
