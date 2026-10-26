typedef struct Pair { unsigned int key; int val; } Pair;
typedef struct Vec { Pair *begin; Pair *end; } Vec;
typedef struct S { char pad[0x1e0]; Vec v; } S;
extern void fn_83062AD8(void *ret, Vec *v, Pair *it);

void fn_8266DB08(S *s, unsigned int key)
{
    Pair *p;
    char ret[4];
    for (p = s->v.begin; p != s->v.end; p++) {
        if (p->key == key) {
            fn_83062AD8(ret, &s->v, p);
            return;
        }
    }
}
