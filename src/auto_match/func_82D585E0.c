extern unsigned int fn_82D585C0;
extern unsigned int fn_82D585D0;
extern unsigned int fn_82D585D8;
extern unsigned int fn_82D74718;
extern unsigned int fn_82D74720;
extern unsigned int fn_82D74728;
extern unsigned int fn_82D74730;

/* WARNING: Inlined function: __savegprlr_29 */

void fn_82D585E0(int param_1)

{
  int iVar1;
  unsigned char *puVar2;
  int iVar3;
  __int64 lVar4;
  
  *(unsigned int *)(param_1 + 400) = 1;
  puVar2 = (unsigned char *)(param_1 + 0xeb0);
  *(unsigned int *)(param_1 + 0xea0) = 1;
  iVar3 = 0;
  do {
    lVar4 = 0x20;
    do {
      if (*(int *)(param_1 + 0x1e30) != 0) {
        *(unsigned char *)(iVar3 + *(int *)(param_1 + 0x1e30) + 2) = 100;
        *(unsigned char *)(*(int *)(param_1 + 0x1e34) + iVar3 + 2) = 100;
        *(unsigned char *)(*(int *)(param_1 + 0x1e38) + iVar3 + 2) = 100;
        *(unsigned char *)(*(int *)(param_1 + 0x1e3c) + iVar3 + 2) = 100;
      }
      puVar2[-0xd10] = 0;
      iVar3 = iVar3 + 3;
      *puVar2 = 0;
      puVar2[-0x910] = 0;
      puVar2[0x400] = 0;
      puVar2 = puVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  } while (iVar3 < 0xc00);
  *(int (***)())(param_1 + 0x9a0) = fn_82D74730;
  *(int (***)())(param_1 + 0x9a4) = fn_82D74720;
  *(int (***)())(param_1 + 0x9a8) = fn_82D74718;
  *(int (***)())(param_1 + 0x9ac) = fn_82D74728;
  *(unsigned char *)(param_1 + 0x9b0) = 0;
  *(unsigned char *)(param_1 + 0x9b1) = 1;
  *(unsigned int *)(param_1 + 0x16b8) = 0;
  *(int (***)())(param_1 + 0x16b0) = fn_82D585C0;
  *(int (***)())(param_1 + 0x16b4) = fn_82D585D0;
  *(unsigned int *)(param_1 + 0x16bc) = 0;
  *(unsigned int *)(param_1 + 0x16c0) = 0;
  *(unsigned int *)(param_1 + 0x16c4) = 0;
  *(unsigned int *)(param_1 + 0x16c8) = 0;
  *(unsigned int *)(param_1 + 0x16cc) = 0;
  *(unsigned int *)(param_1 + 0x16d8) = 0;
  *(unsigned int *)(param_1 + 0x16d0) = 0;
  *(unsigned int *)(param_1 + 0x16d4) = 0;
  *(int (***)())(param_1 + 0x16dc) = fn_82D585D8;
  *(unsigned int *)(param_1 + 0x16f0) = 0;
  fn_82D74958(param_1);
  *(unsigned char *)(param_1 + 0x1e20) = 0;
  if (*(int *)(param_1 + 0x1e38) != 0) {
    iVar3 = 0;
    do {
      lVar4 = 0x20;
      do {
        *(unsigned char *)(iVar3 + *(int *)(param_1 + 0x1e38) + 2) = 100;
        iVar1 = iVar3 + *(int *)(param_1 + 0x1e3c);
        iVar3 = iVar3 + 3;
        *(unsigned char *)(iVar1 + 2) = 100;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    } while (iVar3 < 0xc00);
  }
  return;
}
