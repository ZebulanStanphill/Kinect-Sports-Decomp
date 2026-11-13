extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8302C580();
extern int fn_8302DD08();
extern int fn_8302EA08();
extern int fn_8302EB70();
extern int fn_83032BE0();


unsigned __int64 fn_8302E350(int *param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  int *piVar7;
  unsigned __int64 uVar5;
  __int64 lVar8;
  unsigned short uVar9;
  unsigned short auStack_30 [2];
  unsigned char auStack_2c [1];

  puVar6 = (unsigned int *)fn_8302EB70((unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x10) + 4);
  if (puVar6 != (unsigned int *)0x0) {
    fn_8302EA08(puVar6,param_1,1);
    bVar1 = *(unsigned char *)((int)puVar6 + 10);
    lVar8 = (unsigned __int64)*(unsigned short *)(param_1 + 0x48) - 1;
    uVar4 = lVar8 - (((unsigned __int64)*(unsigned short *)(param_1 + 0x48) - 2) + (unsigned __int64)(lVar8 == 0)) & 1;
    bVar3 = (unsigned char)(uVar4 << 7);
    *(unsigned char *)((int)puVar6 + 10) = bVar3 | bVar1 & 0x7f;
    *(unsigned char *)((int)puVar6 + 10) = (*(short *)(param_1 + 0x48) == 0) << 6 | bVar3 | bVar1 & 0x3f;
    if (uVar4 == 0) {
      uVar9 = 1;
    }
    else if ((*(unsigned char *)((int)puVar6 + 10) & 0x40) == 0) {
      uVar9 = *(unsigned short *)(param_1 + 0x48);
    }
    else {
      uVar9 = 1;
    }
    *(unsigned short *)(puVar6 + 2) = uVar9;
    piVar7 = (int *)fn_8302DD08(*puVar6,*(unsigned int *)(param_2 + 8),auStack_30,auStack_2c,
                                      puVar6 + 1,puVar6 + 2);
    if (piVar7 != (int *)0x0) {
      fn_8302C580(param_2 + 0x28,auStack_30[0],1);
      uVar5 = (**(int (***)())(*piVar7 + 0x18))(piVar7,param_2);
      (**(int (***)())(*piVar7 + 8))(piVar7);
      return uVar5;
    }
    iVar2 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
    fn_83032BE0((unsigned __int64)*(unsigned int *)(iVar2 + 8) - 0x14);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -0x14;
  }
  uVar5 = (**(int (***)())(*param_1 + 0x154))(param_1,param_2);
  if ((int)uVar5 == 3) {
    uVar5 = 1;
  }
  return uVar5;
}
