typedef unsigned char bool;
#define true 1


unsigned __int64 fn_82997D98(int param_1,unsigned int *param_2,unsigned int param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      bVar1 = true;
      iVar3 = 0;
      lVar5 = 4;
      puVar4 = param_2;
      do {
        if (*(int *)((param_1 - (int)param_2) + (int)puVar4) !=
            *(int *)((uVar2 * 4 + iVar3) * 4 + -0x7cea41c0)) {
          bVar1 = (bool)((unsigned __int64)*puVar4 == 0xffffffffffffffff & bVar1);
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (bVar1) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}

