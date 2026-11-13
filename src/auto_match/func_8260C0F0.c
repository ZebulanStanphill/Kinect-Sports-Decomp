extern unsigned int *auStack_2c;
extern int fn_8256A790();
extern int fn_8265BF48();
extern unsigned int uStack_30;


void fn_8260C0F0(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  piVar3 = *(int **)(param_1 + 0x24);
  uVar6 = 0;
  if (piVar3[1] != 0) {
    iVar7 = 0;
    do {
      pcVar5 = *(char **)(*piVar3 + iVar7 + 4);
      pcVar4 = "R1::shaderTextureInstance";
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uStack_30 = fn_8265BF48((unsigned __int64)*(unsigned int *)(*piVar3 + iVar7 + 0xc) +
                                      (unsigned __int64)*(unsigned int *)(param_1 + 0x28),0);
        auStack_2c[0] = 0;
        fn_8256A790(&uStack_30,auStack_2c);
      }
      piVar3 = *(int **)(param_1 + 0x24);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
    } while (uVar6 < (unsigned int)piVar3[1]);
  }
  return;
}

