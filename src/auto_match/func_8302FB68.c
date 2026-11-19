typedef struct Obj_8302FB68 Obj_8302FB68;

typedef struct Header_8302FB68 {
    __int64 a; /* 0x00 */
    __int64 b; /* 0x08 */
    __int64 c; /* 0x10 */
} Header_8302FB68;

typedef struct Payload_8302FB68 {
    unsigned char bytes[0x48];
} Payload_8302FB68;

typedef struct Params_8302FB68 {
    Header_8302FB68 header;   /* 0x00 */
    int size;                 /* 0x18 */
    Payload_8302FB68 payload; /* 0x1c */
    int flags;                /* 0x64 */
} Params_8302FB68;

typedef struct Binding_8302FB68 {
    int value; /* 0x00 */
    int kind;  /* 0x04 */
} Binding_8302FB68;

typedef struct Desc_8302FB68 {
    int zero;                  /* 0x00 */
    Obj_8302FB68 *target;      /* 0x04 */
    int size;                  /* 0x08 */
    Binding_8302FB68 *binding; /* 0x0c */
    Header_8302FB68 header;    /* 0x10 */
    Payload_8302FB68 payload;  /* 0x28 */
    int flags;                 /* 0x70 */
    int reserved0;             /* 0x74 */
    int reserved1;             /* 0x78 */
    int reserved2;             /* 0x7c */
    unsigned char done;        /* 0x80 */
    unsigned char valid;       /* 0x81 */
} Desc_8302FB68;

typedef struct {
    void *s0;
    void *s1;
    void (*Release)(Obj_8302FB68 *self);
    void *pad[3];
    int (*Submit)(Obj_8302FB68 *self, Desc_8302FB68 *desc);
} Vt_8302FB68;

struct Obj_8302FB68 {
    Vt_8302FB68 *vt;
};

typedef struct Entry_8302FB68 {
    int key;   /* 0x00 */
    int value; /* 0x04 */
} Entry_8302FB68;

typedef struct Node_8302FB68 {
    struct Node_8302FB68 *next; /* 0x00 */
    unsigned int key;           /* 0x04 */
    Entry_8302FB68 entry;       /* 0x08 */
} Node_8302FB68;

typedef struct Ctx_8302FB68 {
    char pad0[0xe4];
    Node_8302FB68 *bindings; /* 0xe4 */
} Ctx_8302FB68;

extern Obj_8302FB68 *fn_82FAB9C0(int id, unsigned int key);
extern int lbl_832642E0;

static __forceinline Entry_8302FB68 *Find(Node_8302FB68 *node, unsigned int key)
{
    for (; node != 0; node = node->next) {
        if (node->key == key) {
            return &node->entry;
        }
    }
    return 0;
}

int fn_8302FB68(Ctx_8302FB68 *ctx, unsigned int key, Params_8302FB68 *params)
{
    Obj_8302FB68 *p;
    Entry_8302FB68 *entry;
    Binding_8302FB68 binding;
    Desc_8302FB68 d;
    int value;
    int hr;

    p = fn_82FAB9C0(lbl_832642E0 + 4, key);
    if (p != 0) {
        binding.kind = 4;
        entry = Find(ctx->bindings, key);
        if (entry != 0) {
            value = entry->value;
        } else {
            value = 0;
        }
        binding.value = value;
        d.done = 0;
        d.payload = params->payload;
        d.zero = 0;
        d.target = p;
        d.size = params->size;
        d.valid = 1;
        d.binding = &binding;
        d.header = params->header;
        d.reserved0 = 0;
        d.flags = params->flags;
        d.reserved1 = 0;
        d.reserved2 = 0;
        hr = p->vt->Submit(p, &d);
        p->vt->Release(p);
        return hr;
    }
    return 2;
}
