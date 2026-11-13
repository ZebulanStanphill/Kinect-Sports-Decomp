typedef struct Vec_82F8FCD8 {
    int pad0;
    unsigned int first;
    unsigned int last;
} Vec_82F8FCD8;

typedef struct Iter_82F8FCD8 {
    Vec_82F8FCD8 *cont;
    unsigned int ptr;
} Iter_82F8FCD8;

extern void fn_82668E70(Iter_82F8FCD8 *self);

Iter_82F8FCD8 *fn_82F8FCD8(Iter_82F8FCD8 *self, unsigned int ptr, Vec_82F8FCD8 *cont)
{
    fn_82668E70(self);
    if (!(cont != 0 && cont->first <= ptr && ptr <= cont->last))
        __debugbreak();
    self->cont = cont;
    self->ptr = ptr;
    return self;
}
