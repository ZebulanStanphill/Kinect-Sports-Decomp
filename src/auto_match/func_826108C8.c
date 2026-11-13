/* Takes a shared_ptr copy of the owner (fn_82522588 copy-ctor), atomically increments its counter at +0x1dc,
   then releases the copy (fn_822315A0 on the rep). */
typedef struct Owner_826108C8 {
    char pad0[0x1dc];
    long count;                     /* 0x1dc */
} Owner_826108C8;

typedef struct Ptr_826108C8 {
    Owner_826108C8 *ptr;
    void *rep;
} Ptr_826108C8;

typedef struct Self_826108C8 {
    int pad0;
    Ptr_826108C8 owner;             /* 0x04 */
} Self_826108C8;

extern long _InterlockedIncrement(long volatile *);
extern Ptr_826108C8 *fn_82522588(Ptr_826108C8 *dst, Ptr_826108C8 *src);
extern void fn_822315A0(void *rep);

int fn_826108C8(Self_826108C8 *self)
{
    Ptr_826108C8 p;

    fn_82522588(&p, &self->owner);
    _InterlockedIncrement(&p.ptr->count);
    if (p.rep != 0)
        fn_822315A0(p.rep);
    return 0;
}
