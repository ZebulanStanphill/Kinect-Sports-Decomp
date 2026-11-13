extern unsigned int *auStack_20;
extern int fn_82D8B6C8();
extern int fn_82DECAF0();
extern unsigned int lbl_821CA460;


void fn_826009D8(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_20 [16];
  
  piVar1 = *(int **)(param_1 + 0xbc);
  uVar5 = *(unsigned int *)(*(int *)(*(int *)(*piVar1 + 8) + 0x118) * 0x90 + piVar1[1]);
  if (*(char *)(piVar1 + 0x2c) == '\0') {
    fn_82D8B6C8(uVar5,1,1,0);
  }
  else {
    fn_82D8B6C8(uVar5,4,1,0);
    fVar4 = lbl_821CA460;
    puVar2 = (unsigned int *)(param_1 + 0xe0U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    fn_82DECAF0((double)(fVar4 / *(float *)(*(int *)(param_1 + 0xb4) + 0xb3c)),auStack_20,
                      param_1 + 0x100);
  }
  return;
}

