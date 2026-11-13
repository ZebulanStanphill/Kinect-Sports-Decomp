typedef struct Obj_82772C40 Obj_82772C40;
typedef struct ObjVt_82772C40 {
    void *f[0x30 / 4];
    void (*Get)(Obj_82772C40 *self, float *out);
} ObjVt_82772C40;
struct Obj_82772C40 { ObjVt_82772C40 *vt; };

float *fn_82772C40(float *out, Obj_82772C40 *o)
{
    ObjVt_82772C40 *vt = o->vt;
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;
    out[3] = 0.0f;
    vt->Get(o, out);
    return out;
}
