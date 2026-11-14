typedef struct Pair_82415008 {
    int pad0;
    unsigned int *first;    /* 0x04 */
    unsigned int *second;   /* 0x08 */
} Pair_82415008;
static __forceinline unsigned char SumIsTen(Pair_82415008 *p)
{
    return p->first != 0 && p->second != 0 && *p->second + *p->first == 10;
}
static __forceinline unsigned char FirstIsTen(Pair_82415008 *p)
{
    return p->first != 0 && *p->first == 10;
}
unsigned char fn_82415008(Pair_82415008 *self)
{
    return (self->first != 0 && self->second != 0) || SumIsTen(self) || FirstIsTen(self);
}
