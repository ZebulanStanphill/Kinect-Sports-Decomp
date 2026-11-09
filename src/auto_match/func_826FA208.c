typedef struct Rect_826FA208 Rect_826FA208;
struct Rect_826FA208 { float x, y, w, h; };

typedef struct Mat23_826FA208 Mat23_826FA208;
struct Mat23_826FA208 {
    float m[6];
};

typedef struct Obj_826FA208 Obj_826FA208;
struct Obj_826FA208 {
    char pad[0xe8];
    Mat23_826FA208 xform;
};

void *fn_826F6FA8(Obj_826FA208 *o, int idx);
void fn_8268CC00(Mat23_826FA208 *m);
void fn_8269A240(void *a, Mat23_826FA208 *m);
void fn_8268CEC0(Mat23_826FA208 *m, const Mat23_826FA208 *b);
void fn_8268D280(const Mat23_826FA208 *m, Rect_826FA208 *out, const Rect_826FA208 *in);

Rect_826FA208 *fn_826FA208(Rect_826FA208 *out, Obj_826FA208 *o, const float *p, const Mat23_826FA208 *xf)
{
    void *node;
    Mat23_826FA208 tmp;
    Mat23_826FA208 m;
    Rect_826FA208 r;

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
    r.x = p[0] * 20.0f;
    r.y = p[1] * 20.0f;
    r.w = p[2] * 20.0f;
    r.h = p[3] * 20.0f;
    out->x = 0.0f;
    out->y = 0.0f;
    out->w = 0.0f;
    out->h = 0.0f;
    fn_8268D280(&m, out, &r);
    return out;
}
