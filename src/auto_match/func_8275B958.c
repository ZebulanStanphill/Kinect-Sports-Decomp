typedef struct Shape_8275B958 {
    char pad000[0xa];
    unsigned short count; /* 0xa */
    unsigned int *ids;    /* 0xc */
} Shape_8275B958;

typedef struct Action_8275B958 {
    unsigned char kind; /* 0x0 */
    char pad001[3];

    union {
        unsigned int id;
        Shape_8275B958 *shape;
    } u; /* 0x4 */

    char pad008[0x20];
} Action_8275B958;

typedef struct Heap_8275B958 {
    char pad000[0x1c];
    void *allocator; /* 0x1c */
} Heap_8275B958;

typedef struct Stream_8275B958 {
    char pad000[0x20];
    Heap_8275B958 *heap; /* 0x20 */
} Stream_8275B958;

typedef struct Tag_8275B958 {
    int pad0;
    unsigned short id; /* 0x4 */
    char pad006[0x2];
    unsigned int target;     /* 0x8 */
    Action_8275B958 *action; /* 0xc */
    unsigned short flags;    /* 0x10 */
    char pad012[0x2];
    float ratio; /* 0x14 */
} Tag_8275B958;

extern const float lbl_8200D4C0;
extern unsigned short fn_826A6A38(Stream_8275B958 *in);
extern void *fn_8267B890(void *allocator, int size, int flags);
extern Action_8275B958 *fn_827597E0(Action_8275B958 *action);
extern void fn_82759498(Action_8275B958 *action);
extern void fn_8275B020(Action_8275B958 *action, Stream_8275B958 *in, int tagType);
extern void fn_826F33F0(Stream_8275B958 *in, unsigned int *target, int tagType);

void fn_8275B958(Tag_8275B958 *self, Stream_8275B958 *in, int tagType)
{
    unsigned short flags;
    Action_8275B958 local;
    Action_8275B958 *action;
    void *memory;

    self->id = fn_826A6A38(in);
    flags = 0;
    if (tagType == 0x53) {
        flags = fn_826A6A38(in);
        self->flags = flags;
        if (flags & 0x20) {
            self->ratio = (float)fn_826A6A38(in) * lbl_8200D4C0;
        }
    }
    if (flags & 8) {
        fn_827597E0(&local);
        memory = fn_8267B890(in->heap->allocator, 0x28, 0);
        self->action = memory != 0 ? fn_827597E0((Action_8275B958 *)memory) : 0;
        action = self->action != 0 ? self->action : &local;
        fn_8275B020(action, in, tagType);
        if (action->kind == 0) {
            self->target = action->u.id;
        } else if ((action->kind & 0x10) && action->u.shape != 0 && action->u.shape->count != 0) {
            self->target = action->u.shape->ids[1];
        }
        fn_82759498(&local);
    } else {
        fn_826F33F0(in, &self->target, tagType);
    }
}
