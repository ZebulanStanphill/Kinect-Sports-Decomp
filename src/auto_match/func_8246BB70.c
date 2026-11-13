extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_82837D98();


void fn_8246BB70(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  int aiStack_40;
  
  puVar5 = (unsigned int *)(param_1 + 4);
  lVar4 = 2;
  do {
    puVar1 = (unsigned int *)*puVar5;
    for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar3 = fn_825200A8(param_1 + 0x28,puVar2 + 6);
        if (iVar3 == 0) {
          iVar3 = fn_825200A8(param_1 + 0x2c);
          if (iVar3 == 0) {
            iVar3 = fn_825200A8(param_1 + 0x34);
            if (iVar3 == 0) {
              fn_82837D98(*(unsigned int *)(puVar2[3] + 0x14),0,&aiStack_40);
              if (puVar5[-1] != aiStack_40) {
                if (puVar2[3] != 0) {
                  fn_8251FA58();
                  puVar2[3] = 0;
                }
                if (puVar2[7] != 0) {
                  fn_8251FA58();
                  puVar2[7] = 0;
                }
              }
            }
          }
        }
      }
      puVar1 = (unsigned int *)*puVar5;
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 5;
  } while (lVar4 != 0);
  return;
}

