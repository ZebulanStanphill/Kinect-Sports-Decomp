extern int fn_8265C990();
extern void fn_82C12D00(void *);
extern unsigned int lbl_820ECD28;


unsigned int * fn_82C09888(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820ECD28;
  fn_82C12D00(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8038);
  }
  return self;
}

