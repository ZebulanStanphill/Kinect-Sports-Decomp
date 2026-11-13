extern int fn_82DDDED0();
extern int fn_82DE2BC8();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82142CD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82DDDF50(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  *param_5 = 0;
  uVar2 = lbl_82142CD0;
  uVar1 = lbl_82134508;
  *param_4 = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  iVar4 = fn_82DDDED0(param_2,param_3,param_1,param_1 + 1);
  *(int *)(param_2 + 0x44) = iVar4;
  if (iVar4 == 1) {
    uVar3 = fn_82DE2BC8(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

