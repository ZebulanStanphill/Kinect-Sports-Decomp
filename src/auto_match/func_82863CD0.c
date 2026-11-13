typedef struct Vec_82863CD0 { float x, y, z, w; } Vec_82863CD0;

typedef struct Params_82863CD0 {
    int f0;
    int id;             /* 0x04 */
    float scale;        /* 0x08 */
    Vec_82863CD0 origin; /* 0x0c */
} Params_82863CD0;

typedef struct Self_82863CD0 {
    int f0;
    int handle;             /* 0x04 */
    unsigned short index;   /* 0x08 */
} Self_82863CD0;

extern Params_82863CD0 lbl_832116B4;

extern void fn_82862238(int handle, unsigned short index, int id, float scale, int flags, Vec_82863CD0 *out);
extern void fn_82810328(const Vec_82863CD0 *a, const Vec_82863CD0 *b, Vec_82863CD0 *out);
extern float fn_82810280(const Vec_82863CD0 *a, const Vec_82863CD0 *b);
extern void fn_82810530(Vec_82863CD0 *out, const Vec_82863CD0 *in);

void fn_82863CD0(Self_82863CD0 *self, Vec_82863CD0 *dir, unsigned char *out)
{
    Params_82863CD0 *g = &lbl_832116B4;
    Vec_82863CD0 pos;
    Vec_82863CD0 delta;
    fn_82862238(self->handle, self->index, g->id, g->scale, 0, &pos);
    fn_82810328(&pos, &g->origin, &delta);
    if (fn_82810280(dir, &delta) > 0.0f) {
        fn_82810530(dir, dir);
        *out = 1;
    } else {
        *out = 0;
    }
}
