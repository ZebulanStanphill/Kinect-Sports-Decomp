extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E52428();
extern int fn_82E63250();
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


__int64 fn_82E524D8(int param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                      unsigned int *param_6)

{
  __int64 lVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned int uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned int uStack_80;
  int aiStack_7c [3];
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  
  fn_82E50F00(param_1 + 4,1);
  lVar1 = (**(int (***)())(*param_2 + 0x70))(param_2);
  if (lVar1 < 0) goto LAB_82e527fc;
  if (param_3 == 4) {
    uStack_80 = 0;
    lVar1 = (**(int (***)())(*param_2 + 0x78))(param_2,&uStack_80);
    if (-1 < lVar1) {
      param_3 = -(unsigned int)(uStack_80 < *(unsigned int *)(param_1 + 0x48)) & 1;
      goto LAB_82e5256c;
    }
    goto LAB_82e527e8;
  }
LAB_82e5256c:
  if (param_3 == 0) {
LAB_82e5271c:
    uVar5 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar4 = 0;
      do {
        iVar3 = fn_82E63250(param_1,*(unsigned __int64 *)(iVar4 + *(int *)(param_1 + 0x40)),
                                *(unsigned __int64 *)(iVar4 + *(int *)(param_1 + 0x40) + 8),param_4,
                                param_5);
        if (iVar3 == 0) {
          iVar3 = iVar4 + *(int *)(param_1 + 0x40);
          lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,iVar3,iVar3 + 0x10,aiStack_7c);
          if (lVar1 < 0) goto LAB_82e527e8;
          if (aiStack_7c[0] == 0) goto LAB_82e52714;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar5 < *(unsigned int *)(param_1 + 0x48));
    }
    if (param_3 == 2) {
      uStack_80 = 0;
      lVar1 = (**(int (***)())(*param_2 + 0x78))(param_2,&uStack_80);
      if (-1 < lVar1) {
        if (uStack_80 == *(unsigned int *)(param_1 + 0x48)) goto LAB_82e527e0;
LAB_82e52714:
        *param_6 = 0;
      }
    }
    else {
LAB_82e527e0:
      *param_6 = 1;
    }
  }
  else if (param_3 == 1) {
    uStack_80 = 0;
    lVar1 = (**(int (***)())(*param_2 + 0x78))(param_2,&uStack_80);
    if (-1 < lVar1) {
      uVar6 = 0;
      if (uStack_80 != 0) {
        do {
          lVar1 = (**(int (***)())(*param_2 + 0x7c))(param_2,uVar6,&uStack_70,0);
          if (lVar1 < 0) goto LAB_82e527e8;
          iVar4 = fn_82E63250(param_1,uStack_70,uStack_68,param_4,param_5);
          if (iVar4 == 0) {
            lVar2 = fn_82E52428(param_1,&uStack_70);
            if (lVar2 == 0) goto LAB_82e52714;
            lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,&uStack_70,lVar2,aiStack_7c);
            if (lVar1 < 0) goto LAB_82e527e8;
            if (aiStack_7c[0] == 0) goto LAB_82e52714;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)uStack_80);
      }
      goto LAB_82e527e0;
    }
  }
  else {
    if (param_3 < 3) goto LAB_82e5271c;
    if (param_3 == 3) {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        iVar4 = 0;
        do {
          iVar7 = iVar4 + *(int *)(param_1 + 0x40);
          iVar3 = fn_82E63250(param_1,*(unsigned __int64 *)(iVar4 + *(int *)(param_1 + 0x40)),
                                  *(unsigned __int64 *)(iVar7 + 8),param_4,param_5);
          if ((iVar3 == 0) && (iVar3 = (**(int (***)())(*param_2 + 0xc))(param_2,iVar7,0), -1 < iVar3))
          {
            iVar3 = iVar4 + *(int *)(param_1 + 0x40);
            lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,iVar3,iVar3 + 0x10,&uStack_80);
            if (lVar1 < 0) goto LAB_82e527e8;
            if (uStack_80 == 0) goto LAB_82e52714;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x20;
        } while (uVar5 < *(unsigned int *)(param_1 + 0x48));
      }
      goto LAB_82e527e0;
    }
    lVar1 = -0x7ff8ffa9;
  }
LAB_82e527e8:
  (**(int (***)())(*param_2 + 0x74))(param_2);
LAB_82e527fc:
  fn_82E51028(param_1 + 4,1);
  return lVar1;
}

