// The 110.0f is read as element 10 of the float pool lbl_82191558 (size 0x9C: base address
// plus lfs 0x28, inside the symbol), as in func_82270AC0.
typedef struct { char pad[0x44]; float *value; } Obj_824504B8;

extern const float lbl_82191558[];

int fn_824504B8(Obj_824504B8 *self)
{
    if (*self->value > lbl_82191558[10])
        return 1;
    return 0;
}
