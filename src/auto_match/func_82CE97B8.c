typedef struct A A;
typedef struct { void *a, *b; void (*free)(A *a, void *p, int size); } AVt;
struct A { AVt *vt; };
typedef struct { char pad[0x10]; A *alloc; } Ctx;
extern Ctx *fn_82CE5410(void);
typedef struct { void *ptr; int n; int c, d, e; } E;
typedef struct { char pad[0x2c]; E arr[15]; } S;

void fn_82CE97B8(S *s)
{
    E *p = &s->arr[15];
    int i;

    for (i = 14; i >= 0; i--) {
        --p;
        if (p->n != 0) {
            void *ptr = p->ptr;
            int n = p->n;
            A *a = fn_82CE5410()->alloc;
            a->vt->free(a, ptr, n << 7);
        }
    }
}
