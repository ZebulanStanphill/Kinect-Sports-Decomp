typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8228E658();
extern int fn_82456688();
extern int fn_8265C9E0();
extern unsigned int lbl_821AFB30;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82321480(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int uStack_40;
  int *piStack_3c;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x28);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
    bVar8 = 2;
  }
  else {
    puVar4 = puVar2 + 4;
    bVar8 = (puVar4 == (unsigned int *)0x0) << 1;
    puVar2[1] = 1;
    *puVar2 = &lbl_821AFB30;
    puVar2[2] = 1;
    if (puVar4 != (unsigned int *)0x0) {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar2[8] = 0;
      }
      else {
        if (*(int *)(param_3 + 0x10) != param_3) {
          puVar4 = (unsigned int *)0x0;
        }
        uVar3 = (**(int (***)())**(unsigned int **)(param_3 + 0x10))
                          (*(unsigned int **)(param_3 + 0x10),puVar4);
        puVar2[8] = uVar3;
      }
    }
  }
  param_1[1] = puVar2;
  uStack_40 = 0;
  *param_1 = puVar2 + 4;
  piStack_3c = (int *)0x0;
  fn_8228E658(&uStack_40,param_1);
  fn_82456688(param_2,&uStack_40);
  if (ZEXT48(piStack_3c) != 0) {
    lVar6 = ZEXT48(piStack_3c) + 8;
    do {
      puVar7 = (unsigned int *)lVar6;
      lVar5 = (unsigned __int64)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar5,0,lVar6);
        *puVar7 = uVar1;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if ((int)lVar5 == 0) {
      (**(int (***)())(*piStack_3c + 4))();
    }
  }
  return param_1;
}

