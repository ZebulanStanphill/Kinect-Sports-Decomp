struct Iter_82667A18 { unsigned v; Iter_82667A18() {} };
struct Container_82667A18 { Iter_82667A18 insert(unsigned *x); };
extern "C" unsigned *fn_8265D5A8(void *);

extern "C" Iter_82667A18 *fn_826670A0(Iter_82667A18 *self, Container_82667A18 *c, void *x)
{
    *self = c->insert(fn_8265D5A8(x));
    return self;
}
