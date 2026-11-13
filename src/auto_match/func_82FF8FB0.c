extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern int fn_82A1E658();


void fn_82FF8FB0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar1 = fn_82A1E0C0(0,param_3[2],param_1,param_2,4,0);
  *param_4 = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82A1E508(uVar1,param_3[1]);
    uVar3 = *param_4;
    if (iVar2 != -1) {
      iVar2 = fn_82A1E338(uVar3,*param_3);
      uVar3 = *param_4;
      if (iVar2 != 0) {
        iVar2 = fn_82A1E2C0(uVar3);
        if (iVar2 != -1) {
          return;
        }
        uVar3 = *param_4;
      }
    }
    fn_82A1E658(uVar3);
  }
  *param_4 = 0;
  return;
}

