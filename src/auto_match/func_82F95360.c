typedef struct Pair_82F95360 { unsigned int first; unsigned int second; } Pair_82F95360;

Pair_82F95360 *fn_82F95360(Pair_82F95360 *self, const unsigned int *first, const unsigned int *second)
{
    self->first = *first;
    self->second = *second;
    return self;
}
