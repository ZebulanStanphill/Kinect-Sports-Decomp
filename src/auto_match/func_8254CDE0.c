typedef struct {
    void *obj;
    int extra;
} Pair_8254CDE0;

typedef struct {
    Pair_8254CDE0 *begin;
    Pair_8254CDE0 *end;
    Pair_8254CDE0 *cap;
} Vec_8254CDE0;

typedef struct {
    int unk0;
    void *head;
    int size;
} Map_8254CDE0;

typedef struct {
    char pad0[0x18];
    Vec_8254CDE0 entries;
    char pad24[0x14];
    Map_8254CDE0 index;
} Self_8254CDE0;

extern char lbl_82196288[];
extern int fn_825200A8(const char *a, const char *b);
extern void fn_82829120(void **out, Map_8254CDE0 *map, const char *key);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82549960(void *mem, const char *name, int a, int b, int c, int d);
extern int fn_8254CC70(Self_8254CDE0 *self, int arg);
extern void fn_824BF8A8(Vec_8254CDE0 *vec, Pair_8254CDE0 *value);
extern int *fn_8254F740(Map_8254CDE0 *map, const char *key);

void fn_8254CDE0(Self_8254CDE0 *self, const char *name, int arg)
{
    if (fn_825200A8(name, lbl_82196288) == 0) {
        void *it;
        fn_82829120(&it, &self->index, name);
        if (it == self->index.head) {
            Pair_8254CDE0 pair;
            void *mem;
            int n;
            mem = fn_8265C9E0(0x200);
            if (mem != 0) {
                pair.obj = fn_82549960(mem, name, 0, 0, 0, 0);
            } else {
                pair.obj = 0;
            }
            if (pair.obj != 0) {
                pair.extra = fn_8254CC70(self, arg);
                fn_824BF8A8(&self->entries, &pair);
                n = self->entries.end - self->entries.begin;
                *fn_8254F740(&self->index, name) = n - 1;
            }
        }
    }
}
