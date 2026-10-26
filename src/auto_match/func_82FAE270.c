typedef struct Pair { unsigned int key; int val; } Pair;
typedef struct Map {
    char pad[0xa0];
    Pair *begin;
    Pair *end;
} Map;

int fn_82FAE270(Map *m, unsigned int key)
{
    Pair *p;
    for (p = m->begin; p != m->end; p++) {
        if (p->key == key)
            return p->val - m->begin->val;
    }
    return 0;
}
