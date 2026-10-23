typedef struct E { int key; int val; } E;
typedef struct P { int x0; E *items; int count; } P;
extern int fn_82CFBC28(void *a, int b);

int fn_82CFE870(P *p, void *a, int *out)
{
    int i;
    for (i = 0; i < p->count; i++) {
        if (fn_82CFBC28(a, p->items[i].val) == 0) {
            *out = p->items[i].key;
            return 0;
        }
    }
    return 1;
}
