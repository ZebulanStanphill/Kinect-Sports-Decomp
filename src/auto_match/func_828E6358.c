typedef void (*F)(void *, void *, int); typedef struct { F f; } Table_828E6358;
void fn_828E6358(unsigned int *p) { unsigned int v=*p; if (v) { if (!(v&1)) { void *q=p+2; F f=((Table_828E6358 *)(v & ~1U))->f; if (f) f(q,q,2); } *p=0; } }
