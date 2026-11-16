typedef struct Property_823B68A8 Property_823B68A8;

typedef struct PropertyVtable_823B68A8 {
    void *slots[15];
    unsigned int (*get)(Property_823B68A8 *); /* 0x3c */
} PropertyVtable_823B68A8;

struct Property_823B68A8 {
    PropertyVtable_823B68A8 *vtable;
};

typedef struct View_823B68A8 {
    char padding[0x144];
    Property_823B68A8 active; /* 0x144 */
    char padding148[0x50];
    Property_823B68A8 state; /* 0x198 */
    char padding19c[0x50];
    Property_823B68A8 index; /* 0x1ec */
} View_823B68A8;

typedef struct Owner_823B68A8 Owner_823B68A8;

typedef struct OwnerVtable_823B68A8 {
    void *slots[2];
    View_823B68A8 *(*getView)(Owner_823B68A8 *); /* 0x8 */
} OwnerVtable_823B68A8;

struct Owner_823B68A8 {
    OwnerVtable_823B68A8 *vtable;
};

typedef struct Object_823B68A8 {
    char padding[0xc];
    char *owner; /* 0xc */
    char padding10[0x40];
    int disabled;       /* 0x50 */
    unsigned int index; /* 0x54 */
} Object_823B68A8;

extern int fn_823B6790(Object_823B68A8 *);
extern void fn_828AAF70(Property_823B68A8 *, int);

static __forceinline View_823B68A8 *GetView(Object_823B68A8 *self)
{
    Owner_823B68A8 *owner = self->owner ? (Owner_823B68A8 *)(self->owner - 0x68) : 0;
    return owner->vtable->getView(owner);
}

void fn_823B68A8(Object_823B68A8 *self)
{
    if (fn_823B6790(self) != 0) {
        Property_823B68A8 *active = &GetView(self)->active;
        if ((unsigned char)active->vtable->get(active) == 0 && self->disabled == 0) {
            Owner_823B68A8 *owner = self->owner ? (Owner_823B68A8 *)(self->owner - 0x68) : 0;
            unsigned int expected = self->index + 1;
            Property_823B68A8 *index = &owner->vtable->getView(owner)->index;
            if (index->vtable->get(index) == expected) {
                Property_823B68A8 *state = &GetView(self)->state;
                state->vtable->get(state);
                fn_828AAF70(&GetView(self)->state, 1);
                index = &GetView(self)->index;
                self->index = index->vtable->get(index);
            }
        }
    }
}
