extern int fn_82E23B80();
extern unsigned int lbl_82153A68;


unsigned int * fn_82E49458(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82153A68;
  if ((flags & 1) != 0) {
    fn_82E23B80();
  }
  return self;
}

