typedef struct L L;
typedef struct { void *a; void (*notify)(L *l, unsigned int v, int z); } LVt;
struct L { LVt *vt; };
typedef struct N { struct N *next; L *l; unsigned int key; } N;
typedef struct { char pad[0x10]; N *head; } S;

int fn_82FF62F8(S *s, unsigned int key, unsigned int old, unsigned int v)
{
    if (old != v) {
        N *n;
        for (n = s->head; n != 0; n = n->next) {
            if (n->key == key)
                n->l->vt->notify(n->l, v, 0);
        }
    }
    return 1;
}
