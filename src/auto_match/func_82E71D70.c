extern unsigned int *auStack_58;
extern int fn_82E6FC00();
extern int fn_82E6FDA0();
extern int fn_82E704F0();
extern int fn_82E70780();
extern int fn_82E71CC8();
extern unsigned int uStack_6c;


__int64 fn_82E71D70(int *param_1,unsigned __int64 param_2)

{
  int iVar3;
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar4;
  unsigned int uVar5;
  int *piVar6;
  int *piStack_70;
  unsigned int uStack_6c;
  __int64 lStack_68;
  __int64 lStack_60;
  unsigned __int64 auStack_58 [11];
  
  piStack_70 = (int *)0x0;
  lStack_68 = 0;
  uStack_6c = 0xffffffff;
  iVar3 = fn_82E704F0(param_1,param_2,&piStack_70,&lStack_68);
  lVar4 = lStack_68;
  piVar6 = piStack_70;
  if (iVar3 < 0) {
    lVar1 = fn_82E71CC8(param_1,&piStack_70);
    piVar6 = piStack_70;
    if (lVar1 < 0) goto LAB_82e7200c;
    lStack_68 = 0;
    lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x4c))((int *)param_1[0x16],piStack_70,&lStack_68);
    if (lVar1 < 0) goto LAB_82e7200c;
    uStack_6c = 0;
    lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],&uStack_6c);
    if (((lVar1 < 0) || (lVar1 = fn_82E6FDA0(param_1,piVar6), lVar1 < 0)) ||
       (lVar1 = (**(int (***)())(*piVar6 + 0x40))(piVar6,param_2 >> 0x20 & 0xffff), lVar1 < 0))
    goto LAB_82e7200c;
    lVar4 = *(__int64 *)(param_1 + 0xc) + (unsigned __int64)uStack_6c + lStack_68;
    uVar5 = 0;
LAB_82e71ea4:
    uStack_6c = 0;
    lVar1 = (**(int (***)())(*piVar6 + 0x1c))(piVar6,&uStack_6c);
    if ((lVar1 < 0) ||
       (lVar1 = fn_82E6FC00(param_1,((__int64)(int)uStack_6c * (__int64)(int)uVar5 & 0xffffffffU
                                      ) + lVar4,param_2 & 0xffffffff), lVar1 < 0))
    goto LAB_82e7200c;
    piStack_70 = (int *)0x0;
    lVar1 = (**(int (***)())(*piVar6 + 0x24))(piVar6,&piStack_70);
    if ((lVar1 < 0) ||
       (lVar1 = (**(int (***)())(*piVar6 + 0x38))(piVar6,(int)piStack_70 + 1), lVar1 < 0))
    goto LAB_82e7200c;
  }
  else {
    iVar3 = fn_82E70780(param_1,param_2,piStack_70,lStack_68,&uStack_6c);
    uVar5 = uStack_6c;
    if (iVar3 < 0) {
      if ((iVar3 != -0x3ff2c92b) || (uStack_6c == 0xffffffff)) {
        lVar1 = 1;
        goto LAB_82e7200c;
      }
      goto LAB_82e71ea4;
    }
  }
  lStack_60 = 0;
  iVar3 = *piVar6;
  uVar2 = (**(int (***)())(*param_1 + 0x34))(param_1);
  lVar1 = (**(int (***)())(iVar3 + 0x2c))(piVar6,uVar5,*(unsigned short *)(param_1 + 2),uVar2,&lStack_60);
  if (-1 < lVar1) {
    auStack_58[0] = 0;
    iVar3 = *piVar6;
    lVar4 = lStack_60 + lVar4;
    uVar2 = (**(int (***)())(*param_1 + 0x34))(param_1);
    lVar1 = (**(int (***)())(iVar3 + 0x20))(piVar6,*(unsigned short *)(param_1 + 2),uVar2,auStack_58);
    if (-1 < lVar1) {
      lVar1 = -1;
      if (*(unsigned __int64 *)(param_1 + 0x10) - auStack_58[0] < 0x100000000) {
        lVar1 = (*(unsigned __int64 *)(param_1 + 0x10) & 0xffffffff) - (auStack_58[0] & 0xffffffff);
      }
      lVar1 = fn_82E6FC00(param_1,lVar4,lVar1);
    }
  }
LAB_82e7200c:
  if (piVar6 != (int *)0x0) {
    (**(int (***)())(*piVar6 + 8))(piVar6);
  }
  *(__int64 *)(param_1 + 0x12) = *(__int64 *)(param_1 + 0x12) + 1;
  return lVar1;
}

