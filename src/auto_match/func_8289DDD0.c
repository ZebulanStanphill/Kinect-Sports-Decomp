long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct RefCountBase_8289DDD0 {
  void *vt;
  long uses;
  long weaks;
} RefCountBase_8289DDD0;

/* std::tr1::_Ref_count_base::_Incref_nz: take a use count unless it is already zero
   (weak_ptr::lock). */
unsigned char fn_8289DDD0(RefCountBase_8289DDD0 *self)
{
  for (;;) {
    long count = *(volatile long *)&self->uses;
    if (count == 0) {
      return 0;
    }
    if (_InterlockedCompareExchange(&self->uses, count + 1, count) == count) {
      return 1;
    }
  }
}
