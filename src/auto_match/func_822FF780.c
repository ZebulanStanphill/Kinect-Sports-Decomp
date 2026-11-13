extern unsigned int *auStack_30;
extern int fn_822CA5B0();
extern int fn_822CB0A0();
extern int fn_822CB140();
extern int fn_8288B760();


void fn_822FF780(int *param_1)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  char cVar6;
  __int64 lVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_30 [24];
  
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar6 = fn_8288B760();
    if (cVar6 == '\0') {
      fn_822CA5B0(param_1);
    }
    else {
      pcVar2 = *(int (***)())(*param_1 + 8);
      puVar3 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar5 = (*pcVar2)();
      fn_822CB140(lVar5 + 0x144,auStack_30);
      puVar3 = (unsigned int *)(iVar1 + 0x90U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      pcVar2 = *(int (***)())(*param_1 + 8);
      puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB0A0(lVar5 + 0xf0,auStack_30);
    }
  }
  return;
}

