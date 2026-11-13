typedef struct { unsigned v; } Tmp_82668558;
extern void *fn_8265D5A8(void *);
extern void fn_82668670(Tmp_82668558 *self, void *x);
extern void fn_826685A8(void *object, void *where, Tmp_82668558 *value);

void fn_82668558(void *object, void *where, void *x)
{
    Tmp_82668558 tmp;
    fn_82668670(&tmp, fn_8265D5A8(x));
    fn_826685A8(object, where, &tmp);
}
