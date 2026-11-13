extern int fn_82E4BE68();
extern int fn_82E867F0();
extern int fn_82E91590();
extern int fn_82E92218();
extern int fn_82EC7BB0();
extern unsigned int lbl_82005710;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


unsigned __int64 fn_82E4C550(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned int *apuStack_60 [2];
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double adStack_40;
  
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x108);
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  if (*(char *)(param_1 + 0x228) != '\0') {
    if (param_5 >> 0x20 != 0) {
      return param_5 >> 0x20;
    }
    uStack00000028 = ((((unsigned __int64)(uStack00000028)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    if ((((unsigned __int64)(uStack00000028) >> 32) & 0xFFFFFFFF) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x118) == 1) {
      return 0;
    }
    if (0 < (int)*(unsigned int *)(param_1 + 0x108)) {
      iVar4 = fn_82E92218(*(unsigned int *)(param_1 + 0x234),
                              (*(unsigned int *)(param_1 + 0x238) - uVar5) + -2,0);
      while ((iVar4 == 3 && ((int)uVar5 != 0))) {
        uVar5 = uVar5 - 1;
        iVar4 = fn_82E92218(*(unsigned int *)(param_1 + 0x234),
                                (*(unsigned int *)(param_1 + 0x238) - uVar5) + -2,0);
      }
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    dStack_58 = lbl_82005710;
    dStack_50 = lbl_82005710;
    dStack_48 = lbl_82005710;
    adStack_40 = lbl_82005710;
    iVar4 = *(int *)(*(int *)(param_1 + 0x230) + 0x10);
    if ((((iVar4 != 0) && (*(int *)(param_1 + 0x238) + -1 <= iVar4 + -1)) &&
        (iVar4 = fn_82E91590(*(int *)(param_1 + 0x230),apuStack_60), iVar4 != 0)) &&
       (apuStack_60[0] != (unsigned int *)0x0)) {
      if (apuStack_60[0][0x18] == 0) {
        fn_82E867F0(*(unsigned int *)(param_1 + 0xc),*apuStack_60[0],apuStack_60[0][1]);
        apuStack_60[0][0x18] = 1;
      }
      uVar1 = apuStack_60[0][1];
      fn_82E4BE68(param_1,apuStack_60,(unsigned __int64)*(unsigned int *)(param_1 + 0x238) - 2);
      if (apuStack_60[0] != (unsigned int *)0x0) {
        if (apuStack_60[0][0x18] == 0) {
          fn_82E867F0(*(unsigned int *)(param_1 + 0xc),*apuStack_60[0],apuStack_60[0][1]);
          apuStack_60[0][0x18] = 1;
        }
        uVar2 = apuStack_60[0][1];
        fn_82E4BE68(param_1,apuStack_60,(unsigned __int64)*(unsigned int *)(param_1 + 0x238) - 3);
        if (apuStack_60[0] != (unsigned int *)0x0) {
          if (apuStack_60[0][0x18] == 0) {
            fn_82E867F0(*(unsigned int *)(param_1 + 0xc),*apuStack_60[0],apuStack_60[0][1]);
            apuStack_60[0][0x18] = 1;
          }
          uVar3 = apuStack_60[0][1];
          fn_82EC7BB0(*(unsigned int *)(param_1 + 0xc),uVar2,uVar1,0,&dStack_58);
          fn_82EC7BB0(*(unsigned int *)(param_1 + 0xc),uVar3,uVar2,0,&dStack_50);
          fn_82EC7BB0(*(unsigned int *)(param_1 + 0xc),uVar3,uVar1,0,&adStack_40);
          fn_82EC7BB0(*(unsigned int *)(param_1 + 0xc),uVar2,uVar1,uVar3,&dStack_48);
          uVar5 = 0;
          if (adStack_40 + dStack_48 <= dStack_50 + dStack_58) {
            uVar5 = 1;
          }
        }
      }
    }
  }
  return uVar5;
}

