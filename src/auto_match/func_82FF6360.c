typedef struct L { struct LVt *vt; } L;
typedef struct LVt { void (*fire)(L *l, unsigned int ev); } LVt;
typedef struct N { struct N *next; L *l; unsigned int ev; unsigned int tag; } N;
typedef struct S { char pad[0x30]; N *head; } S;

void fn_82FF6360(S *s, unsigned int ev, unsigned int tag)
{
    N *n;
    for (n = s->head; n != 0; n = n->next) {
        if ((n->ev == 0 || n->ev == ev) && (tag == 0 || n->tag == tag))
            n->l->vt->fire(n->l, ev);
    }
}
