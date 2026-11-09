typedef struct Sub_824583F0 { int pad[9]; unsigned n; } Sub_824583F0;
typedef struct Owner_824583F0 { void *ptr; int pad; Sub_824583F0 sub; int pad2[19]; int count; int pad3[23]; unsigned total; } Owner_824583F0;

void fn_824583F0(Owner_824583F0 *p, void *x)
{
    if (x == p->ptr) {
        Sub_824583F0 *s = &p->sub;
        ++s->n;
        { int *count = &p->count; ++*count; }
        { unsigned *total = &p->total; ++*total; }
    }
}
