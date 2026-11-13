extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF47B0();
extern unsigned int lbl_821333DC;
extern unsigned int lbl_8317F2DC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int *
fn_82CF4908(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  __int64 lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lbl_8317F2DC = lbl_821333DC;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  iVar1 = fn_82CE5410();
  if ((int)(param_1[5] & 0x3fffffff) < (int)param_2) {
    lVar2 = ((unsigned __int64)(unsigned int)param_1[5] & 0x3fffffff) << 1;
    if ((int)lVar2 <= (int)param_2) {
      lVar2 = param_2;
    }
    fn_82CE6310(*(unsigned int *)(iVar1 + 0x10),param_1 + 3,lVar2,1);
  }
  param_1[8] = "Physics";
  fn_82CF47B0(param_1,param_3,param_4);
  return param_1;
}

