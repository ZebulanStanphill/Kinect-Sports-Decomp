typedef struct Alloc_82DAA408 Alloc_82DAA408;
typedef struct {
    void *f0;
    void *f4;
    void (*free)(Alloc_82DAA408 *self, void *p, int size);
} AllocVt_82DAA408;
struct Alloc_82DAA408 {
    AllocVt_82DAA408 *vt;
};
typedef struct {
    char pad[0x10];
    Alloc_82DAA408 *alloc;
} Ctx_82DAA408;

typedef struct {
    int count;
    int f4;
    int size;
    void *items[1];
} Block_82DAA408;

extern Ctx_82DAA408 *fn_82CE5410(void);

void fn_82DAA408(Block_82DAA408 *b)
{
    void **items = b->items;
    int i;
    Alloc_82DAA408 *al;
    for (i = 0; i < b->count; i++) {
        int size = b->size;
        void *p = items[i];
        al = fn_82CE5410()->alloc;
        al->vt->free(al, p, size);
    }
    {
        int size = ((short)b->count + 3) * 4;
        al = fn_82CE5410()->alloc;
        al->vt->free(al, b, size);
    }
}
