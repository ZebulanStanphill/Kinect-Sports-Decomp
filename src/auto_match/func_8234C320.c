typedef struct Obj_8234C320 {
    int pad0[4];
    int target;   /* 0x10 */
    int pad14;
    int enabled;    /* 0x18 */
} Obj_8234C320;
extern const float lbl_821CA45C[2];
extern const float lbl_821917A8[];
extern void fn_827F5730(int target, float value, float time);

void fn_8234C320(int enabled, Obj_8234C320 *self)
{
    if (self->target != 0) {
        fn_827F5730(self->target, enabled ? lbl_821CA45C[1] : 0.0f, lbl_821917A8[3]);
    }
    self->enabled = enabled;
}
