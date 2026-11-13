extern int fn_82C9E1B8();


void fn_82C952C0(int param_1)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  
  puVar4 = *(unsigned int **)(param_1 + 0x110);
  lVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    iVar1 = *(int *)(param_1 + 0x88);
    do {
      lVar3 = 0;
      if (0 < iVar1) {
        do {
          fn_82C9E1B8(param_1,lVar3,lVar2,*puVar4 >> 8 & 7,puVar4 + 2,
                          puVar4 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -2 + 2,puVar4 + -4
                          ,(int)puVar4 + 0xe);
          iVar1 = *(int *)(param_1 + 0x88);
          lVar3 = lVar3 + 1;
          puVar4 = puVar4 + 6;
        } while ((int)lVar3 < iVar1);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

