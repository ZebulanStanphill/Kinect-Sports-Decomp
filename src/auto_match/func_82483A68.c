/* Sub-object at +0x10 handled by fn_8247F570 (reset) and fn_8247EBC8 (update);
   0x980 is a dirty flag cleared after the reset. */
typedef struct Sub_82483A68 {
    int data[(0x980 - 0x10) / 4];
} Sub_82483A68;

typedef struct Obj_82483A68 {
    int pad00[4];
    Sub_82483A68 sub;
    int f980;
} Obj_82483A68;

extern void fn_8247F570(Sub_82483A68 *s);
extern void fn_8247EBC8(Sub_82483A68 *s, float f, int a);

void fn_82483A68(Obj_82483A68 *self, float f, int a)
{
    if (self->f980 != 0) {
        fn_8247F570(&self->sub);
        self->f980 = 0;
    }
    fn_8247EBC8(&self->sub, f, a);
}
