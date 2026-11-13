typedef struct Vec4_827EEC28 {
    float v[4];
} Vec4_827EEC28;

extern void fn_828106A0(Vec4_827EEC28 *out);
extern void fn_82810328(void *a, void *b, Vec4_827EEC28 *out);
extern void fn_8281CAE8(void *m, Vec4_827EEC28 *in, Vec4_827EEC28 *out);
extern void fn_82810530(void *q, Vec4_827EEC28 *out);
extern void fn_827EE7C8(Vec4_827EEC28 *a, float f1, Vec4_827EEC28 *b, Vec4_827EEC28 *q, void *rot,
                        Vec4_827EEC28 *id, float f2, int flag);

void fn_827EEC28(void *p1, float f1, void *p3, void *p4, void *rot, void *m, void *p7, float f2, int flag)
{
    Vec4_827EEC28 b;
    Vec4_827EEC28 a;
    Vec4_827EEC28 id;
    Vec4_827EEC28 q;
    Vec4_827EEC28 tb;
    Vec4_827EEC28 ta;

    fn_828106A0(&id);
    fn_82810328(p3, p7, &a);
    fn_82810328(p1, p4, &b);
    fn_8281CAE8(m, &b, &ta);
    fn_8281CAE8(m, &a, &tb);
    fn_82810530(rot, &q);
    fn_827EE7C8(&ta, f1, &tb, &q, rot, &id, f2, flag);
}
