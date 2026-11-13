typedef struct Obj_8239D000 {
    unsigned char pad0[0x178];
    int unk178;
} Obj_8239D000;

int fn_82397F88(Obj_8239D000 *self);
int fn_82397F30(Obj_8239D000 *self);

int fn_8239D000(Obj_8239D000 *self)
{
    if (self->unk178 != 0) {
        return 2;
    }
    if (fn_82397F88(self)) {
        return 1;
    }
    return fn_82397F30(self) ? 0 : 3;
}
