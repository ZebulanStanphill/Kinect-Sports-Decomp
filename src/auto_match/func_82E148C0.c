typedef struct Name_82E148C0 {
    const char *text;
} Name_82E148C0;

typedef struct Pair_82E148C0 {
    Name_82E148C0 first;
    Name_82E148C0 second;
} Pair_82E148C0;

typedef struct PairArray_82E148C0 {
    Pair_82E148C0 *data;
    int size;
    int capacityAndFlags;
} PairArray_82E148C0;

typedef struct Owner_82E148C0 {
    char pad[0x10];
    PairArray_82E148C0 pairs;
} Owner_82E148C0;

typedef struct Router_82E148C0 {
    char pad[0x10];
    void *heap;
} Router_82E148C0;

extern Router_82E148C0 *fn_82CE5410(void);
extern void fn_82CE63B0(void *alloc, void *array, int elemSize);
extern void fn_82CED2F8(Name_82E148C0 *name);
extern void fn_82CED628(Name_82E148C0 *name, const char *text);

void fn_82E148C0(Owner_82E148C0 *self, const char *first, const char *second)
{
    PairArray_82E148C0 *pairs = &self->pairs;
    Router_82E148C0 *router = fn_82CE5410();
    Pair_82E148C0 *p;
    int i;
    if (pairs->size == (pairs->capacityAndFlags & 0x3fffffff)) {
        fn_82CE63B0(router->heap, pairs, 8);
    }
    p = pairs->data + pairs->size;
    if (p != 0) {
        fn_82CED2F8(&p->first);
        fn_82CED2F8(&p->second);
    }
    i = pairs->size;
    pairs->size = i + 1;
    p = pairs->data + i;
    fn_82CED628(&p->first, first);
    fn_82CED628(&p->second, second);
}
