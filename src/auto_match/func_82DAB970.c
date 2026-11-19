typedef struct Body_82DAB970 {
    char pad0[0x204];
    unsigned short count; /* 0x204 */
} Body_82DAB970;

typedef struct Input_82DAB970 {
    int pad0;
    int key; /* 0x04 */
} Input_82DAB970;

typedef struct Caster_82DAB970 Caster_82DAB970;

struct Caster_82DAB970 {
    struct {
        char pad0[0x20];
        void (*onHit)(Caster_82DAB970 *self, int key, void *out); /* 0x20 */
    } *vt;

    char pad4[8];
    void *world; /* 0x0c */
    char pad10[0x48];
    unsigned int bodyA; /* 0x58 */
    unsigned int bodyB; /* 0x5c */
};

typedef struct Query_82DAB970 {
    int from;  /* 0x00 */
    int to;    /* 0x04 */
    int flags; /* 0x08 */
    int pad0c;
    int filterA;             /* 0x10 */
    int filterB;             /* 0x14 */
    void *out;               /* 0x18 */
    float fraction;          /* 0x1c */
    int result;              /* 0x20 */
    Caster_82DAB970 *caster; /* 0x24 */
    int collector;           /* 0x28 */
    Input_82DAB970 *input;   /* 0x2c */
    float tolerance;         /* 0x30 */
} Query_82DAB970;

extern Body_82DAB970 *fn_82DAC508(Caster_82DAB970 *caster, int from, int to, int mode, void *out);
extern void fn_82DAEFD0(void *world, Query_82DAB970 *query);
extern void fn_82DAD288(Body_82DAB970 *body, Query_82DAB970 *query);

int fn_82DAB970(Caster_82DAB970 *caster, int from, int to, int collector, Input_82DAB970 *input,
                float tolerance, int filterA, int filterB, float *fraction, void *out)
{
    Query_82DAB970 query;
    Body_82DAB970 *body;
    Body_82DAB970 *other;

    body = fn_82DAC508(caster, from, to, 7, out);
    query.from = from;
    query.to = to;
    query.flags = 0;
    query.filterA = filterA;
    query.filterB = filterB;
    query.out = out;
    query.fraction = *fraction;
    query.caster = caster;
    query.collector = collector;
    query.input = input;
    query.result = 0;
    query.tolerance = tolerance;
    other = (Body_82DAB970 *)(caster->bodyB ^ caster->bodyA ^ (unsigned int)body);
    fn_82DAEFD0(caster->world, &query);
    if (body->count != 0) {
        fn_82DAD288(body, &query);
    }
    if (other->count != 0) {
        fn_82DAD288(other, &query);
    }
    if (query.result == 1) {
        caster->vt->onHit(caster, input->key, out);
    } else {
        *fraction = query.fraction;
    }
    return query.result;
}
