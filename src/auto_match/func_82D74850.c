typedef struct {
    int pad[3];
    int type;
} Shape_82D74850;
typedef struct {
    Shape_82D74850 *shape;
} Body_82D74850;
typedef void *(*CreateFunc_82D74850)(Body_82D74850 *a, Body_82D74850 *b, void *input, void *mgr);
typedef struct {
    CreateFunc_82D74850 create;
    void *funcs[3];
    unsigned char flipped;
    unsigned char predictive;
} AgentFuncs_82D74850;
typedef struct {
    char pad[0x1a0];
    unsigned char types[32][32];
    unsigned char typesPred[32][32];
    AgentFuncs_82D74850 funcs[32];
} Dispatcher_82D74850;
typedef struct {
    Dispatcher_82D74850 *dispatcher;
    int pad[4];
    int predictive;
} Input_82D74850;
typedef struct {
    Body_82D74850 *a;
    Body_82D74850 *b;
    int pad;
    Input_82D74850 *input;
    void *mgr;
} Args_82D74850;
typedef struct {
    unsigned char mode : 4;
    unsigned char flag : 1;
    unsigned char kind : 3;
    unsigned char pad1;
    unsigned char size;
} Header_82D74850;
typedef struct {
    void *agent;
    int pad[3];
    char next[1];
} Entry_82D74850;

static __forceinline void *GetNewAgent(Dispatcher_82D74850 *d, Body_82D74850 *a, Body_82D74850 *b, Input_82D74850 *input, void *mgr)
{
    int typeA = a->shape->type;
    int typeB = b->shape->type;
    unsigned char (*table)[32] = input->predictive ? d->typesPred : d->types;
    int agentType = table[typeA][typeB];
    CreateFunc_82D74850 f = d->funcs[agentType].create;
    return f(a, b, input, mgr);
}

void *fn_82D74850(Args_82D74850 *args, Header_82D74850 *header, Entry_82D74850 *entry)
{
    header->mode = 0;
    header->kind = 6;
    entry->agent = GetNewAgent(args->input->dispatcher, args->a, args->b, args->input, args->mgr);
    header->size = 0xff;
    return entry->next;
}
