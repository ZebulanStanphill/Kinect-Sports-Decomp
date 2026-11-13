#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_40;
extern int fn_8267C498();
extern int fn_82684A58();
extern int fn_826DF848();
extern int fn_826E7800();
extern int fn_826E7998();
extern int fn_826F4A18();


void fn_826DFE58(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  int *piVar3;
  int iVar4;
  int (**pcVar5)();
  unsigned __int64 uVar6;
  unsigned char *puVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  int iVar10;
  unsigned int auStack_40 [16];
  
  iVar10 = *(int *)(param_1 + 0x314);
  if (iVar10 == 0) {
    iVar10 = param_1 + 0x28;
  }
  uVar8 = 0;
  *(unsigned char *)(iVar10 + 0x15) = 0;
  if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 2) {
    fn_826E7800(iVar10,2);
  }
  puVar7 = (unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
  uVar1 = puVar7[1];
  uVar2 = *puVar7;
  *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 2;
  piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
  if (piVar3 == (int *)0x0) {
    iVar10 = *(int *)(param_1 + 0x314);
    if (iVar10 == 0) {
      iVar10 = param_1 + 0x28;
    }
    fn_82684A58(iVar10,0xffffffff8200c940);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x314);
    if (iVar10 == 0) {
      iVar10 = param_1 + 0x28;
    }
    fn_826E7998(iVar10);
    piVar9 = *(int **)(param_1 + 0x2b4);
    if (piVar9 == (int *)0x0) {
      iVar10 = *(int *)(param_1 + 0x314);
      if (iVar10 == 0) {
        iVar10 = param_1 + 0x28;
      }
      fn_826E7998(iVar10);
      *(unsigned char *)(iVar10 + 0x38) = 1;
      iVar4 = *piVar3;
      piVar9 = *(int **)(iVar10 + 0x10);
      uVar6 = fn_826DF848(param_1);
      pcVar5 = *(int (***)())(iVar4 + 8);
    }
    else {
      (**(int (***)())(*piVar9 + 4))(piVar9);
      iVar10 = *piVar3;
      uVar6 = fn_826DF848(param_1);
      pcVar5 = *(int (***)())(iVar10 + 0x10);
    }
    uVar8 = (*pcVar5)(piVar3,piVar9,uVar6);
  }
  auStack_40[0] = (unsigned int)CONCAT11(uVar1,uVar2);
  fn_826F4A18(param_1,auStack_40,uVar8);
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8267C498(uVar8);
  }
  return;
}

