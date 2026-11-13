extern int fn_82BE6638();
extern int fn_82BF2110();
extern int fn_82BF2298();
extern int fn_82BF23F8();
extern int fn_82BF2608();
extern int memcpy();
extern int memset();


unsigned __int64 fn_82BF26B0(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (((((param_2 & 0xffffffff) == 0) || (iVar2 = (int)param_3, iVar2 < 0)) ||
      ((*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28) + iVar2 &&
       (iVar1 = fn_82BF2608(), iVar1 != 0)))) || (*(int *)(param_1 + 0x24) == 0)) {
    uVar5 = 1;
  }
  else {
    memcpy(*(int *)(param_1 + 0x24),param_2,param_3);
    lVar3 = 0;
    param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28) + param_3;
    lVar4 = 0;
    *(int *)(param_1 + 0x28) = (int)param_3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar2;
    if (0 < param_3) {
      do {
        iVar2 = (int)lVar4;
        if (lVar3 == 0) {
          if (*(char *)(*(int *)(param_1 + 0x20) + iVar2) != '\r') goto LAB_82bf27b0;
          lVar3 = 1;
        }
        else {
          if (lVar3 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x20) + iVar2) == '\n') {
              lVar3 = 2;
              goto LAB_82bf27b4;
            }
          }
          else if (lVar3 == 2) {
            if (*(char *)(*(int *)(param_1 + 0x20) + iVar2) == '\r') {
              lVar3 = 3;
              goto LAB_82bf27b4;
            }
          }
          else if ((lVar3 == 3) && (*(char *)(*(int *)(param_1 + 0x20) + iVar2) == '\n')) {
            lVar4 = lVar4 + 1;
            *(int *)(param_1 + 0x28) = (int)lVar4;
            *(unsigned int *)(param_1 + 0x30) = 1;
            if (0 < lVar4) {
              *(unsigned char *)(*(int *)(param_1 + 0x20) + (int)lVar4 + -1) = 0;
            }
            iVar2 = fn_82BF2110(param_1);
            if (iVar2 != 0) {
              if (*(int *)(param_1 + 0x34) != 0) {
                uVar5 = fn_82BF2298();
                return uVar5;
              }
              uVar5 = fn_82BF23F8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x20) + lVar4,
                                    param_3 - lVar4);
              return uVar5;
            }
            fn_82BE6638(*(unsigned int *)(param_1 + 4),6);
            *(unsigned int *)(param_1 + 0x30) = 0;
            *(unsigned int *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
            memset(*(unsigned int *)(param_1 + 0x20),0,*(unsigned int *)(param_1 + 0x2c));
          }
LAB_82bf27b0:
          lVar3 = 0;
        }
LAB_82bf27b4:
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(param_1 + 0x28));
    }
  }
  return uVar5;
}

