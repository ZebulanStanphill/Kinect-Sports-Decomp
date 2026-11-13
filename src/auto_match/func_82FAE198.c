typedef struct Pair_82FAE198 { unsigned int key; unsigned int val; } Pair_82FAE198;
typedef struct Map_82FAE198 {
    char pad[0xa0];
    Pair_82FAE198 *begin;
    Pair_82FAE198 *end;
} Map_82FAE198;

unsigned int fn_82FAE198(Map_82FAE198 *m, unsigned int offset, unsigned char skipFirst)
{
    unsigned int target = m->begin->val + offset;
    Pair_82FAE198 *p = m->begin;
    if (skipFirst) {
        p++;
    }
    for (; p != m->end; p++) {
        if (p->val >= target)
            return p->val - m->begin->val;
    }
    return 0;
}
