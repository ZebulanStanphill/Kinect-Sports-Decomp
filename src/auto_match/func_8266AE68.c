/* allocator<T*>::construct(p, v): placement new (fn_82DA1B98 = operator new(size, where))
   of a 4-byte value; the new-expression's value is unused. */
extern void *fn_82DA1B98(unsigned int size, void *where);

void fn_8266AE68(void *al, void *p, int *v)
{
    int *m = (int *)fn_82DA1B98(4, p);
    m ? (*m = *v, m) : 0;
}
