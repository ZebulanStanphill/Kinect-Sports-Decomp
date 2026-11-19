typedef struct Obj_822FF900 {
    char pad0[0x420];
    char sub[0x100]; /* 0x420 */
    int m520;        /* 0x520 */
    int pad524;      /* 0x524 */
    int m528;        /* 0x528 */
    void *res;       /* 0x52c */
    char pad530[0x10];
    float m540; /* 0x540 */
    float m544; /* 0x544 */
    float m548; /* 0x548 */
    float m54c; /* 0x54c */
    int m550;   /* 0x550 */
    int m554;   /* 0x554 */
    float m558; /* 0x558 */
    float m55c; /* 0x55c */
    float m560; /* 0x560 */
    int m564;   /* 0x564 */
    int m568;   /* 0x568 */
    int m56c;   /* 0x56c */
    int pad570; /* 0x570 */
    int width;  /* 0x574 */
    int height; /* 0x578 */
} Obj_822FF900;

extern void fn_82300D30(void *sub);
extern void *fn_8251F720(void *name, int flags);
extern void fn_82300E58(void *sub, void *res);
extern void fn_82300178(Obj_822FF900 *self);

Obj_822FF900 *fn_822FF900(Obj_822FF900 *self, int arg, void *name)
{
    fn_82300D30(self->sub);
    self->m520 = 0;
    {
        int *pArg = &self->m528;
        *pArg = arg;
    }
    self->res = 0;
    self->m540 = 0.0f;
    self->m564 = 0;
    self->m544 = 0.0f;
    self->m568 = -1;
    self->m548 = 0.0f;
    self->m56c = 0;
    self->m54c = 0.0f;
    self->width = 0x7fe;
    self->m558 = 0.0f;
    self->height = 0x7fe;
    self->res = fn_8251F720(name, 0);
    fn_82300E58(self->sub, self->res);
    fn_82300178(self);
    self->m560 = 0.0f;
    self->m550 = 0;
    self->m55c = 0.0f;
    self->m554 = 0;
    self->m564 = 0;
    self->m568 = -1;
    self->m56c = 0;
    self->width = 0x1e2;
    self->height = 0x1e2;
    return self;
}
