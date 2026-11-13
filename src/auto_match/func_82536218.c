typedef struct Obj_82536218 Obj_82536218;

typedef struct Vtbl_82536218 {
    void *slots[4];
    void (*f10)(Obj_82536218 *self, void *arg, float f);
} Vtbl_82536218;

struct Obj_82536218 {
    Vtbl_82536218 *vt;
};

typedef struct Temp_82536218 {
    unsigned char data[0x28];
} Temp_82536218;

extern Obj_82536218 *lbl_8327F848;
extern void *fn_82864988(Temp_82536218 *t, void *src);
extern void fn_82864898(Temp_82536218 *t);

void fn_82536218(void *src, float f)
{
    Temp_82536218 t;
    lbl_8327F848->vt->f10(lbl_8327F848, fn_82864988(&t, src), f);
    fn_82864898(&t);
}
