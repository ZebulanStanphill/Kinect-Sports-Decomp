extern int fn_8248F8E8();
extern int fn_82499CB8();
extern int fn_82558B08();
extern unsigned int lbl_821BEFC0;


unsigned int * fn_82499498(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEFC0;
  fn_82558B08();
  fn_82499CB8(self);
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

