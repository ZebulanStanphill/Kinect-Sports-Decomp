typedef struct Shape_82D55D78 {
    char pad0[0xc];
    int type;
} Shape_82D55D78;

typedef struct CdBody_82D55D78 {
    Shape_82D55D78 *shape;
} CdBody_82D55D78;

typedef struct Input_82D55D78 Input_82D55D78;
typedef void *(*CreateFunc_82D55D78)(CdBody_82D55D78 *a, CdBody_82D55D78 *b, Input_82D55D78 *input, void *mgr);

typedef struct AgentFuncs_82D55D78 {
    CreateFunc_82D55D78 createFunc;
    void *other[4];
} AgentFuncs_82D55D78;

typedef struct Dispatcher_82D55D78 {
    char pad0[0x1a0];
    unsigned char agent2Types[32][32];
    unsigned char agent2TypesPred[32][32];
    AgentFuncs_82D55D78 agent2Func[1];
} Dispatcher_82D55D78;

struct Input_82D55D78 {
    Dispatcher_82D55D78 *dispatcher;
    int pad4[4];
    int createPredictiveAgents;
};

void *fn_82D55D78(CdBody_82D55D78 *a, CdBody_82D55D78 *b, Input_82D55D78 *input, void *mgr)
{
    int typeA = a->shape->type;
    int typeB;
    Dispatcher_82D55D78 *d = input->dispatcher;
    unsigned char *table;

    typeB = b->shape->type;
    if (input->createPredictiveAgents != 0) {
        table = d->agent2TypesPred[0];
    } else {
        table = d->agent2Types[0];
    }
    return d->agent2Func[table[typeA * 32 + typeB]].createFunc(a, b, input, mgr);
}
