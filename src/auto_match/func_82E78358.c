extern int fn_82E4FE40();
extern int fn_82E77258();
extern unsigned int lbl_8215F018;


unsigned int * fn_82E78358(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215F018;
  if (self[1] == 0) {
    fn_82E77258(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

