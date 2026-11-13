typedef struct Storage_822DBCB8 { unsigned __int64 words[3]; } Storage_822DBCB8;
typedef struct Functor_822DBCB8 { unsigned int handler, pad; Storage_822DBCB8 storage; } Functor_822DBCB8;
typedef void Handler_822DBCB8(Storage_822DBCB8 *, Storage_822DBCB8 *, int);
typedef struct Obj_822DBCB8 {
  Functor_822DBCB8 func;
  int a20;
  int a24;
  int a28;
  int a2c;
  unsigned char a30;
} Obj_822DBCB8;

static __forceinline void FunctorCopy_822DBCB8(Functor_822DBCB8 *self, Functor_822DBCB8 *src)
{
  unsigned int handler;
  self->handler = 0;
  handler = src->handler;
  if (handler) {
    self->handler = handler;
    if (handler & 1) self->storage = src->storage;
    else (**(Handler_822DBCB8 **)(handler & ~1U))(&src->storage, &self->storage, 0);
  }
}

Obj_822DBCB8 *fn_822DBCB8(Obj_822DBCB8 *self, Obj_822DBCB8 *src)
{
  FunctorCopy_822DBCB8(&self->func, &src->func);
  self->a20 = src->a20;
  self->a24 = src->a24;
  self->a28 = src->a28;
  self->a2c = src->a2c;
  self->a30 = 0;
  return self;
}
