/* allocator::construct(p, v): placement new (fn_82DA1B98 = operator new(size, where))
   of a 12-byte value; the new-expression's value is unused. */
typedef struct Value_82667948 {
    int v[3];
} Value_82667948;

extern void *fn_82DA1B98(unsigned int size, void *where);

void fn_82667948(void *al, void *p, Value_82667948 *v)
{
    Value_82667948 *m = (Value_82667948 *)fn_82DA1B98(12, p);
    m ? (*m = *v, m) : 0;
}
