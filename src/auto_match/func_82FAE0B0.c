typedef struct { int key; void *value; } Entry;
typedef struct { Entry *first; Entry *last; Entry *end; } Vec;
typedef struct { char pad[0x7c]; Vec v; } Owner;

static unsigned int Vec_size(Vec *v) { return v->last - v->first; }

void *fn_82FAE0B0(Owner *p, unsigned short i)
{
    if (i < Vec_size(&p->v))
        return p->v.first[i].value;
    return 0;
}
