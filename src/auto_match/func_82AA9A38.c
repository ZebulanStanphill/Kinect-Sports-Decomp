extern unsigned int *auStack_68;
extern int fn_82AA9058();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_82AA9A38(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                  int param_7,int param_8)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned short *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  int in_stack_00000054;
  int iStack_70;
  int iStack_6c;
  unsigned char auStack_68 [104];
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  iVar6 = 0x8000 >> (0x10U - param_8 & 0x3f);
  iVar7 = iVar6 + -1;
  iVar6 = -iVar6;
  if (in_stack_00000054 == 0) {
    iVar9 = 1;
  }
  else {
    uVar2 = (unsigned __int64)((int)*(unsigned int *)(param_1 + 0x24) >> 1);
    iVar9 = 2;
  }
  lVar8 = 0;
  if (*(short *)(param_1 + 0x34) != 0) {
    piVar10 = (int *)(param_4 * 4 + param_3);
    do {
      param_1 = fn_82AA9058(param_1,lVar8,&iStack_70,auStack_68,&iStack_6c);
      iVar4 = param_7;
      if (iStack_70 == 0) {
        iVar4 = param_6;
      }
      if (iStack_6c != 0) {
        iVar4 = 1;
      }
      if (iVar4 == 0) {
        if (0 < (int)uVar2) {
          puVar3 = (unsigned short *)(*param_5 + -2);
          uVar11 = uVar2;
          piVar1 = piVar10;
          do {
            iVar4 = *piVar1 + 8 >> 4;
            iVar5 = iVar7;
            if ((iVar4 <= iVar7) && (iVar5 = iVar4, iVar4 < iVar6)) {
              iVar5 = iVar6;
            }
            piVar1 = piVar1 + iVar9;
            puVar3 = puVar3 + 1;
            *puVar3 = (short)iVar5;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else if (0 < (int)uVar2) {
        puVar3 = (unsigned short *)(*param_5 + -2);
        piVar1 = piVar10 + -iVar9;
        uVar11 = uVar2;
        do {
          piVar1 = piVar1 + iVar9;
          puVar3 = puVar3 + 1;
          *puVar3 = (short)*piVar1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      lVar8 = lVar8 + 1;
      piVar10 = piVar10 + param_2;
      param_5 = param_5 + 1;
    } while ((int)lVar8 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x34));
  }
  return;
}

