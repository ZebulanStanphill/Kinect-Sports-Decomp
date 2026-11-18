typedef struct Target_83058340 {
    char pad0[0x1c];
    float count; /* 0x1c */
    char pad20[4];
    float level; /* 0x24 */
    char pad28[0x1c];
    float gainA; /* 0x44 */
    char pad48[0xc];
    float gainB; /* 0x54 */
    char pad58[0xf34 - 0x58];
    char ramp[4]; /* 0xf34 */
} Target_83058340;

typedef struct Obj_83058340 {
    unsigned int count;
    unsigned int unk4;
    Target_83058340 *target;
    float scale[2]; /* 0x0c */
} Obj_83058340;

typedef struct Params_83058340 {
    double db;
    double level;
    double time;
    double value;
    unsigned int kind;
} Params_83058340;

extern const double lbl_8207F700;
extern const double lbl_8217E370;
extern double fn_82F655D8(double x, double y);
extern void fn_8305B9A0(void *ramp, int ms, double from, double to);
extern int fn_8305B970(float *v, double s);
extern double fn_8305BE58(double x);
extern void fn_83057DD0(Obj_83058340 *o, double value, unsigned int kind);
extern void fn_83057ED8(Obj_83058340 *o, unsigned int kind, double x);
extern int fn_8305BB28(float *v, double s);
extern void fn_83058100(Obj_83058340 *o);

static __forceinline void SetGainA(Obj_83058340 *self, double db, double t)
{
    if (t < 0.0)
        db = db - 0.01;
    {
        float gain = (float)fn_82F655D8(10.0, db * 0.05);
        Target_83058340 *target = self->target;
        target->gainB = gain;
        target->gainA = gain;
    }
}

static __forceinline void SetGainB(Obj_83058340 *self, double t, double unused, double db)
{
    double v = db;
    double g;
    Target_83058340 *target;

    if (t < 0.0)
        v = v - 0.01;
    g = fn_82F655D8(10.0, v * 0.05);
    target = self->target;
    target->gainB = (float)g;
    target->gainA = (float)g;
}

void fn_83058340(Obj_83058340 **self, Params_83058340 p)
{
    Obj_83058340 *o;
    Target_83058340 *tg;
    double lv;
    int n;
    double t = p.level - lbl_8207F700;

    if (t < lbl_8217E370)
        t = lbl_8217E370;
    SetGainA(*self, p.db, t);
    SetGainB(*self, t, 0.0, p.db);
    o = *self;
    fn_8305B9A0(o->target->ramp, 600, t, p.time);
    o = *self;
    lv = fn_8305BE58((double)fn_8305B970(o->scale, (double)o->count));
    tg = o->target;
    tg->level = (float)lv;
    fn_83057DD0(*self, p.value, p.kind);
    fn_83057ED8(*self, p.kind, p.value);
    o = *self;
    n = fn_8305BB28(o->scale, (double)o->count) + 1;
    tg = o->target;
    tg->count = (float)n;
    fn_83058100(*self);
}
