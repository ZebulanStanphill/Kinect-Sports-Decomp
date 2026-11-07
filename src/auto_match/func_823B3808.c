typedef struct Storage_823B3808 { unsigned __int64 words[3]; } Storage_823B3808;
typedef struct Functor_823B3808 { unsigned int handler, pad; Storage_823B3808 storage; } Functor_823B3808;
typedef void Handler_823B3808(Storage_823B3808 *,Storage_823B3808 *,int);
Functor_823B3808 *fn_823B3808(Functor_823B3808 *self,Functor_823B3808 *src) {
 unsigned int handler;
 self->handler=0;
 handler=src->handler;
 if(handler) {
  self->handler=handler;
  if(handler&1) self->storage=src->storage;
  else (**(Handler_823B3808 **)(handler&~1U))(&src->storage,&self->storage,0);
 }
 return self;
}
