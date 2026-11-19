extern int fn_8265C990();
extern void fn_82C12D00(void *);
extern unsigned int lbl_820ECD78;


unsigned int * fn_82C0BAE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820ECD78;
  fn_82C12D00(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8037);
  }
  return self;
}

