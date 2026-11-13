extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7C2C0();
extern int fn_82F7C468();
extern int fn_82F857F8();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


unsigned short fn_82F89AF0(unsigned int *param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned char *puVar9;
  
  if (param_1 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)fn_82F68240();
    *puVar6 = 0x16;
    fn_82F63BA0();
  }
  else {
    uVar8 = param_1[3];
    if (((uVar8 & 0x83) != 0) && ((uVar8 & 0x40) == 0)) {
      if ((uVar8 & 2) == 0) {
        param_1[3] = uVar8 | 1;
        if ((uVar8 & 0x10c) == 0) {
          fn_82F857F8(param_1);
        }
        else {
          *param_1 = param_1[2];
        }
        uVar2 = param_1[2];
        uVar3 = param_1[6];
        uVar4 = fn_82F7C468(param_1);
        lVar5 = fn_82F7C2C0(uVar4,uVar2,uVar3);
        iVar7 = (int)lVar5;
        param_1[1] = iVar7;
        if (((iVar7 != 0) && (iVar7 != 1)) && (iVar7 != -1)) {
          if ((param_1[3] & 0x82) == 0) {
            iVar7 = fn_82F7C468(param_1);
            if ((iVar7 == -1) || (iVar7 = fn_82F7C468(param_1), iVar7 == -2)) {
              puVar9 = &lbl_831BBF60;
            }
            else {
              iVar7 = fn_82F7C468(param_1);
              uVar8 = fn_82F7C468(param_1);
              puVar9 = (unsigned char *)((uVar8 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar7 >> 5]);
            }
            if ((puVar9[4] & 0x82) == 0x82) {
              param_1[3] = param_1[3] | 0x2000;
            }
          }
          if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
            param_1[6] = 0x1000;
          }
          param_1[1] = param_1[1] + -2;
          uVar1 = *(unsigned short *)*param_1;
          *param_1 = (unsigned short *)*param_1 + 1;
          return uVar1;
        }
        param_1[1] = 0;
        uVar8 = (-(unsigned int)(lVar5 != 0) & 0x10) + 0x10 | param_1[3];
      }
      else {
        uVar8 = uVar8 | 0x20;
      }
      param_1[3] = uVar8;
    }
  }
  return 0xffff;
}

