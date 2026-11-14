typedef struct Str_82CFCA30 {
    char *data;
    int len;
    int cap;
} Str_82CFCA30;

typedef struct Alloc_82CFCA30 Alloc_82CFCA30;

typedef struct AllocVtbl_82CFCA30 {
    void *slot0;
    char *(*Alloc)(Alloc_82CFCA30 *self, int size);
} AllocVtbl_82CFCA30;

struct Alloc_82CFCA30 {
    AllocVtbl_82CFCA30 *vt;
};

typedef struct Ctx_82CFCA30 {
    int pad[4];
    Alloc_82CFCA30 *alloc;
} Ctx_82CFCA30;

extern Ctx_82CFCA30 *fn_82CE5410(void);
void *memcpy(void *dst, const void *src, unsigned int n);

Str_82CFCA30 *fn_82CFCA30(Str_82CFCA30 *out, Str_82CFCA30 *a, Str_82CFCA30 *b)
{
    int n1 = a->len - 1;
    int n2 = b->len - 1;
    int len = n2 + n1;
    Alloc_82CFCA30 *al = fn_82CE5410()->alloc;
    char *p = al->vt->Alloc(al, len + 1);
    memcpy(p, a->data, n1);
    memcpy(p + n1, b->data, n2 + 1);
    out->data = p;
    out->len = len + 1;
    out->cap = len + 1;
    return out;
}
