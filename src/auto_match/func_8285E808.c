typedef struct Vec3_8285E808 {
    float x;
    float y;
    float z;
} Vec3_8285E808;

typedef struct State_8285E808 {
    int id;             /* 0x00 */
    int f4[3];          /* 0x04 */
    unsigned int state; /* 0x10 */
    Vec3_8285E808 v14;  /* 0x14 */
    Vec3_8285E808 v20;  /* 0x20 */
} State_8285E808;

typedef struct Target_8285E808 {
    char pad[0x30];
    Vec3_8285E808 position; /* 0x30 */
} Target_8285E808;

extern unsigned char lbl_83211340[];

extern State_8285E808 *fn_8285A830(int a, int b);
extern char *fn_8285A808(int a, int b);
extern void fn_82861370(void *p6, Target_8285E808 *target, float *context);
extern void fn_828105C8(Vec3_8285E808 *v, float x, float y, float z);
extern void fn_82810360(Vec3_8285E808 *dst, Vec3_8285E808 *src);
extern void fn_8285AAF0(int a, int b, Vec3_8285E808 *c);
extern int fn_82860750(int a, int b, Vec3_8285E808 *c);
extern void fn_828602F8(int a, int b, Vec3_8285E808 *p, Vec3_8285E808 *q);
extern void fn_8285E398(int a, int b, int id, void *p0, void *p1, void *p2, void *p3, void *p4, void *p5);

void fn_8285E808(int a, int b, void *p3, Target_8285E808 *target, void *p5, void *p6, void *p7)
{
    State_8285E808 *s;
    char *ctx;
    Vec3_8285E808 position;
    float context[40];

    s = fn_8285A830(a, b);
    ctx = fn_8285A808(a, b);
    lbl_83211340[0x264] = 0;
    if (*(unsigned int *)(ctx + 0x94) == 0) {
        fn_82861370(p6, target, context);
    }
    fn_828105C8(&position, target->position.x, target->position.y, target->position.z);
    switch (s->state) {
    case 0:
        fn_82810360(&position, &s->v14);
        fn_8285AAF0(a, b, &position);
        if (fn_82860750(a, b, &s->v14) == 0) {
            return;
        }
        s->state = 1;
        fn_8285E398(a, b, s->id, p3, target, p5, p7, p6, context);
        break;
    case 1:
        fn_82810360(&s->v14, &s->v20);
        fn_82810360(&position, &s->v14);
        fn_828602F8(a, b, &s->v20, &s->v14);
        fn_8285E398(a, b, s->id, p3, target, p5, p7, p6, context);
        break;
    }
}
