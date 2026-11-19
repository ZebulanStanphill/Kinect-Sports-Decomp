extern int fn_82279AF0();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern unsigned int lbl_821BC360;


unsigned int * fn_82469B90(unsigned int *self,unsigned int flags)

{
  int uVar1;
  
  *self = &lbl_821BC360;
  uVar1 = fn_8266F6B8();
  fn_82469C10(self,uVar1);
  uVar1 = fn_8266F6B8();
  fn_82469CD8(self,uVar1);
  fn_82279AF0(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

