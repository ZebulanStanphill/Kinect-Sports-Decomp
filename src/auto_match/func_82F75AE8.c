extern unsigned int *auStack_30;
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F73308();
extern int fn_82F739E8();
extern int fn_82F73BD8();
extern int fn_82F75998();
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 * fn_82F75AE8(unsigned __int64 *param_1)

{
  char cVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char *pcVar6;
  int iVar7;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned char auStack_30 [16];
  int iVar5;
  
  uVar4 = (~(unsigned __int64)lbl_832635D0 & 0xffffffff) >> 0xf & 1;
  iVar5 = (int)uVar4;
  if ((uVar4 == 0) || (iVar7 = 1, (lbl_832635D0 & 0x1000) != 0)) {
    iVar7 = 0;
  }
  uStack_40 = (unsigned __int64)(((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  pcVar6 = lbl_832635C0 + 1;
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F72F40(param_1,0xffffffff82169ea9);
    return param_1;
  }
  lbl_832635C0 = pcVar6;
  if (cVar1 == 'T') {
    uVar3 = 0xffffffff82169eb8;
  }
  else if (cVar1 == 'U') {
    uVar3 = 0xffffffff82169ec0;
  }
  else if (cVar1 == 'V') {
    uVar3 = 0xffffffff82169ec8;
  }
  else {
    if (cVar1 == 'W') {
      uVar3 = fn_82F73BD8(&uStack_38);
      puVar2 = (unsigned __int64 *)fn_82F739E8(auStack_30,0xffffffff82133c4c,uVar3);
      uStack_40 = *puVar2;
      goto LAB_82f75be8;
    }
    if (cVar1 == 'X') {
      uVar3 = 0xffffffff82169ed0;
    }
    else {
      iVar5 = iVar7;
      if (cVar1 != 'Y') goto LAB_82f75be8;
      uVar3 = 0xffffffff82169edc;
    }
  }
  fn_82F73308(&uStack_40,uVar3);
  iVar5 = iVar7;
LAB_82f75be8:
  uStack_38 = (unsigned __int64)(((unsigned __int64)(uStack_38) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  if (iVar5 != 0) {
    uStack_38 = uStack_40;
  }
  fn_82F75998(&uStack_40);
  fn_82F73228(&uStack_38,&uStack_40);
  *param_1 = uStack_38;
  return param_1;
}

