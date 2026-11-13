extern unsigned int *auStack_40;
extern int fn_82D1EB20();
extern unsigned int lbl_8323B1A0;


void fn_82D1EE70(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  char cVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_40 [1];
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x2c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + (int)in_r0) & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)((int)puVar1 + (int)in_r0 + 0x20 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    cVar4 = fn_82D1EB20(param_1,(unsigned __int64)(unsigned int)puVar1[2] + 0x10,(unsigned __int64)(unsigned int)puVar1[3] + 0x10
                         ,(unsigned __int64)(unsigned int)puVar1[4] + 0x10,auStack_40,1);
    if (cVar4 != '\0') {
      puVar2 = (unsigned int *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (unsigned int *)((int)puVar1 + (int)in_r0 + 0x20 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
    }
  }
  return;
}

