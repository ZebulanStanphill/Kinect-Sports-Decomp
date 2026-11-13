extern int fn_8265C9E0();
extern unsigned int lbl_821B5EBC;
extern unsigned int lbl_821B5EF4;
extern unsigned int lbl_821C7FB8;


int * fn_823BD1D0(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_821B5EF4;
    puVar3[4] = &lbl_821C7FB8;
    puVar3[5] = *(unsigned int *)(param_2 + 4);
    puVar3[4] = &lbl_821B5EBC;
    puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(puVar3 + 8) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(puVar3 + 0xc) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  puVar1 = (unsigned int *)*param_1;
  *param_1 = (int)puVar3;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  return param_1;
}

