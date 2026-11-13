extern int _GetUnwindContext();
extern int _MoveContext();
extern int fn_82F69420();
extern int _IsExceptionObjectToBeDestroyed();
extern int _FindAndUnlinkFrame();
extern int _getptd();
extern int fn_82F80D88();
extern int fn_82F812C0();


unsigned __int64
__InternalCxxFrameHandler(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  
  if ((param_1[1] & 0x66U) == 0) {
    if (*(int *)(param_5 + 0xc) != 0) {
      if ((((*param_1 == -0x1f928c9d) && (2 < (unsigned int)param_1[4])) && (0x19930522 < (unsigned int)param_1[5]))
         && (*(int (***)())(param_1[7] + 8) != (int (**)())0x0)) {
        uVar3 = (**(int (***)())(param_1[7] + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 0xff);
        return uVar3;
      }
      fn_82F80D88(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((*(int *)(param_5 + 4) != 0) && ((int)param_6 == 0)) {
    if (((param_1[1] & 0x20U) == 0) || (iVar4 = _GetUnwindContext(), iVar4 == 0)) {
      fn_82F69420(param_2,param_4,param_5);
      if (((*(int *)(param_5 + 0xc) != 0) && (iVar4 = *(int *)(param_4[2] + 4), iVar4 != 0)) &&
         (puVar2 = *(unsigned int **)(iVar4 + 8), puVar2 != (unsigned int *)0x0)) {
        _FindAndUnlinkFrame(puVar2);
        iVar5 = _IsExceptionObjectToBeDestroyed(*puVar2);
        if ((iVar5 != 0) && ((int (**)())puVar2[1] != (int (**)())0x0)) {
          (*(int (**)())puVar2[1])(*puVar2);
          *puVar2 = 0;
        }
        *(unsigned int *)(iVar4 + 8) = 0;
      }
    }
    else {
      iVar4 = _getptd();
      if (*(int *)(iVar4 + 0x8c) == 0) {
        fn_82F812C0();
      }
      iVar4 = _getptd();
      _MoveContext(*(unsigned int *)(iVar4 + 0x8c),param_3);
      uVar1 = *param_4;
      iVar4 = _getptd();
      *(unsigned __int64 *)(*(int *)(iVar4 + 0x8c) + 0x30) = (unsigned __int64)uVar1;
      uVar1 = param_4[1];
      iVar4 = _getptd();
      *(unsigned __int64 *)(*(int *)(iVar4 + 0x8c) + 0x38) = (unsigned __int64)uVar1;
      uVar1 = param_4[2];
      iVar4 = _getptd();
      *(unsigned __int64 *)(*(int *)(iVar4 + 0x8c) + 0x40) = (unsigned __int64)uVar1;
      uVar3 = _GetUnwindContext();
      _MoveContext(param_3,uVar3);
    }
  }
  return 1;
}

