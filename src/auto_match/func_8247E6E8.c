typedef struct Pair_8247E6E8 {
    char *object;
    void *reference;
} Pair_8247E6E8;

typedef struct Iterator_8247E6E8 {
    unsigned int key;
    char *node;
} Iterator_8247E6E8;

extern void *lbl_83297810;
extern char *lbl_83265988;
extern void *fn_82511928(void);
extern void fn_825138E0(Pair_8247E6E8 *, void *, int);
extern void *fn_828A12E8(unsigned int key);
extern char *fn_8288F948(void *map, int index);
extern char *fn_823AB158(char *object);
extern void fn_82248B90(char **node);
extern void fn_8225F160(void);
extern void fn_822315A0(void *reference);

static __forceinline int HasNext_8247E6E8(char *node, unsigned int key)
{
    if (node != *(char **)(fn_8288F948(fn_828A12E8(key), 1) + 4)) {
        return 1;
    }
    return 0;
}

static __forceinline void *GetManager(void)
{
    if (lbl_83297810 != 0) {
        return lbl_83297810;
    }
    return fn_82511928();
}

unsigned char fn_8247E6E8(char *self)
{
    Pair_8247E6E8 pair;
    Iterator_8247E6E8 iterator;
    unsigned char result;
    char *state;
    fn_825138E0(&pair, GetManager(), 1);
    if (pair.object != 0) {
        char *node;
        unsigned int key = *(unsigned int *)(pair.object + 8);
        iterator.key = key;
        node = **(char ***)(fn_8288F948(fn_828A12E8(key), 1) + 4);
        iterator.node = node;
        while (HasNext_8247E6E8(node, key)) {
            node = *(char **)(node + 0x14);
            if (fn_823AB158(node) == self || *(char **)(node + 0x864) == self) {
                state = *(char **)(fn_823AB158(node) + 0xf0);
                goto found;
            }
            fn_82248B90(&iterator.node);
            node = iterator.node;
            key = iterator.key;
        }
        if (pair.reference != 0) {
            fn_822315A0(pair.reference);
        }
        return 0;
    } else {
        fn_8225F160();
        if (lbl_83265988 != 0) {
            state = *(char **)(lbl_83265988 + 0xf0);
        found:
            result = (*(unsigned char *)(*(char **)(state + 8) + 8) >> 4) & 1;
        } else {
            result = 0;
        }
        if (pair.reference != 0) {
            fn_822315A0(pair.reference);
        }
    }
    return result;
}
