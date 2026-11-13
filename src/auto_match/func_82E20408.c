extern int fn_8265CA20();
extern int fn_82A2A958();
extern int fn_82E1F690();
extern int fn_82E200A0();
extern int fn_82E20100();
extern int fn_82E20270();
extern int fn_82F67988();


void fn_82E20408(void)

{
  unsigned int iVar2;
  unsigned int uVar1;
  
  iVar2 = fn_82E20270("TestCreate.tmp","w+",1);
  if (iVar2 == 0) {
    fn_82E1F690("T:\\VINCE\\");
    fn_82E200A0();
  }
  else {
    fn_82F67988();
    uVar1 = fn_82E20100("TestCreate.tmp",1);
    fn_82A2A958();
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8265CA20(uVar1);
    }
  }
  return;
}

