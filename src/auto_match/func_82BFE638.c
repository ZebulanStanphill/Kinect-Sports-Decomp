extern int fn_82BFBDA8();
extern int fn_82BFE0F8();
extern int fn_82BFE108();
extern int fn_82F68CC0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82BFE638(unsigned int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int (**pcStack_28)();
  int (**pcStack_24)();
  
  if (param_2 == (int *)0x0) {
LAB_82bfe654:
    uVar1 = 0xffffffff80070057;
  }
  else {
    uStack_2c = 0;
    *param_2 = 0;
    if (param_1 == (unsigned int *)0x0) {
      uStack_2c = 0;
      pcStack_28 = fn_82BFE0F8;
      pcStack_24 = fn_82BFE108;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
LAB_82bfe7f4:
      uStack_30 = 0x10;
      iVar2 = fn_82BFBDA8(uVar3,uVar4,uVar5,uVar6,&uStack_30,0);
LAB_82bfe804:
      if (iVar2 != 0) {
        *param_2 = iVar2;
        return 0;
      }
    }
    else {
      if (param_1[7] != 0x34) goto LAB_82bfe654;
      pcStack_24 = fn_82BFE108;
      pcStack_28 = fn_82BFE0F8;
      if ((int (**)())param_1[10] != (int (**)())0x0) {
        pcStack_24 = (int (**)())param_1[0xb];
        if (pcStack_24 == (int (**)())0x0) goto LAB_82bfe654;
        uStack_2c = param_1[0xc];
        pcStack_28 = (int (**)())param_1[10];
      }
      uVar5 = *param_1;
      if ((((((uVar5 & 0x1f0) == 0) && (param_1[5] == 0)) && (param_1[3] == 0)) &&
          ((param_1[6] == 0 && (param_1[4] == 0)))) && ((param_1[1] == 0 && (param_1[2] == 0)))) {
        uVar4 = param_1[9];
        uVar3 = param_1[8];
        uVar6 = uVar5 >> 2 & 1;
        uVar5 = uVar5 >> 3 & 1;
        if ((pcStack_28 != (int (**)())0x0) && (pcStack_24 != (int (**)())0x0)) goto LAB_82bfe7f4;
      }
      else {
        uStack_30 = 0x10;
        if (((pcStack_28 != (int (**)())0x0) && (pcStack_24 != (int (**)())0x0)) &&
           (iVar2 = fn_82BFBDA8(param_1[8],param_1[9],uVar5 >> 3 & 1,uVar5 >> 2 & 1,&uStack_30,
                                  0x1c), iVar2 != 0)) {
          fn_82F68CC0(*(unsigned int *)(iVar2 + 0x44),param_1,0x1c);
          goto LAB_82bfe804;
        }
      }
    }
    uVar1 = 0xffffffff80070008;
  }
  return uVar1;
}

