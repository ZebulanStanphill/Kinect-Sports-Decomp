typedef struct { float x, y, z, w; } V4_827FE450;
typedef struct { char pad[0x30]; float x, y, z; } B_827FE450;
extern void fn_82800E88(void *, void **);
extern void fn_827F98C8(void *, unsigned short, void **);
extern void fn_827F9450(void *, unsigned short, B_827FE450 **);
extern void fn_827F94C8(void *, B_827FE450 *, V4_827FE450 *);

void fn_827FE450(void *a, int b, float *out)
{
    void *r;
    B_827FE450 *bone;
    void *q;
    V4_827FE450 v;
    fn_82800E88(a, &r);
    fn_827F98C8(r, b, &q);
    fn_827F9450(r, b, &bone);
    fn_827F94C8(q, bone, &v);
    out[0] = bone->x + v.x;
    out[1] = bone->y + v.y;
    out[2] = bone->z + v.z;
}
