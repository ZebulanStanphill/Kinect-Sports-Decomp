typedef struct Pair_82F95D48 { unsigned __int64 first; unsigned char second; } Pair_82F95D48;

Pair_82F95D48 *fn_82F95D48(Pair_82F95D48 *self, const unsigned __int64 *first, const unsigned char *second)
{
    self->first = *first;
    self->second = *second;
    return self;
}
