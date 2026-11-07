typedef struct Vec3_8285E4A8 {
    float x;
    float y;
    float z;
} Vec3_8285E4A8;

typedef struct State_8285E4A8 {
    int id;                 /* 0x00 */
    int f4[3];              /* 0x04 */
    int state;              /* 0x10 */
    Vec3_8285E4A8 v14;      /* 0x14 */
    Vec3_8285E4A8 v20;      /* 0x20 */
} State_8285E4A8;

extern unsigned char lbl_83211340[];

extern State_8285E4A8 *fn_8285A830(void);
extern char *fn_8285A808(int a, int b);
extern void fn_82810360(Vec3_8285E4A8 *dst, Vec3_8285E4A8 *src);
extern void fn_8285AAF0(int a, int b, Vec3_8285E4A8 *c);
extern int fn_82860750(int a, int b, Vec3_8285E4A8 *c);
extern void fn_828602F8(int a, int b, Vec3_8285E4A8 *p, Vec3_8285E4A8 *q);
extern void fn_8280AD30(char *ctx, Vec3_8285E4A8 *d, Vec3_8285E4A8 *tmp);
extern void fn_8285E178(int a, int b, int *p, float f1, float f2, Vec3_8285E4A8 *tmp);
extern void fn_8285E398(int a, int b, int id, void *p0, void *p1, void *p2,
                        void *p3, void *p4, void *p5);

void fn_8285E4A8(int a, int b, Vec3_8285E4A8 *c, float f1, float f2, Vec3_8285E4A8 *d)
{
    State_8285E4A8 *s;
    char *ctx;
    unsigned char ok;
    Vec3_8285E4A8 tmp;

    lbl_83211340[0x265] = 0;
    lbl_83211340[0x266] = 1;
    lbl_83211340[0x264] = 0;
    ok = 0;
    tmp = *d;
    s = fn_8285A830();
    ctx = fn_8285A808(a, b);
    if (s->state == 0) {
        fn_82810360(c, &s->v14);
        fn_8285AAF0(a, b, c);
        ok = (unsigned char)fn_82860750(a, b, c);
        if (ok) {
            s->state = 1;
        }
    } else if (s->state == 1) {
        fn_82810360(&s->v14, &s->v20);
        fn_82810360(c, &s->v14);
        fn_8285AAF0(a, b, c);
        ok = 1;
        fn_828602F8(a, b, &s->v20, &s->v14);
        fn_8285AAF0(a, b, c);
    }
    if (ok) {
        if (*(void **)(ctx + 0x94) != 0) {
            fn_8280AD30(ctx + 0x10, d, &tmp);
        }
        fn_8285E178(a, b, s->f4, f1, f2, &tmp);
        fn_8285E398(a, b, s->id, lbl_83211340, lbl_83211340 + 0x40, lbl_83211340 + 0x80,
                    lbl_83211340 + 0x1f4, lbl_83211340 + 0x170, lbl_83211340 + 0xc8);
    }
}
