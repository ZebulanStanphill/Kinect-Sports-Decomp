typedef struct Iter { unsigned int a; unsigned int b; } Iter;
typedef struct Src { unsigned int a; unsigned int pad[3]; unsigned int n; } Src;
extern void fn_8288B918(Iter *it, unsigned int n);

Iter *fn_8288D188(Iter *it, Src *s)
{
    unsigned int a = s->a;
    it->b = 0;
    it->a = a;
    if (s->n == 0) {
        return it;
    }
    fn_8288B918(it, s->n);
    return it;
}
