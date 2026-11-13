extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823B97C0();
extern unsigned int iStack_34;


void fn_823BC360(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [4];
  int iStack_34;
  unsigned int auStack_30 [6];
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x10) = uVar1 + 1;
  puVar3 = *(unsigned int **)(param_1 + 0x24);
  puVar4 = (unsigned int *)(*(unsigned int **)(param_1 + 0x24))[1];
  while (*(char *)((int)puVar4 + 0x19) == '\0') {
    if ((unsigned int)puVar4[3] < uVar1) {
      puVar4 = (unsigned int *)puVar4[2];
    }
    else {
      puVar3 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  if ((puVar3 == *(unsigned int **)(param_1 + 0x24)) || (uVar1 < (unsigned int)puVar3[3])) {
    auStack_30[2] = 0;
    auStack_30[1] = 0;
    auStack_30[0] = uVar1;
    puVar3 = (unsigned int *)fn_823B97C0(auStack_40,param_1 + 0x20,puVar3,auStack_30);
    puVar3 = (unsigned int *)*puVar3;
    if (auStack_30[2] != 0) {
      fn_822315A0(auStack_30[2]);
    }
  }
  puVar4 = (unsigned int *)fn_82365BD8(auStack_38,param_2);
  uVar2 = puVar4[1];
  puVar4[1] = puVar3[5];
  puVar3[5] = uVar2;
  uVar2 = *puVar4;
  *puVar4 = puVar3[4];
  puVar3[4] = uVar2;
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

