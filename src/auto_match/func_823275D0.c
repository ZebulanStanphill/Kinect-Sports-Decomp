extern unsigned int *auStack_30;
extern int fn_822CA5B0();
extern int fn_822CB0A0();
extern int fn_822CB140();
extern int fn_822CA5B0();
extern int fn_8288B760();


void fn_823275D0(int *param_1)

{
  int iVar1;
  int (**pcVar2)();
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  char cVar7;
  __int64 lVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_30 [1];

  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar7 = fn_8288B760();
    if (cVar7 == '\0') {
      fn_822CA5B0(param_1);
    }
    else {
      pcVar2 = *(int (***)())(*param_1 + 8);
      puVar4 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      lVar6 = (*pcVar2)();
      fn_822CB140(lVar6 + 0x144,auStack_30);
      puVar4 = (unsigned int *)(iVar1 + 0x90U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      pcVar2 = *(int (***)())(*param_1 + 8);
      puVar5 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      lVar6 = (*pcVar2)(param_1);
      fn_822CB0A0(lVar6 + 0xf0,auStack_30);
      iVar3 = *(int *)(iVar1 + 0x720);
      uVar8 = *(unsigned int *)(iVar1 + 0x5c0);
      lVar6 = (**(int (***)())(*param_1 + 8))(param_1);
      fn_822CA5B0(lVar6 + 0x448,uVar8,iVar3 != 0);
    }
  }
  return;
}
