extern unsigned int *auStack_70;
extern int fn_828148D8();
extern int fn_82815268();
extern int fn_82815BA8();
extern int fn_82820290();
extern int (*lbl_8320A5D0)();


unsigned __int64 fn_82815E50(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int auStack_70;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar7 = 0;
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x40;
  }
  lVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x6c) - 1;
  *(int *)(param_2 + 0x6c) = (int)lVar4;
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x40;
      fn_828148D8(param_2);
      *(unsigned int *)(param_2 + 0x6c) = 0;
      if (*(char *)(*(int *)(param_2 + 0x1c) + 0x52) != '\0') {
        iVar6 = 0;
        lVar4 = 2;
        do {
          iVar5 = iVar6 + *(int *)(param_2 + 0x1c);
          if (*(unsigned int *)(iVar5 + 0x68) < *(unsigned int *)(iVar5 + 0x58)) {
            *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
          }
          iVar6 = iVar6 + 0x14;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if ((*(int *)(param_2 + 0x6c) == 0) || ((*(unsigned int *)(param_2 + 0x10) & 0x1000) != 0)) {
        *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
        uVar7 = fn_82815BA8(param_1,param_2,0);
      }
      else {
        lVar4 = 0;
        uVar8 = 0;
        do {
          iVar6 = *(int *)(param_2 + 0x1c) + uVar8;
          uVar10 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x68);
          uVar9 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x58);
          if (uVar10 < uVar9) {
            uVar3 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x5c);
            lVar11 = ((uVar3 - uVar10) + (unsigned __int64)*(unsigned int *)(iVar6 + 0x60) + uVar9 + 0x43 &
                     0xfffffffc) - (unsigned __int64)*(unsigned int *)(iVar6 + 0x60);
            if (iVar1 != 0) {
              fn_82820290(iVar1,lVar4 + 1,&auStack_70);
              lVar11 = (unsigned __int64)auStack_70 + lVar11;
              uVar3 = auStack_70 + uVar3;
            }
            if ((*(unsigned int *)(param_2 + 0x10) & 2) == 0) {
              if (lbl_8320A5D0 == (int (**)())0x0) goto LAB_82816014;
              uVar2 = (*lbl_8320A5D0)(*(unsigned int *)(param_2 + 0x18),lVar11,uVar10,uVar3,uVar9);
            }
            else {
              if (*(int (***)())(param_1 + 0xc) != (int (**)())0x0) {
                (**(int (***)())(param_1 + 0xc))
                          (*(unsigned int *)(param_2 + 0x18),lVar11,uVar10,uVar3,uVar9,
                           0xffffffff82815ba8,param_2);
                goto LAB_82816028;
              }
LAB_82816014:
              uVar2 = 0;
            }
            uVar7 = fn_82815BA8(param_1,param_2,uVar2);
          }
LAB_82816028:
          uVar8 = uVar8 + 0x14;
          lVar4 = lVar4 + 1;
        } while (uVar8 < 0x28);
      }
    }
    else {
      uVar7 = fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
    }
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 0xc);
  }
  return uVar7;
}

