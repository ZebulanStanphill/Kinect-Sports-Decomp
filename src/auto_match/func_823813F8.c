extern int fn_823737B8();
extern int fn_823814C0();
extern int fn_823815D0();
extern unsigned int lbl_831CB188;


void fn_823813F8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  int param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = fn_823737B8(*(unsigned int *)(param_1 + 4),param_4);
  if (param_6 == 0) {
    if (iVar1 != 0) goto LAB_8238145c;
    uVar2 = 4;
  }
  else {
    uVar2 = 5;
  }
  fn_823815D0(param_1,param_4,param_5,uVar2);
LAB_8238145c:
  if (param_2 == 0xc) {
    uVar2 = 2;
    param_3 = 0xffffffffffffffff;
  }
  else {
    iVar1 = fn_823814C0(param_1,param_4);
    if (*(int *)(&lbl_831CB188 + iVar1 * 0x10) == 0) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0x10;
    }
  }
  fn_823815D0(param_1,(int)param_4 == 0,param_3,uVar2);
  return;
}

