extern void fn_82230360(void *s, const char *text, unsigned int length);
extern void fn_8265CA20(void *p);
extern unsigned char fn_8288B460(void *object, int id, int flag);
extern void fn_8288F180(void *object, int id, void *message);
extern void *fn_8288F1E8(void *context, void *key);
extern void fn_828B55B0(void *p);
extern void fn_828BDE70(void *p);
extern __declspec(noreturn) void fn_82F622E0(const char *message);
extern unsigned int lbl_82025A98;
extern unsigned int lbl_82025AA0;

typedef struct VObj_828CBF18 {
    void (**vt)(struct VObj_828CBF18 *, int);
} VObj_828CBF18;

typedef struct Vector_828CBF18 {
    VObj_828CBF18 **first; /* 0x00 */
    VObj_828CBF18 **last;  /* 0x04 */
    VObj_828CBF18 **end;   /* 0x08 */
} Vector_828CBF18;

typedef struct String_828CBF18 {
    union {
        char buffer[16];
        char *pointer;
    } text; /* 0x00 */

    unsigned int size;       /* 0x10 */
    unsigned int capacity;   /* 0x14 */
    unsigned char allocator; /* 0x18 */
} String_828CBF18;

typedef struct Mgr_828CBF18 {
    unsigned int *vt; /* 0x00 */
    char pad04[0x4c];
    unsigned int *vt50; /* 0x50 */
    char pad54[0x18];
    void *context; /* 0x6c */
    char pad70[0x10];
    char sub80[8];       /* 0x80 */
    int id;              /* 0x88 */
    unsigned char owned; /* 0x8c */
    char pad8d[3];
    Vector_828CBF18 items; /* 0x90 */
    char pad9c[8];
    int target; /* 0xa4 */
} Mgr_828CBF18;

static __forceinline VObj_828CBF18 **At(Vector_828CBF18 *v, unsigned int index)
{
    if ((unsigned int)(v->last - v->first) <= index) {
        fn_82F622E0("invalid vector<T> subscript");
    }
    return &v->first[index];
}

void fn_828CBF18(Mgr_828CBF18 *m)
{
    Vector_828CBF18 *items;
    unsigned int count;
    unsigned int i;

    m->vt = &lbl_82025AA0;
    m->vt50 = &lbl_82025A98;
    items = &m->items;
    count = items->last - items->first;
    for (i = 0; i < count; i++) {
        VObj_828CBF18 **slot = At(items, i);
        VObj_828CBF18 *o = *slot;

        *slot = 0;
        if (o != 0) {
            (*(void (*)(VObj_828CBF18 *, int)) * (unsigned int *)o->vt)(o, 1);
        }
    }
    if (m->owned != 0) {
        void *object = fn_8288F1E8(m->context, m->sub80);
        if (object != 0 && fn_8288B460(object, m->id, 1) != 0) {
            String_828CBF18 message;
            message.capacity = 15;
            message.size = 0;
            message.text.buffer[0] = 0;
            fn_82230360(&message, "net obj ownership transfer msg destruct", 0x27);
            fn_8288F180(object, m->target, &message);
            if (message.capacity >= 16) {
                fn_8265CA20(message.text.pointer);
            }
        }
    }
    if (items->first != 0) {
        fn_8265CA20(items->first);
    }
    items->first = 0;
    items->last = 0;
    items->end = 0;
    fn_828B55B0(m->sub80);
    fn_828BDE70(m);
}
