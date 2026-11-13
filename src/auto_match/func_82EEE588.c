extern int fn_82EEDD00();


unsigned __int64 fn_82EEE588(int param_1,short param_2,short *param_3,int param_4)

{
  short sVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int aiStack_50;
  
  uVar2 = *(unsigned int *)(param_1 + 0x70);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uVar5 = 0;
    *param_3 = 0;
    if (uVar2 != 0) {
      do {
        aiStack_50 = 0;
        uVar3 = fn_82EEDD00(param_1,uVar5,&aiStack_50);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (aiStack_50 == 0) {
          return 0xffffffffc00d36bb;
        }
        if ((param_2 == -1) || (param_2 == *(short *)(aiStack_50 + 0x14))) {
          if (param_4 == 0) {
            iVar4 = *(int *)(aiStack_50 + 8);
          }
          else {
            iVar4 = *(int *)(aiStack_50 + 0xc);
          }
          if (iVar4 == 0) {
            sVar1 = *param_3;
            *param_3 = sVar1 + 1;
            if (*(int *)(aiStack_50 + 0x38) != 0) {
              *param_3 = sVar1 + 2;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (unsigned __int64)uVar2);
    }
  }
  return uVar3;
}

