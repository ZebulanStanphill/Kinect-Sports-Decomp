typedef struct Options_8253F650 {
    unsigned char exclusive; /* 0x0 */
    unsigned char enabled;   /* 0x1 */
} Options_8253F650;

typedef struct Entry_8253F650 {
    void *item; /* 0x00 */
    char pad4[0x8c];
} Entry_8253F650;

typedef struct Header_8253F650 {
    int unk0;
    int count; /* 0x4 */
} Header_8253F650;

typedef struct Group_8253F650 {
    Header_8253F650 *header; /* 0x0 */
    Entry_8253F650 *entries; /* 0x4 */
    int unk8;
    void *link; /* 0xc */
} Group_8253F650;

typedef struct Binding_8253F650 {
    void *source;          /* 0x0 */
    Group_8253F650 *group; /* 0x4 */
    void *controller;      /* 0x8 */
} Binding_8253F650;

typedef struct Context_8253F650 {
    char pad0[0x1f8];
    void *manager; /* 0x1f8 */
} Context_8253F650;

typedef struct Owner_8253F650 {
    char pad0[0x4c];
    Context_8253F650 *context; /* 0x04c */
    char pad50[0x708];
    unsigned int range[0x15]; /* 0x758 */
    Binding_8253F650 binding; /* 0x7ac */
    int unk7b8;
    int shared; /* 0x7bc */
    char pad7c0[0x10];
    unsigned int flags; /* 0x7d0 */
    char pad7d4[0xec];
    int target; /* 0x8c0 */
} Owner_8253F650;

extern void fn_825A8A70(Owner_8253F650 *self, void *target, int a, int b, int c);
extern void fn_825B46F0(unsigned int *range);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_825FEAC0(void *mem, int target, Binding_8253F650 *binding);
extern Group_8253F650 *fn_825FDA90(void *mem, Owner_8253F650 *owner, void *controller,
                                   Options_8253F650 *options);
extern void fn_82D81078(void *manager, void *item, int enabled);
extern void fn_82DEDBA8(void *manager, void *link);

void fn_8253F650(Owner_8253F650 *self)
{
    Binding_8253F650 *binding;
    Options_8253F650 options;
    void *mem;
    Group_8253F650 *group;
    void *manager;
    int i;
    int refresh;

    refresh = self->target != 0 && (self->flags & 8) != 0;

    if (refresh) {
        fn_825A8A70(self, (void *)(self->target + 0x98), 0, 0, 0);
        fn_825B46F0(self->range);
    }
    binding = &self->binding;
    if (binding->source != 0) {
        mem = fn_8265C9E0(0x368);
        binding->controller = mem != 0 ? fn_825FEAC0(mem, self->target, binding) : 0;
        options.enabled = 1;
        options.exclusive = self->shared == 0;
        mem = fn_8265C9E0(0xc0);
        group = mem != 0 ? fn_825FDA90(mem, self, binding->controller, &options) : 0;
        binding->group = group;
        manager = self->context->manager;
        for (i = group->header->count - 1; i >= 0; i--) {
            fn_82D81078(manager, group->entries[i].item, 1);
        }
        fn_82DEDBA8(manager, group->link);
    }
}
