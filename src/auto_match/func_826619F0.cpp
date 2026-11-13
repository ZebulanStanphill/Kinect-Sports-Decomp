struct Iter_826619F0 {
    void *node;
    Iter_826619F0(const Iter_826619F0 &other) : node(other.node) {}
};
struct Tree_826619F0 {
    Iter_826619F0 InsertAt(void *where, void *node);
};
extern "C" void *fn_8265D5A8(void *p);
extern "C" void *fn_82662D00(Tree_826619F0 *self, void *val);

extern "C" Iter_826619F0 fn_826619F0(Tree_826619F0 *self, void *where, void *val)
{
    return self->InsertAt(where, fn_82662D00(self, fn_8265D5A8(val)));
}
