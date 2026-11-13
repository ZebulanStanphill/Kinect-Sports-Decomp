typedef unsigned char bool;
extern int fn_82AA6648();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82B092B8();


void fn_82B09478(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  int *piVar9;
  unsigned int uVar10;
  int iVar11;
  int aiStack_64 [1];
  
  while (((param_2[1] & 1) == 0 && (param_2[1] != 0))) {
    puVar5 = (unsigned int *)(*param_2 & 0xfffffffe);
    puVar4 = puVar5 + -1;
    uVar7 = puVar5[1] - 1;
    puVar2 = (unsigned int *)puVar4[puVar5[1] + 3];
    puVar5[1] = uVar7;
    if (uVar7 == 0) {
      *(unsigned int *)(*puVar5 & 0xfffffffe) = *puVar4;
      *(unsigned int *)(*puVar4 & 0xfffffffe) = *puVar5;
      fn_82AA6648(param_2,puVar4,((unsigned __int64)puVar5[2] + 4 & 0x3fffffff) << 2);
    }
    if ((*puVar2 & 0x1fffe000) != 0) {
      puVar5 = puVar2 + 6;
      uVar7 = *(unsigned int *)(puVar2[6] + 8) >> 0x13 & 7;
      bVar1 = (*(unsigned int *)(puVar2[6] + 8) & 0x3f80) == 0x3200;
      if (bVar1) {
        uVar7 = 1;
      }
      uVar10 = (unsigned int)bVar1;
      if (uVar10 < uVar7) {
        iVar11 = uVar7 - uVar10;
        piVar9 = aiStack_64 + uVar10;
        do {
          iVar3 = fn_82ABE9F0(param_1,(*puVar2 & 0x1fff) << 3,0);
          iVar11 = iVar11 + -1;
          piVar9 = piVar9 + 1;
          *piVar9 = iVar3;
        } while (iVar11 != 0);
      }
      uVar6 = 0;
      if ((*puVar2 & 0x1fff) != 0) {
        do {
          if (uVar10 < uVar7) {
            iVar11 = uVar7 - uVar10;
            piVar9 = aiStack_64 + uVar10;
            puVar8 = (unsigned int *)((uVar10 + 10) * 4 + *puVar5);
            do {
              puVar8 = puVar8 + 1;
              piVar9 = piVar9 + 1;
              *(unsigned int *)(*piVar9 + uVar6 * 8) = *puVar8;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < (*puVar2 & 0x1fff));
      }
      if (uVar10 < uVar7) {
        iVar11 = uVar7 - uVar10;
        piVar9 = aiStack_64 + uVar10;
        do {
          piVar9 = piVar9 + 1;
          iVar3 = *piVar9;
          fn_82B092B8(param_1,puVar2,iVar3,*puVar2 & 0x1fff,0,0,param_2,param_3);
          fn_82AC6808(param_1,iVar3,(*puVar2 & 0x1fff) << 3,0);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  return;
}

