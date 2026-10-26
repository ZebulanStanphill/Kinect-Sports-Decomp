/* weak_ptr::lock()-style copy into a shared_ptr return slot. The original
   loads the source fields before zeroing the slot (the return slot is known
   not to alias the source), which __restrict reproduces. */
typedef struct { void *ptr; void *rep; } SharedPtr;
typedef struct { int pad[1]; void *ptr; void *rep; } Owner;

extern void fn_82517978(SharedPtr *self, void *ptr, void *rep, int throwFlag);

SharedPtr *fn_8229AE10(SharedPtr *__restrict ret, Owner *o)
{
  ret->ptr = 0;
  ret->rep = 0;
  fn_82517978(ret, o->ptr, o->rep, 0);
  return ret;
}
