typedef struct Key_82FF7EB0 {
    unsigned int a;
    unsigned int b;
} Key_82FF7EB0;

typedef struct Elem_82FF7EB0 {
    Key_82FF7EB0 key;
    int value;
} Elem_82FF7EB0;

typedef struct Range_82FF7EB0 {
    Elem_82FF7EB0 *begin;
    Elem_82FF7EB0 *end;
} Range_82FF7EB0;

static __forceinline unsigned char KeyEq_82FF7EB0(const Key_82FF7EB0 *x, const Key_82FF7EB0 *y)
{
    return x->a == y->a && x->b == y->b;
}

void fn_82FF7EB0(Elem_82FF7EB0 **it, Range_82FF7EB0 *range, Key_82FF7EB0 key)
{
    Elem_82FF7EB0 *end = range->end;

    for (*it = range->begin; *it != end; ++*it) {
        if (KeyEq_82FF7EB0(&(*it)->key, &key))
            return;
    }
}
