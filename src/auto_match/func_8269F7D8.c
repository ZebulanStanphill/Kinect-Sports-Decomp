extern unsigned int *auStack_90;
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


unsigned __int64 fn_8269F7D8(int *param_1,int (**param_2)(),unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned char auStack_90 [16];
  unsigned char **ppuStack_80;
  unsigned char *puStack_7c;
  int *piStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char uStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  int iStack_60;
  
  if (param_2 == (int (**)())0x0) {
    uVar4 = 0;
  }
  else {
    auStack_90[0] = 0;
    iVar5 = (**(int (***)())(*param_1 + 0x5c))();
    uVar1 = param_3[1];
    if (0 < (int)uVar1) {
      uVar6 = (unsigned __int64)uVar1 - 1;
      if (-1 < (__int64)uVar6) {
        puVar8 = (unsigned int *)(iVar5 + 8);
        lVar7 = (uVar6 & 0xfffffff) << 4;
        do {
          uVar2 = *puVar8;
          uVar3 = *param_3;
          *puVar8 = uVar2 + 0x10;
          if (*(unsigned int *)(iVar5 + 0x10) <= uVar2 + 0x10) {
            fn_826826A8(puVar8);
          }
          if (*puVar8 != 0) {
            fn_82695DA0(*puVar8,lVar7 + (unsigned __int64)uVar3);
          }
          uVar6 = uVar6 - 1;
          lVar7 = lVar7 + -0x10;
        } while (-1 < (__int64)uVar6);
      }
    }
    piStack_78 = param_1 + 0x1a;
    puStack_7c = auStack_90;
    uStack_6c = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    ppuStack_80 = &lbl_8200579C;
    iStack_60 = (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 0xc) >> 4) + *(int *)(iVar5 + 0x1c) * 0x20 +
                -0x20;
    iStack_68 = iVar5;
    uStack_64 = uVar1;
    (*param_2)(&ppuStack_80);
    fn_826828D8(&ppuStack_80);
    if (0 < (int)uVar1) {
      fn_82683270(iVar5 + 8,(unsigned __int64)uVar1);
    }
    fn_82696330(auStack_90);
    uVar4 = 1;
  }
  return uVar4;
}

