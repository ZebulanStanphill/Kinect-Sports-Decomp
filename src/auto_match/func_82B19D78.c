typedef struct { unsigned int pad:18; unsigned int level:14; } NF;
typedef struct Node { int x; struct Node *next; NF flags; } Node;
typedef struct { char pad[0x30]; unsigned int id; } Obj;
typedef struct { char pad[0x10]; Node *list; char pad2[0x8]; Obj *obj; } S;
typedef struct { char pad[0x28]; unsigned int *bits; } T;
typedef struct { char pad[8]; T *t; } C;
typedef struct { unsigned int a:5; unsigned int level:14; unsigned int b:1; unsigned int c:12; } Out;
extern unsigned char fn_82B17848(void *a, S *s, Node *n, Out *out);

void fn_82B19D78(void *a, S *s, C *c, Out *out)
{
    Node *n;
    unsigned int id;
    for (n = s->list; n != 0; n = n->next) {
        if (n->x == 0) break;
    }
    if (n != 0) {
        id = s->obj->id & 0x7ffff;
        if ((c->t->bits[(id >> 5) + 1] & (1 << (id & 31))) != 0 &&
            fn_82B17848(a, s, n, out)) {
            out->b = 1;
            if (n->flags.level < out->level) {
                out->level = n->flags.level;
            }
        }
    }
}
