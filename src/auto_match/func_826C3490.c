extern int fn_826824B0();
extern int fn_826A1D48();
extern int fn_826AB6F8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_826C3490(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  unsigned char bStack_28;
  
  (**(int (***)())(*(int *)(param_1 + 0x10) + 0x34))(param_1 + 0x10);
  fn_826AB6F8(&iStack_30,param_3 + 0x10,param_2);
  iVar1 = 0;
  if (iStack_30 != 0) {
    fn_826A1D48(param_1 + 0x10,param_2,&iStack_30);
    iVar1 = iStack_30;
  }
  if (((bStack_28 & 2) == 0) && (iVar1 != 0)) {
    fn_826824B0();
  }
  iStack_30 = 0;
  if (((bStack_28 & 1) == 0) && (iStack_2c != 0)) {
    fn_826824B0();
  }
  return;
}

