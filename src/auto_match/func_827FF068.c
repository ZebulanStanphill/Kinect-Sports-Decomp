typedef struct { char pad[0x1c]; unsigned char f1c, f1d, f1e, f1f, f20; } Cfg_827FF068;
typedef struct { int pad[0x30 / 4]; Cfg_827FF068 *cfg; } Inner_827FF068;
typedef struct { Inner_827FF068 *in; } Obj_827FF068;

float fn_827FF068(Obj_827FF068 *o, float *vals)
{
    Cfg_827FF068 *c = ((Inner_827FF068 *)o->in)->cfg;
    float *p = vals;

    if (c->f1c != 0) p = p + 1;
    if (c->f1d != 0) p = p + 1;
    if (c->f1e != 0) p = p + 1;
    if (c->f1f != 0) p = p + 1;
    if (c->f20 != 0) p = p + 1;
    return *p;
}
