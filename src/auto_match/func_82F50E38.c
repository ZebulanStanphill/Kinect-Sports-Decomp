extern int fn_8265CA20();
extern unsigned int lbl_82165B20;


unsigned int * fn_82F50E38(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82165B20;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

