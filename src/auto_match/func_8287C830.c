extern void fn_8265CA20(void *);
extern unsigned int lbl_82022F38;


unsigned int * fn_8287C830(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82022F38;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

