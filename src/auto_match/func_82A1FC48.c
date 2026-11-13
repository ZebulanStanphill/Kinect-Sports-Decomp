extern int fn_8265C940();
extern int fn_82F691F0();
extern unsigned int lbl_8315D2EC;


unsigned __int64 fn_82A1FC48(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 4),0);
  if (*(int *)(param_1 + 0x34) != 0) {
    RtlEnterCriticalSection(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      RtlLeaveCriticalSection(param_1 + 0x18);
    }
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) * 0x14;
    puVar2 = (unsigned int *)fn_8265C940(uVar3 + 4,lbl_8315D2EC);
    if (puVar2 == (unsigned int *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      RtlEnterCriticalSection(param_1 + 0x18);
    }
    *puVar2 = *(unsigned int *)(param_1 + 0xc);
    trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x10),0);
    *(unsigned int **)(param_1 + 0xc) = puVar2;
    lVar4 = (uVar3 & 0xffffffff) / (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 1;
    for (lVar5 = lVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x10) * (int)lVar4 + (int)puVar2);
      lVar4 = lVar4 + -1;
      puVar1[1] = *(unsigned int *)(param_1 + 8);
      *(unsigned int **)(param_1 + 8) = puVar1 + 1;
    }
  }
  puVar2 = *(unsigned int **)(param_1 + 8);
  *(unsigned int *)(param_1 + 8) = *puVar2;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2,0,*(unsigned int *)(param_1 + 0x10));
}

