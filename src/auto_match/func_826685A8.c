/* allocator::construct(p, v): placement new (fn_82DA1B98 = operator new(size, where))
   followed by the copy constructor; the new-expression's value is unused. */
extern void *fn_82DA1B98(unsigned int size, void *where);
extern void *fn_82668608(void *self, const void *src);

void fn_826685A8(void *al, void *p, const void *v)
{
    void *m = fn_82DA1B98(8, p);
    m ? fn_82668608(m, v) : 0;
}
