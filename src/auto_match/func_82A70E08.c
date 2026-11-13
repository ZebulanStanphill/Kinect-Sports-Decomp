extern int fn_82A70960();
extern int fn_82A70D38();


void fn_82A70E08(int param_1,__int64 param_2)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = (int)param_2;
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        if (*(int *)(param_1 + 0xd0) < iVar2) {
          uVar3 = (((__int64)
                    (int)((__int64)(int)(iVar2 - *(unsigned int *)(param_1 + 0xd0)) *
                          (__int64)*(int *)(param_1 + 0xcc) >> 0x14) +
                   (unsigned __int64)*(unsigned int *)(param_1 + 200)) - param_2) +
                  (unsigned __int64)*(unsigned int *)(param_1 + 0xd0);
        }
        else {
          uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 200);
        }
      }
      else {
        lVar1 = fn_82A70D38(param_1,param_2);
        if (*(int *)(param_1 + 0xd0) < (int)lVar1) {
          uVar3 = ((__int64)
                   (int)((__int64)(int)((int)lVar1 - *(unsigned int *)(param_1 + 0xd0)) *
                         (__int64)*(int *)(param_1 + 0xcc) >> 0x14) +
                   (unsigned __int64)*(unsigned int *)(param_1 + 200) + (unsigned __int64)*(unsigned int *)(param_1 + 0xd0)) -
                  param_2;
        }
        else {
          uVar3 = (lVar1 - param_2) + (unsigned __int64)*(unsigned int *)(param_1 + 200);
        }
      }
      goto code_r0x82a70f68;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar1 = fn_82A70D38(param_1,param_2);
      uVar3 = lVar1 - param_2;
      goto code_r0x82a70f68;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(param_1 + 0xd0) < iVar2) {
    uVar3 = (((__int64)
              (int)((__int64)(int)(iVar2 - *(unsigned int *)(param_1 + 0xd0)) *
                    (__int64)*(int *)(param_1 + 0xcc) >> 0x14) +
             (unsigned __int64)*(unsigned int *)(param_1 + 200)) - param_2) + (unsigned __int64)*(unsigned int *)(param_1 + 0xd0);
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 200);
  }
code_r0x82a70f68:
  if ((int)uVar3 < -0x4000000) {
    uVar3 = 0xfffffffffc000000;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = 0x3ffffff;
  }
  fn_82A70960(0xffffffff82090e6c,uVar3);
  return;
}

