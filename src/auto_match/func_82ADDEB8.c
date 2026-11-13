typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ADD198();


unsigned __int64 fn_82ADDEB8(int param_1,int param_2,unsigned int param_3)

{
  bool bVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 *puVar7;
  
  if ((*(unsigned int *)(param_2 + 8) & 0x1e) != 0x1e) {
    for (puVar2 = *(unsigned int **)(param_2 + 4); puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2]) {
      uVar5 = puVar2[4];
      if (((uVar5 != 0) && ((*(unsigned int *)(uVar5 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar2 & 0xe000000) != 0)) goto LAB_82addf24;
    }
    uVar5 = 0;
LAB_82addf24:
    if (uVar5 == 0) {
      puVar7 = *(unsigned __int64 **)(*(int *)(param_1 + 0x2a8) + param_3 * 4);
      iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 0x50);
      if (puVar7 == (unsigned __int64 *)0x0) {
        bVar1 = (1L << (param_3 & 0x3f) & *(unsigned __int64 *)((param_3 >> 3 & 0x1ffffff8) + iVar3)) == 0;
      }
      else {
        puVar6 = puVar7 + *(int *)(param_1 + 0x2a0);
        if (puVar7 < puVar6) {
          iVar3 = iVar3 - (int)puVar7;
          do {
            if ((*(unsigned __int64 *)(iVar3 + (int)puVar7) & *puVar7) != 0) {
              bVar1 = true;
              goto LAB_82addf84;
            }
            puVar7 = puVar7 + 1;
          } while (puVar7 < puVar6);
        }
        bVar1 = false;
LAB_82addf84:
        bVar1 = !bVar1;
      }
      if (bVar1) {
        uVar5 = *(unsigned int *)(*(int *)(param_2 + 0x1c) + 0x14);
        while( true ) {
          if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
            return 1;
          }
          if (((*(unsigned int *)(uVar5 + 8) >> 0x17 & 1) != 0) &&
             (uVar4 = fn_82ADD198(param_1,*(unsigned short *)(uVar5 + 0x12)), param_3 == uVar4))
          break;
          uVar5 = *(unsigned int *)((uVar5 & 0xfffffffe) + 0x28);
        }
      }
    }
  }
  return 0;
}

