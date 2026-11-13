typedef struct Obj_823AA8C8 Obj_823AA8C8;

typedef struct Vt_823AA8C8 {
    void *pad0[0x7c / 4];
    int (*f7c)(Obj_823AA8C8 *self, void *item);
    void *pad80;
    int (*f84)(Obj_823AA8C8 *self, void *item);
    void *pad88[(0x9c - 0x88) / 4];
    void (*f9c)(Obj_823AA8C8 *self, void *target, int value, int mode);
} Vt_823AA8C8;

struct Obj_823AA8C8 {
    Vt_823AA8C8 *vt;
    char pad4[0x30 - 0x4];
    int f30;
};

int fn_823AA8C8(Obj_823AA8C8 *self, void *target, void *item)
{
    if (self->vt->f84(self, item) != 0) {
        if (self->f30 != 0) {
            self->vt->f9c(self, target, self->vt->f7c(self, item), 1);
        } else {
            int missing = self->vt->f7c(self, item) == 0;
            self->vt->f9c(self, target, missing, 6);
        }
    }
    return 1;
}
