extern unsigned int *auStack_4c;
extern unsigned int *auStack_70;
extern int fn_8251EE68();
extern int fn_8251F340();
extern int fn_828B02D0();
extern int fn_82F68CC0();


void fn_8251E7D0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *apuStack_80 [4];
  unsigned char auStack_70 [36];
  unsigned char auStack_4c [76];
  
  uVar1 = *param_2;
  puVar5 = *(unsigned int **)(param_1 + 4);
  puVar4 = (unsigned int *)(*(unsigned int **)(param_1 + 4))[1];
  while (*(char *)((int)puVar4 + 0x2d) == '\0') {
    if ((unsigned int)puVar4[3] < uVar1) {
      puVar4 = (unsigned int *)puVar4[2];
    }
    else {
      puVar5 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  if ((puVar5 == *(unsigned int **)(param_1 + 4)) || (uVar1 < (unsigned int)puVar5[3])) {
    uVar2 = fn_828B02D0(auStack_70);
    fn_82F68CC0(auStack_4c,uVar2,0x1c);
    iVar3 = fn_8251F340(param_1);
    if ((unsigned int *)(iVar3 + 0xc) != (unsigned int *)0x0) {
      *(unsigned int *)(iVar3 + 0xc) = uVar1;
      fn_82F68CC0(iVar3 + 0x10,auStack_4c,0x1c);
    }
    fn_8251EE68(apuStack_80,param_1,puVar5,iVar3);
    puVar5 = apuStack_80[0];
  }
  fn_82F68CC0(puVar5 + 4,param_2,0x1c);
  return;
}

