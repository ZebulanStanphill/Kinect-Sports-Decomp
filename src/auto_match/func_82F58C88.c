typedef struct Obj_82F58C88 {
    int unk0[12];
    int count;
    int unk34;
    int enabled;
} Obj_82F58C88;

extern unsigned int lbl_83263180;

float fn_82F58C88(Obj_82F58C88 *self)
{
    if (self->enabled == 0) {
        return 1.0f;
    }
    return (float)self->count / (float)lbl_83263180;
}
