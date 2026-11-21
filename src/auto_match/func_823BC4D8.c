typedef struct Shared_823BC4D8 {
    void *object;     /* 0x0 */
    void *references; /* 0x4 */
} Shared_823BC4D8;

typedef struct Node_823BC4D8 {
    struct Node_823BC4D8 *left; /* 0x0 */
    char pad4[0x8];
    unsigned int key; /* 0xc */
} Node_823BC4D8;

typedef struct Owner_823BC4D8 {
    char pad0[0x24];
    Node_823BC4D8 *head; /* 0x24 */
} Owner_823BC4D8;

typedef struct Impl_823BC4D8 Impl_823BC4D8;

typedef struct ImplVtable_823BC4D8 {
    Impl_823BC4D8 *(*copy)(Impl_823BC4D8 *self, void *where);
    void *unused4;
    void *unused8;
    void (*destroy)(Impl_823BC4D8 *self, int deleteThis);
} ImplVtable_823BC4D8;

struct Impl_823BC4D8 {
    ImplVtable_823BC4D8 *vtable; /* 0x0 */
    Shared_823BC4D8 value;       /* 0x4 */
};

typedef struct Function_823BC4D8 {
    char storage[16];      /* 0x00 */
    Impl_823BC4D8 *target; /* 0x10 */
} Function_823BC4D8;

extern ImplVtable_823BC4D8 lbl_821B5EA4;
extern Shared_823BC4D8 *fn_82365BD8(Shared_823BC4D8 *dst, Shared_823BC4D8 *src);
extern void fn_822315A0(void *references);
extern Node_823BC4D8 **fn_823BC978(Node_823BC4D8 **out, Node_823BC4D8 *node, Node_823BC4D8 *end,
                                   Function_823BC4D8 *predicate);

unsigned int fn_823BC4D8(Owner_823BC4D8 *self, Shared_823BC4D8 *target)
{
    Function_823BC4D8 predicate;
    Function_823BC4D8 copy;
    Node_823BC4D8 *head;
    Node_823BC4D8 *first;
    Node_823BC4D8 *found;

    {
        Shared_823BC4D8 bound;
        Shared_823BC4D8 argument;
        Shared_823BC4D8 stored;
        Impl_823BC4D8 *impl;

        fn_82365BD8(&bound, target);
        fn_82365BD8(&argument, &bound);
        fn_82365BD8(&stored, &argument);
        impl = (Impl_823BC4D8 *)predicate.storage;
        impl->vtable = &lbl_821B5EA4;
        fn_82365BD8(&impl->value, &stored);
        predicate.target = impl;
        if (stored.references != 0) {
            fn_822315A0(stored.references);
        }
        if (argument.references != 0) {
            fn_822315A0(argument.references);
        }
        if (bound.references != 0) {
            fn_822315A0(bound.references);
        }
    }
    head = self->head;
    first = head->left;
    if (predicate.target == 0) {
        copy.target = 0;
    } else {
        if ((void *)predicate.target == (void *)&predicate) {
            copy.target = predicate.target->vtable->copy(predicate.target, copy.storage);
        } else {
            copy.target = predicate.target->vtable->copy(predicate.target, 0);
        }
    }
    {
        Node_823BC4D8 *result;
        found = *fn_823BC978(&result, first, head, &copy);
    }
    if (predicate.target != 0) {
        predicate.target->vtable->destroy(predicate.target, (void *)predicate.target != (void *)&predicate);
        predicate.target = 0;
    }
    return found->key;
}
