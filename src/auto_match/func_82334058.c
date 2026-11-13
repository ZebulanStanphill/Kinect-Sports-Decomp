extern unsigned int *auStack_30;
extern int fn_822CB140();
extern int fn_8288B760();


void fn_82334058(int *param_1)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  char cVar7;
  int iVar6;
  __int64 lVar5;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_30 [24];
  
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar7 = fn_8288B760();
    if (cVar7 != '\0') {
      if ((*(int **)(iVar1 + 0x24) != (int *)0x0) &&
         (iVar6 = (**(int (***)())(**(int **)(iVar1 + 0x24) + 0x14))(), iVar6 != 0)) {
        pcVar2 = *(int (***)())(*param_1 + 8);
        puVar3 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar8;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        lVar5 = (*pcVar2)(param_1);
        fn_822CB140(lVar5 + 0x144,auStack_30);
      }
    }
  }
  return;
}

