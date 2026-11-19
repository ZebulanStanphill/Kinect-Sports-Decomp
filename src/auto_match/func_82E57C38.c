extern int fn_82E4FE40();
extern int fn_82F37588();
extern unsigned int lbl_82162BB0;


unsigned int * fn_82E57C38(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82162BB0;
  if (self[1] == 0) {
    fn_82F37588(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

