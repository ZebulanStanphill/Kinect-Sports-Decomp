/* std::_Construct(p, v): placement new (fn_82DA1B98 = operator new(size, where))
   of a 4-byte value; the new-expression's value is unused. */
extern void *fn_82DA1B98(unsigned int size, void *where);

void fn_82F93788(int *p, int *v)
{
    void *vp = p;
    int *m = (int *)fn_82DA1B98(4, vp);
    m ? (*m = *v, m) : 0;
}
