typedef struct Vtbl_82BC0780 {
    char pad[0x54];
    void (*f54)(struct Obj_82BC0780 *self, int a, int b, int c);
} Vtbl_82BC0780;

typedef struct Obj_82BC0780 {
    Vtbl_82BC0780 *vt;
} Obj_82BC0780;

typedef struct Self_82BC0780 {
    char pad[0x38];
    Obj_82BC0780 *obj;
    int f3c;
} Self_82BC0780;

typedef struct Flags_82BC0780 {
    unsigned char b[4];
} Flags_82BC0780;

extern unsigned char fn_82BA0310(int a);

int fn_82BC0780(Self_82BC0780 *self, Flags_82BC0780 flags, int arg)
{
    int i;
    if (fn_82BA0310(arg)) {
        for (i = 0; i < 4; i++) {
            if (flags.b[i] == 0) {
                self->obj->vt->f54(self->obj, 0, i, 0);
            }
        }
        return self->f3c;
    }
    return (int)self;
}
