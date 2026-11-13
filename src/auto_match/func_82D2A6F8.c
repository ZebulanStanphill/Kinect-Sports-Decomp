typedef struct Result_82D0BDC0 { float v[8]; } Result_82D0BDC0;
typedef struct Obj_82D2A6F8 {
    int unk0;
    void *target;
} Obj_82D2A6F8;
extern Result_82D0BDC0 *fn_82D0BDC0(Result_82D0BDC0 *out, void *target, int index, float scale, float offset);

Result_82D0BDC0 *fn_82D2A6F8(Result_82D0BDC0 *out, const Obj_82D2A6F8 *self)
{
    fn_82D0BDC0(out, self->target, 0, 1.0f, 0.0f);
    return out;
}
