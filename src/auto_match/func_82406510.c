typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_824060E8();
extern unsigned int lbl_821B7DB4;
extern unsigned int lbl_821B7DE8;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82406510(unsigned int *param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned char auStack_60 [96];
  
  if (param_3 == 0) {
    uVar8 = 0xffffffff821b7ddc;
  }
  else {
    uVar8 = 0xffffffff821b7dd0;
  }
  iVar4 = fn_824060E8(auStack_60,param_2);
  *param_1 = &lbl_821B7DB4;
  fn_824060E8(param_1 + 1,iVar4);
  param_1[3] = 2;
  fn_82230110(param_1 + 4,uVar8);
  piVar1 = *(int **)(iVar4 + 4);
  if (ZEXT48(piVar1) != 0) {
    lVar5 = ZEXT48(piVar1) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar7 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piVar1 + 4))();
    }
  }
  param_1[0xb] = param_3;
  *param_1 = &lbl_821B7DE8;
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  piVar1 = *(int **)(param_2 + 4);
  if (ZEXT48(piVar1) != 0) {
    lVar5 = ZEXT48(piVar1) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar7 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piVar1 + 4))();
    }
  }
  return param_1;
}

