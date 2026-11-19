extern int fn_82E4FE40();
extern int fn_82EE0A68();
extern unsigned int lbl_8215FA48;


unsigned int * fn_82EF2DE8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215FA48;
  if (self[1] == 0) {
    fn_82EE0A68(self,0);
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

