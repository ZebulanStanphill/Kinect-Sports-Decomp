typedef struct {
    float v[8];
} Value_82A8B7F8;
typedef struct Obj_82A8B7F8 Obj_82A8B7F8;
typedef struct {
    void *slots[2];
    long (*Validate)(Obj_82A8B7F8 *self);
} ObjVt_82A8B7F8;
struct Obj_82A8B7F8 {
    ObjVt_82A8B7F8 *vt;
    int pad[8];
    int state;
};
extern Value_82A8B7F8 fn_82A8CFD0(int *state, Value_82A8B7F8 *out, float t);

long fn_82A8B7F8(Obj_82A8B7F8 *o, float t, Value_82A8B7F8 *out)
{
    long hr = o->vt->Validate(o);
    if (hr >= 0) {
        *out = fn_82A8CFD0(&o->state, out, t);
    }
    return hr;
}
