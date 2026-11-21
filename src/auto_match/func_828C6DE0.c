extern void fn_8265CA20(void *p);
extern void fn_828B55B0(void *p);
extern void fn_828BDE70(void *p);
extern __declspec(noreturn) void fn_82F622E0(const char *message);
extern unsigned int lbl_82025B20;
extern unsigned int lbl_82025B28;

typedef struct String_828C6DE0 {
    union {
        char buffer[16]; /* 0x00 */
        char *pointer;   /* 0x00 */
    } text;

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int allocator;         /* 0x18 */
} String_828C6DE0;

typedef struct VObj_828C6DE0 {
    void (**vt)(struct VObj_828C6DE0 *, int);
} VObj_828C6DE0;

typedef struct Vector_828C6DE0 {
    VObj_828C6DE0 **first; /* 0x00 */
    VObj_828C6DE0 **last;  /* 0x04 */
    VObj_828C6DE0 **end;   /* 0x08 */
    int pad0C;
} Vector_828C6DE0;

typedef struct Var_828C6DE0 {
    unsigned int *vt; /* 0x00 */
    char pad04[0x4c];
    unsigned int *vt50; /* 0x50 */
    char pad54[0x18];
    void *manager; /* 0x6C */
    char pad70[0x10];
    char id[8];            /* 0x80 */
    Vector_828C6DE0 items; /* 0x88 */
    unsigned char synced;  /* 0x98 */
    char pad99[3];
    int ownerId;           /* 0x9C */
    unsigned char channel; /* 0xA0 */
} Var_828C6DE0;

extern void *fn_8288F1E8(void *manager, void *id);
extern unsigned char fn_8288B460(void *object, unsigned char channel, int flag);
extern void fn_8288F180(void *object, int ownerId, String_828C6DE0 *message);
extern void fn_82230360(String_828C6DE0 *self, const char *text, unsigned int length);

static __forceinline VObj_828C6DE0 **At(Vector_828C6DE0 *v, unsigned int index)
{
    if ((unsigned int)(v->last - v->first) <= index) {
        fn_82F622E0("invalid vector<T> subscript");
    }
    return &v->first[index];
}

void fn_828C6DE0(Var_828C6DE0 *m)
{
    Vector_828C6DE0 *items;
    unsigned int count;
    unsigned int i;
    void *object;

    m->vt = &lbl_82025B28;
    m->vt50 = &lbl_82025B20;
    items = &m->items;
    count = items->last - items->first;
    for (i = 0; i < count; i++) {
        VObj_828C6DE0 *o = *At(items, i);

        if (o != 0) {
            (*(void (*)(VObj_828C6DE0 *, int)) * (unsigned int *)o->vt)(o, 1);
        }
    }
    object = fn_8288F1E8(m->manager, m->id);
    if (m->synced != 0 && object != 0 && fn_8288B460(object, m->channel, 1) != 0) {
        String_828C6DE0 message;

        message.size = 0;
        message.text.buffer[0] = 0;
        message.capacity = 15;
        fn_82230360(&message, "owner var state sync msg destruct", 0x21);
        fn_8288F180(object, m->ownerId, &message);
        if (message.capacity >= 16) {
            fn_8265CA20(message.text.pointer);
        }
    }
    if (items->first != 0) {
        fn_8265CA20(items->first);
    }
    items->first = 0;
    items->last = 0;
    items->end = 0;
    fn_828B55B0(m->id);
    fn_828BDE70(m);
}
