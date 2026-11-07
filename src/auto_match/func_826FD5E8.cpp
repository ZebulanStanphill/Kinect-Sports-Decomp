struct Vec2 { float x, y; };

struct Mat23 {
    float m[6];
    void TransformPoint(Vec2 &out, const Vec2 &in) const;
};

struct Obj_826FD5E8 {
    char pad[0xe8];
    Mat23 xform;
};

extern "C" void *fn_826F6FA8(Obj_826FD5E8 *o, int idx);
extern "C" void fn_8268CC00(Mat23 *m);
extern "C" void fn_8269A240(void *a, Mat23 *m);
extern "C" void fn_8268CEC0(Mat23 *m, const Mat23 *b);

extern "C" Vec2 *fn_826FD5E8(Vec2 *out, Obj_826FD5E8 *o, const float *p, const Mat23 *xf)
{
    void *node;
    Mat23 tmp;
    Mat23 m;
    Vec2 v;

    node = fn_826F6FA8(o, 0);
    fn_8268CC00(&tmp);
    fn_8269A240(node, &tmp);
    m.m[0] = o->xform.m[0];
    m.m[1] = o->xform.m[1];
    m.m[2] = o->xform.m[2];
    m.m[3] = o->xform.m[3];
    m.m[4] = o->xform.m[4];
    m.m[5] = o->xform.m[5];
    fn_8268CEC0(&m, xf);
    fn_8268CEC0(&m, &tmp);
    v.x = p[0] * 20.0f;
    v.y = p[1] * 20.0f;
    m.TransformPoint(*out, v);
    return out;
}
