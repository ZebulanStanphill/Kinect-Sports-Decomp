typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230300();
extern int fn_824CC9E8();
extern int fn_824D47E0();
extern int fn_8265CA20();
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C0D90;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824D3E38(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar8;
  __int64 lVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar1 = (unsigned int *)param_1[0x3d];
  *param_1 = &lbl_821C0D90;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    param_1[0x3d] = 0;
  }
  iVar2 = param_1[0x3c];
  if (iVar2 != 0) {
    fn_82230300(iVar2 + 0x410,1,0);
    iVar8 = *(int *)(iVar2 + 0x90);
    if (iVar8 != 0) {
      for (; iVar8 != *(int *)(iVar2 + 0x94); iVar8 = iVar8 + 0x20) {
      }
      fn_8265CA20();
    }
    *(unsigned int *)(iVar2 + 0x90) = 0;
    *(unsigned int *)(iVar2 + 0x94) = 0;
    *(unsigned int *)(iVar2 + 0x98) = 0;
    fn_8265CA20(iVar2);
    param_1[0x3c] = 0;
  }
  piVar3 = (int *)param_1[0x60];
  if (ZEXT48(piVar3) != 0) {
    lVar5 = ZEXT48(piVar3) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar7 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piVar3 + 4))();
    }
  }
  piVar3 = (int *)param_1[0x5e];
  if (ZEXT48(piVar3) != 0) {
    lVar5 = ZEXT48(piVar3) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar7 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piVar3 + 4))();
    }
  }
  fn_824D47E0(param_1 + 0x44);
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
  return;
}

