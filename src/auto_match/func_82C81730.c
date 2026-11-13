extern int fn_82C7F978();
extern int fn_82C80930();
extern int fn_82C80BA0();
extern int fn_82C80FF0();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


unsigned __int64
fn_82C81730(int param_1,unsigned __int64 param_2,unsigned int param_3,int *param_4,unsigned __int64 param_5,unsigned int param_6
             ,int *param_7)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int aiStack_54;
  
  if ((((param_4 != (int *)0x0) && (param_7 != (int *)0x0)) && (param_1 != 0)) &&
     (((param_2 & 0xffffffff) != 0 && ((param_5 & 0xffffffff) != 0)))) {
    if (*(int *)(param_1 + 0x128) == 0) {
      *(unsigned int *)(param_1 + 0x80) = 0;
      uVar1 = fn_82C80930();
      return uVar1;
    }
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0xfc) = 0;
    *(unsigned int *)(param_1 + 0x80) = 1;
    iStack_60 = 0;
    iStack_5c = 0;
    iStack_58 = 0;
    aiStack_54 = 0;
    iVar2 = fn_82C80BA0(param_1,param_2,0);
    if (iVar2 != 0) {
      lVar3 = (__int64)((int)param_6 >> 1) + (unsigned __int64)((int)param_6 < 0 && (param_6 & 1) != 0);
      lVar4 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0);
      uVar1 = fn_82C7F978(param_1,*(unsigned int *)(param_1 + 0x130),lVar4,&iStack_60,
                            *(unsigned int *)(param_1 + 0x134),lVar3,&iStack_58);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = fn_82C80FF0(param_1,param_5,0);
      if (iVar2 != 0) {
        *(unsigned int *)(param_1 + 0x5c) = 1;
        *(unsigned int *)(param_1 + 0xfc) = 1;
        iVar2 = fn_82C80BA0(param_1,param_2,1);
        if (iVar2 != 0) {
          uVar1 = fn_82C7F978(param_1,*(unsigned int *)(param_1 + 0x130),lVar4,&iStack_5c,
                                *(unsigned int *)(param_1 + 0x134),lVar3,&aiStack_54);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar2 = fn_82C80FF0(param_1,param_5,1);
          if (iVar2 != 0) {
            *param_4 = iStack_5c + iStack_60;
            *param_7 = aiStack_54 + iStack_58;
            return uVar1;
          }
        }
      }
    }
  }
  return 1;
}

