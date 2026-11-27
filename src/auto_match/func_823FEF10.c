#include "xdk/vectorintrinsics.h"

typedef void (*Fn_823FEF10)(void *, __vector4, void *, int, void *, void *, const void *, int);
typedef struct { Fn_823FEF10 fn; int adj; } Pmf_823FEF10;
typedef struct { void *vtbl; int pad4; Pmf_823FEF10 pmf; char *obj; } Bound_823FEF10;
void fn_823FEF10(Bound_823FEF10 *s, __vector4 v, void *a, int b, void *c, void *d, const void *e, int f)
{
    Pmf_823FEF10 p = s->pmf;
    p.fn(s->obj + p.adj, v, a, b, c, d, e, f);
}
