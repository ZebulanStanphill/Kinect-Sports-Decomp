extern unsigned int *auStack_40;
extern int fn_82D7E470();
extern int _errno();
extern int __iob_func();
extern int fn_82F7C468();
extern int fn_82F7C9A0();
extern int fn_82F85678();
extern int fn_82F857F8();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


unsigned short fn_82F88C00(unsigned short param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  __int64 lVar2;
  unsigned int uVar6;
  unsigned char *puVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned short auStack_40;
  
  uVar1 = fn_82F7C468(param_2);
  uVar8 = param_2[3];
  if ((uVar8 & 0x82) == 0) {
    puVar3 = (unsigned int *)_errno();
    uVar6 = 9;
  }
  else {
    if ((uVar8 & 0x40) == 0) {
      if ((uVar8 & 1) != 0) {
        param_2[1] = 0;
        if ((uVar8 & 0x10) == 0) {
          param_2[3] = uVar8 | 0x20;
          return 0xffff;
        }
        param_2[3] = uVar8 & 0xfffffffe;
        *param_2 = param_2[2];
      }
      uVar8 = param_2[3];
      iVar5 = 0;
      param_2[1] = 0;
      param_2[3] = uVar8 & 0xffffffef | 2;
      if (((uVar8 & 0x10c) == 0) &&
         (((iVar4 = __iob_func(), param_2 != (unsigned int *)(iVar4 + 0x20) &&
           (iVar4 = __iob_func(), param_2 != (unsigned int *)(iVar4 + 0x40))) ||
          (iVar4 = fn_82D7E470(uVar1), iVar4 == 0)))) {
        fn_82F857F8(param_2);
      }
      if ((param_2[3] & 0x108) == 0) {
        lVar9 = 2;
        auStack_40 = param_1;
        iVar5 = fn_82F7C9A0(uVar1,&auStack_40,2);
      }
      else {
        uVar8 = param_2[2];
        lVar9 = (unsigned __int64)*param_2 - (unsigned __int64)uVar8;
        param_2[1] = param_2[6] - 2;
        *param_2 = uVar8 + 2;
        if (lVar9 < 1) {
          uVar8 = (unsigned int)uVar1;
          if ((uVar8 == 0xffffffff) || (uVar8 == 0xfffffffe)) {
            puVar7 = &lbl_831BBF60;
          }
          else {
            puVar7 = (unsigned char *)((&lbl_8329F620)[(int)uVar8 >> 5] + (uVar8 & 0x1f) * 0x48);
          }
          if (((puVar7[4] & 0x20) != 0) && (lVar2 = fn_82F85678(uVar1,0,2), lVar2 == -1))
          goto LAB_82f88c40;
        }
        else {
          iVar5 = fn_82F7C9A0(uVar1,(unsigned __int64)uVar8,lVar9);
        }
        *(unsigned short *)param_2[2] = param_1;
      }
      if (iVar5 == (int)lVar9) {
        return param_1;
      }
      goto LAB_82f88c40;
    }
    puVar3 = (unsigned int *)_errno();
    uVar6 = 0x22;
  }
  *puVar3 = uVar6;
LAB_82f88c40:
  param_2[3] = param_2[3] | 0x20;
  return 0xffff;
}

