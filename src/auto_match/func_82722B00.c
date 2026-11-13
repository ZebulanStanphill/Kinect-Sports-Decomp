extern int fn_8267C4F0();
extern int fn_82722928();
extern int fn_82722980();
extern int fn_8279A690();


int fn_82722B00(int *param_1)

{
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned short uVar6;
  
  iVar3 = *(int *)(param_1[0x28] + 0x114);
  if (iVar3 == 0) {
    iVar3 = fn_8279A690();
    if ((*(unsigned short *)(param_1[0x27] + 0x50) >> 3 & 1) != 0) {
      *(unsigned short *)(iVar3 + 0x68) = *(unsigned short *)(iVar3 + 0x68) | 1;
    }
    if ((*(unsigned short *)(param_1[0x27] + 0x50) >> 5 & 1) != 0) {
      *(unsigned short *)(iVar3 + 0x68) = *(unsigned short *)(iVar3 + 0x68) | 2;
    }
    iVar4 = (**(int (***)())(*param_1 + 0x40))(param_1);
    piVar5 = (int *)(*(int (**)())**(unsigned int **)(iVar4 + 8))();
    uVar1 = (**(int (***)())(*piVar5 + 0xc))(piVar5,0x18);
    fn_82722928(iVar3,uVar1);
    iVar4 = (**(int (***)())(*param_1 + 0x40))(param_1);
    piVar5 = (int *)(*(int (**)())**(unsigned int **)(iVar4 + 8))();
    uVar2 = (**(int (***)())(*piVar5 + 0xc))(piVar5,0x19);
    fn_82722980(iVar3,uVar2);
    if ((*(unsigned char *)(param_1 + 0x32) & 1) == 0) {
      uVar6 = *(unsigned short *)(iVar3 + 0x68) & 0xfffb;
    }
    else {
      uVar6 = *(unsigned short *)(iVar3 + 0x68) | 4;
    }
    *(unsigned short *)(iVar3 + 0x68) = uVar6;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar2);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar1);
    }
  }
  return iVar3;
}

