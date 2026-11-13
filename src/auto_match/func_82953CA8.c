extern unsigned int *auStack_2c;
extern int fn_82975B00();
extern unsigned int uStack_30;


unsigned int fn_82953CA8(int *param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  uVar6 = 0;
  uStack_30 = 0;
  auStack_2c = 0;
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = 0;
  }
  iVar2 = *(int *)(param_2 + 4);
  if (param_1[0x22] == iVar2) {
    auStack_2c = *(unsigned int *)(param_2 + 0xc);
    uStack_30 = 0;
    if ((unsigned int)param_1[0xb] <= auStack_2c) {
      uVar4 = 0x1199;
      uVar5 = 0xffffffff82037a48;
LAB_82953d10:
      fn_82975B00(param_1,*(unsigned int *)(param_1[0x41] + 0x3c),uVar4,uVar5);
      return 0x88760b59;
    }
    uVar1 = param_1[0x14];
    uVar3 = auStack_2c;
    if ((uVar1 != 0) && (uVar1 <= auStack_2c)) {
      uVar6 = 3;
      uStack_30 = 3;
      uVar3 = auStack_2c - uVar1;
      auStack_2c = auStack_2c - uVar1;
    }
  }
  else if (param_1[0x23] == iVar2) {
    auStack_2c = *(unsigned int *)(param_2 + 0xc);
    uVar6 = 3;
    uStack_30 = 3;
    uVar3 = 0;
    if (auStack_2c != 0) {
      uVar4 = 0x119c;
      uVar5 = 0xffffffff82037a20;
      goto LAB_82953d10;
    }
  }
  else if (param_1[0x21] == iVar2) {
    iVar2 = (**(int (***)())(*param_1 + 0x158))(param_1,param_2,&auStack_2c,&uStack_30);
    if (iVar2 < 0) {
      return 0x80004005;
    }
    uVar6 = (unsigned __int64)uStack_30;
    uVar3 = auStack_2c;
  }
  else {
    if (param_1[0x24] != iVar2) {
      fn_82975B00(param_1,0,0,0xffffffff820379c4);
      return 0x80004005;
    }
    uVar3 = *(unsigned int *)(param_2 + 0xc);
    uVar6 = 0x13;
    uStack_30 = 0x13;
    auStack_2c = uVar3;
    if ((unsigned int)param_1[0xd] <= uVar3) {
      uVar4 = 0x11c5;
      uVar5 = 0xffffffff820379f4;
      goto LAB_82953d10;
    }
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = (unsigned int)(((uVar6 & 7) << 0x14 | 0x800000 | uVar6 & 0x18) << 8) | uVar3 & 0x7ff;
  }
  uVar3 = (**(int (***)())(*param_1 + 0x150))(param_1,param_2,param_4);
  return (int)uVar3 >> 0x1f & uVar3;
}

