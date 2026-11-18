typedef struct Object_8273CB00 {
    char pad00[0x08];
    int refs; /* 0x08 */
    char pad0c[0x10 - 0x0c];
    int size; /* 0x10 */
} Object_8273CB00;

typedef struct Visitor_8273CB00 Visitor_8273CB00;

typedef struct VisitorVtbl_8273CB00 {
    void *slots[8];
    void (*visit)(Visitor_8273CB00 *self, void *env, void *counter, int a, int b); /* 0x20 */
} VisitorVtbl_8273CB00;

struct Visitor_8273CB00 {
    VisitorVtbl_8273CB00 *vtable;
};

typedef struct Target_8273CB00 {
    char pad00[0x10];
    Visitor_8273CB00 visitor; /* 0x10 */
} Target_8273CB00;

typedef struct Counter_8273CB00 {
    int unk0;  /* 0x00 */
    char *env; /* 0x04 */
    int total; /* 0x08 */
} Counter_8273CB00;

extern void fn_82696D38(Object_8273CB00 **out, unsigned char *value, void *env, int length, int flags);
extern Target_8273CB00 *fn_82696958(unsigned char *value, void *env);
extern void fn_826944C8(Object_8273CB00 *object);

void fn_8273CB00(Counter_8273CB00 *counter, Object_8273CB00 **name, unsigned char *value)
{
    Object_8273CB00 *object;
    Target_8273CB00 *target;
    Object_8273CB00 *released;
    int type;

    counter->total += (*name)->size;
    type = *value;
    switch (type) {
    case 3:
    case 4:
        counter->total += 4;
        break;
    case 5:
        fn_82696D38(&object, value, counter->env, -1, 0);
        counter->total += object->size;
        released = object;
        if (--released->refs == 0) {
            fn_826944C8(released);
        }
        break;
    case 6:
        target = fn_82696958(value, counter->env);
        target->visitor.vtable->visit(&target->visitor, counter->env + 0x78, counter, 0, 0);
        break;
    }
}
