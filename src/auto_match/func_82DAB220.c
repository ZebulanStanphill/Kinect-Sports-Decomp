typedef struct Body_82DAB220 {
    char pad0[0x204];
    unsigned short count; /* 0x204 */
} Body_82DAB220;

typedef struct Output_82DAB220 {
    char pad0[0xc];
    unsigned char hit;   /* 0x0c */
    unsigned char m0d;   /* 0x0d */
    unsigned char m0e;   /* 0x0e */
    unsigned char valid; /* 0x0f */
} Output_82DAB220;

typedef struct Input_82DAB220 {
    int pad0;
    int key; /* 0x04 */
} Input_82DAB220;

typedef struct Caster_82DAB220 Caster_82DAB220;

struct Caster_82DAB220 {
    struct {
        char pad0[0x20];
        void (*onHit)(Caster_82DAB220 *self, int key, Output_82DAB220 *out); /* 0x20 */
    } *vt;

    char pad4[8];
    void *world;          /* 0x0c */
    Body_82DAB220 *bodyA; /* 0x10 */
    Body_82DAB220 *bodyB; /* 0x14 */
};

typedef struct Query_82DAB220 {
    int from;  /* 0x00 */
    int to;    /* 0x04 */
    int flags; /* 0x08 */
    int pad0c;
    int filterA;             /* 0x10 */
    int filterB;             /* 0x14 */
    Output_82DAB220 *out;    /* 0x18 */
    float fraction;          /* 0x1c */
    int result;              /* 0x20 */
    Caster_82DAB220 *caster; /* 0x24 */
    int collector;           /* 0x28 */
    Input_82DAB220 *input;   /* 0x2c */
    float tolerance;         /* 0x30 */
} Query_82DAB220;

extern void fn_82DAEFD0(void *world, Query_82DAB220 *query);
extern void fn_82DAD288(Body_82DAB220 *body, Query_82DAB220 *query);

int fn_82DAB220(Caster_82DAB220 *caster, int from, int to, int collector, Input_82DAB220 *input,
                float tolerance, int filterA, int filterB, float *fraction, Output_82DAB220 *out)
{
    Query_82DAB220 query;
    Body_82DAB220 *bodyB;
    Body_82DAB220 *bodyA;

    out->hit = 0;
    out->m0e = 0;
    out->m0d = 0;
    out->valid = 1;
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
    bodyB = caster->bodyB;
    bodyA = caster->bodyA;
    fn_82DAEFD0(caster->world, &query);
    if (bodyA->count != 0) {
        fn_82DAD288(bodyA, &query);
    }
    if (bodyB->count != 0) {
        fn_82DAD288(bodyB, &query);
    }
    if (query.result == 1) {
        caster->vt->onHit(caster, input->key, out);
    } else {
        *fraction = query.fraction;
    }
    return query.result;
}
