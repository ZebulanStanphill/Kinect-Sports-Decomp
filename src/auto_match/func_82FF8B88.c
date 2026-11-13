extern unsigned int *auStack_70;
extern int fn_82FA5100();
extern int fn_82FA5190();
extern int fn_82FF8988();
extern unsigned int lbl_831BC768;
extern unsigned int *lbl_83265044;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


unsigned __int64 fn_82FF8B88(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  unsigned int auStack_70 [2];
  unsigned __int64 uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char uStack_50;
  
  uStack_60 = 0;
  uStack_5c = 0;
  piVar4 = param_1 + 7;
  uStack_50 = 1;
  uStack_54 = 0;
  uStack_58 = 0;
  uVar1 = (**(int (***)())(*lbl_83265044 + 0xc))(lbl_83265044,param_2,&uStack_60,0,piVar4,1);
  if ((int)uVar1 != 1) {
    uStack_50 = 0;
    uVar1 = (**(int (***)())(*lbl_83265044 + 0xc))(lbl_83265044,param_2,&uStack_60,0,piVar4,1);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  uVar2 = (**(int (***)())(*(int *)*piVar4 + 0x10))();
  param_1[4] = uVar2;
  if (uVar2 == 0) {
    uVar1 = 2;
  }
  else {
    if ((unsigned int)param_1[3] < uVar2) {
      if (*param_1 != 0) {
        fn_82FA5190(lbl_831BC768);
      }
      uVar2 = param_1[4];
      if (uVar2 < 0x8001) {
        uVar2 = 0x8000;
      }
      param_1[3] = uVar2;
      iVar3 = fn_82FA5100(lbl_831BC768,uVar2,0x20);
      *param_1 = iVar3;
    }
    if (*param_1 == 0) {
      uVar1 = 0x34;
    }
    else if ((param_3 & 0xffffffff) != 0) {
      uStack_68 = 0;
      uVar1 = (**(int (***)())(*(int *)*piVar4 + 0x20))
                        ((int *)*piVar4,param_3 & 0xffffffff,0,&uStack_68);
      if (((int)uVar1 == 1) &&
         (param_3 = param_3 - (uStack_68 & 0xffffffff),
         uVar1 = fn_82FF8988(param_1,param_3,auStack_70),
         (unsigned __int64)auStack_70[0] != (param_3 & 0xffffffff))) {
        uVar1 = 2;
      }
    }
  }
  return uVar1;
}

