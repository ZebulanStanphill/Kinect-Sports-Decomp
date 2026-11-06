struct B_82727A40;
typedef struct {
    int pad0;
    int pad4;
    int (*kind)(struct B_82727A40 *self);
} Vt_82727A40;
typedef struct B_82727A40 {
    Vt_82727A40 *vt;
} B_82727A40;

typedef struct {
    char pad0[0xa0];
    struct {
        char pad[8];
        struct {
            char pad[0x18];
            unsigned int b;
            unsigned int a;
        } *inner;
    } *info;
} Base_82727A40;

typedef struct {
    char pad[0x78];
    struct {
        char pad[0x288];
        int heap;
    } *sub;
} Owner_82727A40;

typedef struct {
    int pad0;
    char *out;
    B_82727A40 *b;
    char pad0c[0x18 - 0xc];
    Owner_82727A40 *owner;
} Obj_82727A40;

extern void *fn_8267B890(int heap, int size, int flags);
extern void fn_826824B0(void *p);
extern void fn_826959C8(char *p);
extern void fn_82696BC8(char *out, void *node);
extern void *fn_82735960(void *mem, Owner_82727A40 *owner);
extern void fn_82735D68(void *node, char *owner78, unsigned int v);
extern void fn_827363A0(void *node, char *owner78, unsigned int v);

void fn_82727A40(Obj_82727A40 *self)
{
    if (self->b == 0 || self->b->vt->kind(self->b) != 4) {
        char *out = self->out;
        fn_826959C8(out);
        *out = 0;
    } else {
        Base_82727A40 *base;
        unsigned int a, b;
        void *mem;
        void *node;
        if (self->b != 0)
            base = (Base_82727A40 *)((char *)self->b - 0x68);
        else
            base = 0;
        a = base->info->inner->a;
        b = base->info->inner->b;
        mem = fn_8267B890(self->owner->sub->heap, 0x74, 0);
        if (mem != 0)
            node = fn_82735960(mem, self->owner);
        else
            node = 0;
        if (a != 0)
            fn_82735D68(node, (char *)self->owner + 0x78, a);
        if (b != 0)
            fn_827363A0(node, (char *)self->owner + 0x78, b);
        fn_82696BC8(self->out, node);
        if (node != 0)
            fn_826824B0(node);
    }
}
