typedef struct Node Node;
typedef struct { Node *ptr; } Iter;
typedef struct { Iter first; Iter second; } Pair;
extern void fn_8258EBF8(Pair *out, void *tree, void *key);
extern void fn_8258E7C0(Iter *it);
extern void fn_8258E6D8(Iter *out, void *tree, Iter first, Iter last);
extern void fn_82230300(void *key, int a, int b);

static void distance(Iter first, Iter last)
{
    while (first.ptr != last.ptr)
        fn_8258E7C0(&first);
}
static void erase_range(void *tree, Iter first, Iter last)
{
    Iter res;
    fn_8258E6D8(&res, tree, first, last);
}
void fn_8258D8D8(char *p, void *key)
{
    void *tree = p + 0x1b0;
    Iter first, last;
    {
    Pair where;
    fn_8258EBF8(&where, tree, key);
    first = where.first; last = where.second;
    }
    distance(first, last);
    erase_range(tree, first, last);
    fn_82230300(key, 1, 0);
}
