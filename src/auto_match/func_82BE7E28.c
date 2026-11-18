typedef struct Resolver_82BE7E28 Resolver_82BE7E28;

typedef struct ResolverMethods_82BE7E28 {
    void (*destroy)(Resolver_82BE7E28 *, unsigned int);
} ResolverMethods_82BE7E28;

struct Resolver_82BE7E28 {
    ResolverMethods_82BE7E28 *methods;
};

typedef struct List_82BE7E28 {
    void *head;
    void *tail;
    unsigned int count;
    unsigned int flags;
} List_82BE7E28;

extern Resolver_82BE7E28 *fn_82BE7790(void);
extern void *fn_82BE56B0(unsigned int);
extern void *fn_82BEB628(void *, Resolver_82BE7E28 *);
extern void *lbl_8322B1DC;
extern void fn_82BE5240(void *, int, const char *, ...);
extern int fn_82BE52B8(List_82BE7E28 *, void *);
extern void fn_82BE54C0(void *);
extern void fn_82BE56C0(void *);
extern void fn_82BEB640(void *);

static __forceinline List_82BE7E28 *CreateList_82BE7E28(void *memory)
{
    List_82BE7E28 *list;
    if (memory != 0) {
        list = memory;
        list->head = 0;
        list->tail = 0;
        list->count = 0;
        list->flags = 0;
        return list;
    }
    return 0;
}

List_82BE7E28 *fn_82BE7E28(void)
{
    Resolver_82BE7E28 *resolver;
    void *memory;
    void *node;
    List_82BE7E28 *list;
    resolver = fn_82BE7790();
    if (resolver == 0) {
        return 0;
    }
    memory = fn_82BE56B0(12);
    node = memory != 0 ? fn_82BEB628(memory, resolver) : 0;
    if (node == 0) {
        if (lbl_8322B1DC != 0) {
            fn_82BE5240(lbl_8322B1DC, 101,
                        "Allocation failed for list node while building DNS resolution list");
        }
        resolver->methods->destroy(resolver, 1);
        return 0;
    }
    list = CreateList_82BE7E28(fn_82BE56B0(16));
    if (list == 0) {
        if (lbl_8322B1DC != 0) {
            fn_82BE5240(lbl_8322B1DC, 101, "Allocation failed for DNS resolution list");
        }
        fn_82BEB640(node);
        fn_82BE56C0(node);
        resolver->methods->destroy(resolver, 1);
        return 0;
    }
    if (fn_82BE52B8(list, node) != 0) {
        return list;
    }
    fn_82BE54C0(list);
    fn_82BE56C0(list);
    fn_82BEB640(node);
    fn_82BE56C0(node);
    resolver->methods->destroy(resolver, 1);
    return 0;
}
