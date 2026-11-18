typedef struct Type_82ABE780 {
    char pad0[8];
    unsigned int flags;     /* 0x08 */
    char pad0c[8];
    unsigned int info;      /* 0x14 */
} Type_82ABE780;

typedef struct Link_82ABE780 {
    unsigned int prev;
    unsigned int next;      /* tagged link; bit 0 set = empty */
} Link_82ABE780;

typedef struct Obj_82ABE780 {
    char pad0[0x18];
    Link_82ABE780 types;          /* 0x18 */
} Obj_82ABE780;

typedef struct Page_82ABE780 {
    struct Owner_82ABE780 *owner;
} Page_82ABE780;

typedef struct Owner_82ABE780 {
    char pad0[0x94];
    void *ctx;              /* 0x94 */
} Owner_82ABE780;

extern unsigned int fn_82AA66A8(void *ctx, int code);

static __forceinline Type_82ABE780 *First_82ABE780(Link_82ABE780 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Type_82ABE780 *)list->next;
}

unsigned int fn_82ABE780(Obj_82ABE780 *self)
{
    Type_82ABE780 *t = First_82ABE780(&self->types);

    if (t != 0 && (t->flags & 0x3f80) == 0x3f00) {
        unsigned int info = t->info;
        if ((unsigned char)(info >> 16) & 1) {
            return info & 0xfff;
        }
    }
    return fn_82AA66A8(((Page_82ABE780 *)((unsigned int)self & ~0xfff))->owner->ctx, 0x12c0);
}
