long _InterlockedDecrement(long volatile *);

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Rep_824FD278 Rep_824FD278;

typedef struct RepVt_824FD278 {
    void (*destroy)(Rep_824FD278 *);
    void (*deleteThis)(Rep_824FD278 *);
} RepVt_824FD278;

struct Rep_824FD278 {
    RepVt_824FD278 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_824FD278 {
    void *px;
    Rep_824FD278 *rep;
} Ptr_824FD278;

typedef struct Res_824FD278 {
    int sub;
} Res_824FD278;

typedef struct Node_824FD278 {
    char pad0[0x10];
    float weight; /* 0x10 */
} Node_824FD278;

typedef struct Desc_824FD278 {
    char pad0[0x5bc];
    int enabled;       /* 0x5bc */
    int type;          /* 0x5c0 */
    int unk5C4;        /* 0x5c4 */
    int unk5C8;        /* 0x5c8 */
    int unk5CC;        /* 0x5cc */
    unsigned int name; /* 0x5d0 */
} Desc_824FD278;

typedef struct Owner_824FD278 {
    char pad0[0xb60];
    Node_824FD278 *node;  /* 0xb60 */
    int type;             /* 0xb64 */
    int kind;             /* 0xb68 */
    char padB6C[0x14];    /* 0xb6c */
    int unkB80;           /* 0xb80 */
    char padB84[0x4];     /* 0xb84 */
    Res_824FD278 *result; /* 0xb88 */
    int unkB8C;           /* 0xb8c */
    int unkB90;           /* 0xb90 */
    int unkB94;           /* 0xb94 */
    int unkB98;           /* 0xb98 */
    char padB9C[0x4];     /* 0xb9c */
    __vector4 offset;     /* 0xba0 */
} Owner_824FD278;

extern const float lbl_821954B0[];

extern int fn_824FDBD8(int type);
extern void *fn_8265C9E0(unsigned int size);
extern Node_824FD278 *fn_824A2308(void *memory, int kind);
extern void fn_82F51EF0(Node_824FD278 *node, int enabled);
extern Ptr_824FD278 *fn_82F51468(Ptr_824FD278 *out, Node_824FD278 *node);
extern void fn_824D2AE8(Ptr_824FD278 *out, Ptr_824FD278 *src);
extern Res_824FD278 *fn_82F53418(void *p, unsigned int *name, int create);
extern void fn_822315A0(Rep_824FD278 *rep);

static __forceinline void Decwref_824FD278(Rep_824FD278 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

int fn_824FD278(Owner_824FD278 *self, Desc_824FD278 *desc)
{
    void *memory;
    Node_824FD278 *node;
    Ptr_824FD278 sp;
    Ptr_824FD278 wp;
    Res_824FD278 *r;

    self->type = desc->type;
    self->kind = fn_824FDBD8(desc->type);
    self->unkB8C = desc->unk5C4;
    self->unkB90 = desc->unk5C8;
    memory = fn_8265C9E0(0x1c);
    if (memory != 0) {
        node = fn_824A2308(memory, self->kind);
    } else {
        node = 0;
    }
    self->node = node;
    fn_82F51EF0(node, desc->enabled != 0);
    node->weight = lbl_821954B0[0xd8];
    self->unkB94 = 0;
    self->unkB98 = desc->unk5CC;
    self->offset = __VMXGetReg(77);
    self->unkB80 = 0;
    if (desc->name != 0) {
        fn_824D2AE8(&sp, fn_82F51468(&wp, node));
        if (wp.rep != 0)
            Decwref_824FD278(wp.rep);
        r = fn_82F53418(sp.px, &desc->name, 1);
        {
            Res_824FD278 *p = 0;
            if (r != 0)
                p = r;
            self->result = p;
        }
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
    }
    return 1;
}
