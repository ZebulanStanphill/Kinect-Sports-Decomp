extern unsigned int iStack_2c;
extern unsigned int uStack_28;


unsigned int * fn_82A26628(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int *puStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  unsigned int * apuStack_24;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    puStack_30 = *(unsigned int **)(iVar1 + 0x48);
    if (puStack_30 == (unsigned int *)0x0) {
LAB_82a266d0:
      puStack_30 = (unsigned int *)0x0;
      uStack_28 = 0x100000;
      iVar1 = NtAllocateVirtualMemory
                        (&puStack_30,&uStack_28,0x60002000,4,*(unsigned int *)(iVar1 + 0x590));
      if (-1 < iVar1) {
        iStack_2c = 0x10000;
        iVar1 = NtAllocateVirtualMemory
                          (&puStack_30,&iStack_2c,0x60001000,4,
                           *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x590));
        if (-1 < iVar1) {
          *puStack_30 = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x48);
          *(unsigned int **)(*(int *)(param_1 + 0x18) + 0x48) = puStack_30;
          puStack_30[1] = uStack_28;
          puStack_30[2] = iStack_2c;
          apuStack_24 = puStack_30 + 4;
          goto LAB_82a26794;
        }
        NtFreeVirtualMemory(&puStack_30,&uStack_28,0x8000,
                            *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x590));
      }
    }
    else {
      if (puStack_30[2] == puStack_30[1]) goto LAB_82a266d0;
      iStack_2c = 0x10000;
      apuStack_24 = (unsigned int *)(puStack_30[2] + (int)puStack_30);
      iVar1 = NtAllocateVirtualMemory
                        (&apuStack_24,&iStack_2c,0x60001000,4,*(unsigned int *)(iVar1 + 0x590));
      if (-1 < iVar1) {
        puStack_30[2] = puStack_30[2] + iStack_2c;
LAB_82a26794:
        puVar2 = (unsigned int *)(*(int *)(param_1 + 0x18) + 0x4c);
        if (apuStack_24 < (unsigned int *)(puStack_30[2] + (int)puStack_30)) {
          lVar4 = (unsigned __int64)
                  ((unsigned int)(puStack_30[2] + (int)puStack_30 + (-1 - (int)apuStack_24)) >> 4) + 1;
          puVar3 = puVar2;
          do {
            puVar2 = apuStack_24;
            *puVar3 = puVar2;
            lVar4 = lVar4 + -1;
            puVar3 = puVar2;
            apuStack_24 = puVar2 + 4;
          } while (lVar4 != 0);
        }
        *puVar2 = 0;
        iVar1 = *(int *)(param_1 + 0x18);
        goto LAB_82a267dc;
      }
    }
    puVar2 = (unsigned int *)0x0;
  }
  else {
LAB_82a267dc:
    puVar2 = *(unsigned int **)(iVar1 + 0x4c);
    *(unsigned int *)(iVar1 + 0x4c) = *puVar2;
  }
  return puVar2;
}

