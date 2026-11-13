typedef struct Pair_82671CC0 { int val; unsigned int key; } Pair_82671CC0;
typedef struct Vec_82671CC0 { Pair_82671CC0 *begin; Pair_82671CC0 *end; Pair_82671CC0 *cap; int pad; } Vec_82671CC0;
typedef struct S_82671CC0 { char pad[0x34]; Vec_82671CC0 a; Vec_82671CC0 b; } S_82671CC0;
extern void fn_82671620(void *ret, Vec_82671CC0 *v, Pair_82671CC0 *it);

int fn_82671CC0(S_82671CC0 *s, unsigned int key)
{
    Pair_82671CC0 *p;
    char ret[4];
    for (p = s->a.begin; p != s->a.end; p++) {
        if (p->key == key) {
            fn_82671620(ret, &s->a, p);
            return 1;
        }
    }
    for (p = s->b.begin; p != s->b.end; p++) {
        if (p->key == key) {
            fn_82671620(ret, &s->b, p);
            return 1;
        }
    }
    return 0;
}
