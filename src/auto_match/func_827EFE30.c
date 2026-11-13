extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_827EF888();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();


void fn_827EFE30(int param_1,unsigned short param_2)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  short sVar10;
  unsigned short *puVar9;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [80];
  
  if (*(short *)(param_1 + 0x124) != 0) {
    sVar10 = *(short *)(param_1 + 0x124) + -1;
    *(short *)(param_1 + 0x124) = sVar10;
    if (sVar10 == 0) {
      iVar5 = *(int *)(param_1 + 0x114);
      *(unsigned int *)(param_1 + 0x11c) = 0;
      auStack_60[0] = 3;
      *(unsigned int *)(param_1 + 0x114) = 0;
      *(unsigned int *)(param_1 + 0x120) = 0;
      uVar3 = fn_82811438(auStack_50,auStack_60,0x10);
    }
    else {
      auStack_60[0] = 0;
      iVar5 = *(int *)(param_1 + 0x114);
      uVar3 = fn_82811438(auStack_50,auStack_60,0x10);
      puVar4 = (unsigned int *)
               fn_82811080(0xffffffff8320a3e0,
                                 (unsigned __int64)*(unsigned short *)(param_1 + 0x124) * 0xe + 2,uVar3);
      puVar6 = *(unsigned __int64 **)(param_1 + 0x120);
      *(unsigned int **)(param_1 + 0x114) = puVar4;
      puVar9 = *(unsigned short **)(param_1 + 0x11c);
      puVar8 = (unsigned short *)(puVar4 + *(unsigned short *)(param_1 + 0x124));
      *(unsigned short **)(param_1 + 0x11c) = puVar8;
      puVar7 = puVar8 + *(unsigned short *)(param_1 + 0x124) + 1;
      *(unsigned short **)(param_1 + 0x120) = puVar7;
      if (puVar9 != (unsigned short *)0x0) {
        uVar1 = *puVar9;
        while (uVar1 < param_2) {
          *puVar4 = fn_827EF888;
          puVar4 = puVar4 + 1;
          *puVar8 = *puVar9;
          puVar8 = puVar8 + 1;
          *(unsigned int *)puVar7 = *(unsigned int *)puVar6;
          puVar2 = (unsigned int *)((int)puVar6 + 4);
          puVar6 = puVar6 + 1;
          *(unsigned int *)(puVar7 + 2) = *puVar2;
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 1;
          uVar1 = *puVar9;
        }
        puVar9 = puVar9 + 1;
        if (*puVar9 != 0xffff) {
          puVar7 = puVar7 + -4;
          puVar4 = puVar4 + -1;
          do {
            puVar4 = puVar4 + 1;
            *puVar4 = fn_827EF888;
            *puVar8 = *puVar9;
            puVar8 = puVar8 + 1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 4;
            *(unsigned __int64 *)puVar7 = *puVar6;
            puVar9 = puVar9 + 1;
          } while (*puVar9 != 0xffff);
        }
      }
      *puVar8 = 0xffff;
      if (iVar5 == 0) {
        return;
      }
      auStack_60[0] = 3;
      uVar3 = fn_82811438(auStack_50,auStack_60,0x10);
    }
    fn_82811238(0xffffffff8320a3e0,iVar5,uVar3);
  }
  return;
}

