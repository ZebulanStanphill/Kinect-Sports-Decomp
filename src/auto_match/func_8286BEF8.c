extern unsigned int *auStack_40;
extern int fn_82864898();
extern int fn_82864988();


unsigned __int64 fn_8286BEF8(unsigned __int64 param_1,unsigned __int64 param_2,char param_3,int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_40 [48];
  
  if (param_3 == '\0') {
    uVar2 = 0xffffffff82021438;
  }
  else {
    uVar2 = 0xffffffff8202141c;
  }
  fn_82864988(auStack_40,uVar2);
  iVar1 = (**(int (***)())(*param_4 + 0xc))(param_4,auStack_40);
  if (iVar1 < 0) {
    uVar2 = 0xffffffffa00f0000;
  }
  else {
    uVar2 = 0x200f0000;
  }
  fn_82864898(auStack_40);
  return uVar2;
}

