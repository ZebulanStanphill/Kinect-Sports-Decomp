typedef struct Target_83059570 {
    char pad0[0x14];
    float count; /* 0x14 */
    char pad18[4];
    float level; /* 0x1c */
    char pad20[0x1c];
    float gain; /* 0x3c */
    char pad40[0xcc4 - 0x40];
    char ramp[4]; /* 0xcc4 */
} Target_83059570;

typedef struct Obj_83059570 {
    unsigned int count;
    unsigned int unk4;
    Target_83059570 *target; /* 0x08 */
    float scale[2];          /* 0x0c */
} Obj_83059570;

typedef struct Params_83059570 {
    double db;         /* 0x00 */
    double level;      /* 0x08 */
    double time;       /* 0x10 */
    double value;      /* 0x18 */
    unsigned int kind; /* 0x20 */
} Params_83059570;

extern const double lbl_8207F700;
extern const double lbl_8217E370;
extern double fn_82F655D8(double x, double y);
extern void fn_8305B9A0(void *ramp, int ms, double from, double to);
extern int fn_8305B970(float *v, double s);
extern double fn_8305BE58(double x);
extern void fn_83059018(Obj_83059570 *o, double value, unsigned int kind);
extern void fn_83059120(Obj_83059570 *o, unsigned int kind, double value);
extern int fn_8305BB28(float *v, double s);
extern void fn_83059348(Obj_83059570 *o);

static __forceinline void SetGainA(Obj_83059570 *self, double db, double t)
{
    if (t < 0.0)
        db = db - 0.01;
    {
        float gain = (float)fn_82F655D8(10.0, db * 0.05);
        Target_83059570 *target = self->target;
        target->gain = gain;
    }
}

static __forceinline void SetGainB(Obj_83059570 *self, double t, double db)
{
    double v = db;
    double g;
    Target_83059570 *target;

    if (t < 0.0)
        v = v - 0.01;
    g = fn_82F655D8(10.0, v * 0.05);
    target = self->target;
    target->gain = (float)g;
}

void fn_83059570(Obj_83059570 **self, Params_83059570 *p)
{
    Obj_83059570 *o;
    Target_83059570 *tg;
    double lv;
    int n;
    double t = p->level - lbl_8207F700;

    if (t < lbl_8217E370)
        t = lbl_8217E370;
    SetGainA(*self, p->db, t);
    SetGainB(*self, t, p->db);
    o = *self;
    fn_8305B9A0(o->target->ramp, 600, t, p->time);
    o = *self;
    lv = fn_8305BE58((double)fn_8305B970(o->scale, (double)o->count));
    tg = o->target;
    tg->level = (float)lv;
    fn_83059018(*self, p->value, p->kind);
    fn_83059120(*self, p->kind, p->value);
    o = *self;
    n = fn_8305BB28(o->scale, (double)o->count) + 1;
    tg = o->target;
    tg->count = (float)n;
    fn_83059348(*self);
}
