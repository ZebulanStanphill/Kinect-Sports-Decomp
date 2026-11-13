extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D8D6C0();
extern int fn_82D9A5F8();
extern int fn_82DFFD58();
extern int fn_82E00530();
extern int fn_82E00628();


void fn_82E00CC0(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float *pfVar5;
  unsigned int uVar6;
  unsigned char auStack_60 [48];
  
  bVar1 = *(unsigned char *)(*(int *)(param_2 + 0x1c) + 0x20);
  uVar6 = (unsigned int)bVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = fn_82CE5410();
    if ((*(unsigned int *)(param_1 + 0x18) & 0x3fffffff) < (unsigned int)bVar1) {
      uVar4 = (*(unsigned int *)(param_1 + 0x18) & 0x3fffffff) << 1;
      if (uVar4 <= bVar1) {
        uVar4 = (unsigned int)bVar1;
      }
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),(int *)(param_1 + 0x10),uVar4,0x60);
    }
    *(unsigned int *)(param_1 + 0x14) = uVar6;
    if (bVar1 != 0) {
      uVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x10);
        pfVar5 = (float *)(uVar4 * 0x28 + *(int *)(*(int *)(param_2 + 0x1c) + 0x8c));
        uVar3 = fn_82DFFD58((double)pfVar5[2],(double)*pfVar5,param_1);
        *(unsigned int *)(uVar4 * 0x60 + iVar2 + 4) = uVar3;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar6);
    }
  }
  uVar4 = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x18) + 0x10;
  if (bVar1 != 0) {
    do {
      fn_82E00628(param_1,param_2,uVar4);
      fn_82E00530(param_1,param_2,uVar4,auStack_60);
      iVar2 = fn_82CE5410();
      iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0xe0);
      *(unsigned short *)(iVar2 + 4) = 0xe0;
      uVar3 = fn_82D8D6C0(iVar2,auStack_60,*(unsigned int *)(param_1 + 0xc));
      iVar2 = param_1 + 0x24;
      *(unsigned int *)(*(int *)(param_1 + 0x10) + uVar4 * 0x60) = uVar3;
      if (param_1 == -0x1c) {
        iVar2 = 0;
      }
      fn_82D9A5F8(*(unsigned int *)(*(int *)(param_1 + 0x10) + uVar4 * 0x60),iVar2);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar6);
  }
  return;
}

