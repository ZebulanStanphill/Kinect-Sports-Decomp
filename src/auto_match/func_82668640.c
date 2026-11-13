typedef struct Pair_82668640 { unsigned int first; unsigned int second; } Pair_82668640;

Pair_82668640 *fn_82668640(Pair_82668640 *self, const Pair_82668640 *o)
{
    self->first = o->first;
    self->second = o->second;
    return self;
}
