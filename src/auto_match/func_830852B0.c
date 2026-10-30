typedef struct Alloc_830852B0 Alloc_830852B0;
typedef struct {
    void *f0;
    void *f4;
    void (*free)(Alloc_830852B0 *self, void *p, int size);
} AllocVt_830852B0;
struct Alloc_830852B0 {
    AllocVt_830852B0 *vt;
};
typedef struct {
    char pad[0x10];
    Alloc_830852B0 *alloc;
} Ctx_830852B0;

typedef struct {
    void *a;
    void *b;
} Bufs_830852B0;

extern Ctx_830852B0 *fn_82CE5410(void);

void fn_830852B0(Bufs_830852B0 *bufs, int n)
{
    if (n > 0) {
        void *b = bufs->b;
        Alloc_830852B0 *al = fn_82CE5410()->alloc;
        int size = n * 16;
        al->vt->free(al, b, size);
        {
            void *a = bufs->a;
            Alloc_830852B0 *al2 = fn_82CE5410()->alloc;
            al2->vt->free(al2, a, size);
        }
    }
}
