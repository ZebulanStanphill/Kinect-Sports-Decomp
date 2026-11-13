extern int fn_82569B10();
extern unsigned int iStack_30;


void fn_8256B850(int param_1)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 uVar9;
  int iStack_30;
  
  iVar3 = fn_82569B10();
  iVar3 = *(int *)(iVar3 + 0x70);
  uVar6 = (unsigned int)*(unsigned short *)(iVar3 + 6);
  if (uVar6 != *(unsigned short *)(iVar3 + 2)) {
    uVar5 = (unsigned int)*(unsigned short *)(iVar3 + 4);
    if (uVar6 < uVar5) {
      iVar3 = *(unsigned short *)(iVar3 + 2) - uVar5;
    }
    else {
      iVar3 = -uVar5;
    }
    if ((uVar6 + iVar3 != -1) && ((*(unsigned char *)(param_1 + 0x28) & 0x80) != 0)) {
      iVar3 = fn_82569B10();
      puVar2 = *(unsigned short **)(iVar3 + 0x70);
      if (puVar2[3] == puVar2[1]) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)((unsigned int)puVar2[2] * (unsigned int)*puVar2 + *(int *)(puVar2 + 4));
      }
      iVar3 = *piVar7;
      if (iVar3 == param_1) {
        iVar3 = fn_82569B10();
        iVar3 = *(int *)(iVar3 + 0x70);
        if ((unsigned int)*(unsigned short *)(iVar3 + 4) == (unsigned int)*(unsigned short *)(iVar3 + 6)) {
          *(unsigned short *)(iVar3 + 6) = *(unsigned short *)(iVar3 + 2);
        }
        else {
          uVar6 = *(unsigned short *)(iVar3 + 4) + 1;
          *(unsigned short *)(iVar3 + 4) =
               (short)uVar6 - (short)(uVar6 / *(unsigned short *)(iVar3 + 2)) * *(unsigned short *)(iVar3 + 2);
        }
      }
      else {
        do {
          iVar4 = fn_82569B10();
          puVar2 = *(unsigned short **)(iVar4 + 0x70);
          if (puVar2[3] == puVar2[1]) {
            puVar8 = (unsigned __int64 *)0x0;
          }
          else {
            puVar8 = (unsigned __int64 *)((unsigned int)puVar2[2] * (unsigned int)*puVar2 + *(int *)(puVar2 + 4));
          }
          uVar9 = *puVar8;
          iVar4 = fn_82569B10();
          iVar4 = *(int *)(iVar4 + 0x70);
          if ((unsigned int)*(unsigned short *)(iVar4 + 4) == (unsigned int)*(unsigned short *)(iVar4 + 6)) {
            *(unsigned short *)(iVar4 + 6) = *(unsigned short *)(iVar4 + 2);
          }
          else {
            uVar6 = *(unsigned short *)(iVar4 + 4) + 1;
            *(unsigned short *)(iVar4 + 4) =
                 (short)uVar6 - (short)(uVar6 / *(unsigned short *)(iVar4 + 2)) * *(unsigned short *)(iVar4 + 2);
          }
          iStack_30 = (int)((unsigned __int64)uVar9 >> 0x20);
          if (iStack_30 != param_1) {
            iVar4 = fn_82569B10();
            puVar2 = *(unsigned short **)(iVar4 + 0x70);
            uVar1 = puVar2[1];
            if ((unsigned int)puVar2[3] == (unsigned int)uVar1) {
              puVar2[2] = 0;
              puVar2[3] = 0;
            }
            else {
              uVar6 = puVar2[3] + 1;
              puVar2[3] = (short)uVar6 - (short)(uVar6 / uVar1) * uVar1;
            }
            *(unsigned __int64 *)((unsigned int)puVar2[3] * (unsigned int)*puVar2 + *(int *)(puVar2 + 4)) = uVar9;
          }
          iVar4 = fn_82569B10();
          puVar2 = *(unsigned short **)(iVar4 + 0x70);
          if (puVar2[3] == puVar2[1]) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)((unsigned int)puVar2[2] * (unsigned int)*puVar2 + *(int *)(puVar2 + 4));
          }
        } while (*piVar7 != iVar3);
      }
    }
  }
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_1 + 0x28) & 0x7f;
  return;
}

