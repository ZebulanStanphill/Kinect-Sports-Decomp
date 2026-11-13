typedef struct E_8249F240 { float key; int b; int c; } E_8249F240;

static __forceinline unsigned char Less_8249F240(const E_8249F240 *a, const E_8249F240 *b) { return a->key < b->key; }
static __forceinline void Swap_8249F240(E_8249F240 *x, E_8249F240 *y) { E_8249F240 t = *y; *y = *x; *x = t; }

void fn_8249F240(E_8249F240 *p, E_8249F240 *q, E_8249F240 *r)
{
    if (Less_8249F240(q, p)) Swap_8249F240(p, q);
    if (Less_8249F240(r, q)) Swap_8249F240(q, r);
    if (Less_8249F240(q, p)) Swap_8249F240(p, q);
}
