typedef struct { unsigned int count; unsigned int words[1]; } BitData_82ACC398;
typedef struct { unsigned int bits; } BitSet_82ACC398;
typedef struct { int owner; BitSet_82ACC398 set; } Obj_82ACC398;
extern void fn_82ACBB48(BitSet_82ACC398 *s, int n);
extern void *memset(void *, int, unsigned int);
static __forceinline void BitSetClear(BitSet_82ACC398 *s)
{
    if ((~s->bits & 1) == 0) {
        s->bits = 1;
    } else {
        BitData_82ACC398 *d = (BitData_82ACC398 *)s->bits;
        memset(d->words, 0, d->count * 4);
    }
}
void fn_82ACC398(Obj_82ACC398 *o, int owner)
{
    o->owner = owner;
    o->set.bits = 1;
    fn_82ACBB48(&o->set, 0x100);
    BitSetClear(&o->set);
}
