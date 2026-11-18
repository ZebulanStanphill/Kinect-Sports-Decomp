typedef struct Target_8305AC60 {
    char pad0[0x2c];
    float count; /* 0x2c */
    char pad30[4];
    float level; /* 0x34 */
    char pad38[0x142c - 0x38];
    char ramp[4]; /* 0x142c */
} Target_8305AC60;

typedef struct Obj_8305AC60 {
    unsigned int count;
    unsigned int unk4;
    Target_8305AC60 *target; /* 0x08 */
    float scale[2];          /* 0x0c */
} Obj_8305AC60;

typedef struct Params_8305AC60 {
    double db;         /* 0x00 */
    double level;      /* 0x08 */
    double time;       /* 0x10 */
    double value;      /* 0x18 */
    unsigned int kind; /* 0x20 */
} Params_8305AC60;

extern const double lbl_8207F700;
extern const double lbl_8217E370;
extern void fn_8305A5E8(Obj_8305AC60 *o, double db, double t);
extern void fn_8305B9A0(void *ramp, int ms, double from, double to);
extern int fn_8305B970(float *v, double s);
extern double fn_8305BE58(double x);
extern void fn_8305A6A0(Obj_8305AC60 *o, double value, unsigned int kind);
extern void fn_8305A7A8(Obj_8305AC60 *o, unsigned int kind, double value);
extern int fn_8305BB28(float *v, double s);
extern void fn_8305A9D0(Obj_8305AC60 *o);

void fn_8305AC60(Obj_8305AC60 **self, Params_8305AC60 p)
{
    Obj_8305AC60 *o;
    Target_8305AC60 *tg;
    double lv;
    int n;
    double t = p.level - lbl_8207F700;

    if (t < lbl_8217E370)
        t = lbl_8217E370;
    fn_8305A5E8(*self, p.db, t);
    fn_8305A5E8(*self, p.db, t);
    o = *self;
    fn_8305B9A0(o->target->ramp, 600, t, p.time);
    o = *self;
    lv = fn_8305BE58((double)fn_8305B970(o->scale, (double)o->count));
    tg = o->target;
    tg->level = (float)lv;
    fn_8305A6A0(*self, p.value, p.kind);
    fn_8305A7A8(*self, p.kind, p.value);
    o = *self;
    n = fn_8305BB28(o->scale, (double)o->count) + 1;
    tg = o->target;
    tg->count = (float)n;
    fn_8305A9D0(*self);
}
