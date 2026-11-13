/* allocator::construct(p, forward(v)): placement new (fn_82DA1B98 = operator new(size, where))
   followed by the constructor; the new-expression's value is unused. */
extern void *fn_82DA1B98(unsigned int size, void *where);
extern void *fn_8265D5A8(void *);
extern void *fn_82668670(void *self, void *src);

void fn_82663120(void *al, void *p, void *v)
{
    void *m = fn_82DA1B98(8, p);
    m ? fn_82668670(m, fn_8265D5A8(v)) : 0;
}
