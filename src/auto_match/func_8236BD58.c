extern int fn_82250A18();
extern int fn_822B17A8();
extern int fn_823CC7A0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832975B0;


void fn_8236BD58(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int *piVar5;
  __int64 lVar6;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if ((*(char *)(iVar2 + 4) == '\0') || ((int)param_2 == *(int *)(param_1 + 0xcc))) {
    if ((*(int *)(param_1 + 0x48c) != 0) && (*(int *)(param_1 + 0x490) < 3)) {
      *(unsigned int *)((*(int *)(param_1 + 0x490) + 0x59) * 4 + *(int *)(param_1 + 0x48c)) = 1;
    }
    puVar1 = *(unsigned int **)((int)((param_2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x20));
    if (4 < *(unsigned int *)(*(int *)(param_1 + 0x4bc) + (int)param_2 * 0x84 + 0xc)) {
                    /* WARNING: Subroutine does not return */
      fn_823CC7A0();
    }
    if ((lbl_821CA460 - *(float *)(param_1 + 0x47c) / *(float *)(param_1 + 0x474)) *
        *(float *)(param_1 + 0x478) < lbl_821922D0) {
      *(unsigned int *)((int)((param_2 + 0xa5 & 0xffffffff) << 2) + param_1) = 1;
    }
    for (piVar5 = (int *)*puVar1; piVar5 != (int *)puVar1[1]; piVar5 = piVar5 + 1) {
      uVar4 = 1;
      puVar3 = (unsigned int *)(*piVar5 + 0x160);
      lVar6 = 3;
      do {
        puVar3 = puVar3 + 1;
        uVar4 = *puVar3 & uVar4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if ((uVar4 != 0) && (iVar2 = *(int *)(*piVar5 + 0x34), iVar2 != 0)) {
        fn_822B17A8(iVar2,0x1a,0);
      }
    }
  }
  return;
}

