#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_82A2B748();
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_38;
extern unsigned int uStack_70;


unsigned __int64 fn_82A29B68(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_70;
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [40];
  unsigned __int64 uStack_38;
  
  if (param_3 == (unsigned int *)0x0) {
    uVar3 = (unsigned __int64)param_2;
  }
  else {
    uStack_70 = CONCAT44(*param_3,param_2);
    uVar3 = uStack_70;
  }
  if (param_4 != 0) {
    if ((param_4 == 1) || (2 < param_4)) {
      iVar2 = (**(int (***)())(lbl_8315D3D0 + 0x20))(param_1,auStack_68,&uStack_70,8,0xe);
      uStack_38 = uStack_70;
    }
    else {
      iVar2 = (**(int (***)())(lbl_8315D3D0 + 0x20))(param_1,auStack_68,auStack_60,0x38,0x22);
    }
    if (iVar2 < 0) {
      fn_82A2B760();
      return 0xffffffffffffffff;
    }
    uVar3 = uStack_38 + uVar3;
  }
  uStack_70 = uVar3;
  if ((__int64)uVar3 < 0) {
    uVar1 = 0x83;
  }
  else {
    if ((param_3 != (unsigned int *)0x0) || ((uVar3 & 0x7fffffff00000000) == 0)) {
      iVar2 = (**(int (***)())(lbl_8315D3D0 + 0x24))(param_1,auStack_68,&uStack_70,8,0xe);
      if (-1 < iVar2) {
        if (param_3 != (unsigned int *)0x0) {
          *param_3 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
        }
        if ((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) == -1) {
          thunk_FUN_82a2b748(0);
        }
        return uStack_70 & 0xffffffff;
      }
      fn_82A2B760();
      if (param_3 == (unsigned int *)0x0) {
        return 0xffffffffffffffff;
      }
      *param_3 = 0xffffffff;
      return 0xffffffffffffffff;
    }
    uVar1 = 0x57;
  }
  fn_82A2B748(uVar1);
  return 0xffffffffffffffff;
}

