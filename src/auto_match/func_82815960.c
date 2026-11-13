extern unsigned int *auStack_70;
extern int fn_82814A08();
extern int fn_82815268();
extern int fn_82815798();
extern int fn_82820290();
extern int (*lbl_8320A5D0)();


unsigned __int64 fn_82815960(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int auStack_70;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar7 = 0;
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x100;
  }
  lVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 0x68) - 1;
  *(int *)(param_2 + 0x68) = (int)lVar5;
  if (lVar5 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x200;
      fn_82814A08(param_2);
      *(unsigned int *)(param_2 + 0x68) = 0;
      iVar2 = *(int *)(param_2 + 0x1c);
      if ((*(char *)(iVar2 + 0x52) != '\0') && (*(char *)(iVar2 + 0x51) != '\0')) {
        uVar6 = 0;
        do {
          iVar4 = uVar6 * 0x21 + *(int *)(param_2 + 0x30);
          if (*(unsigned int *)(iVar4 + 0x1d) < *(unsigned int *)(iVar4 + 9)) {
            *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < *(unsigned char *)(iVar2 + 0x51));
      }
      if ((*(int *)(param_2 + 0x68) == 0) || ((*(unsigned int *)(param_2 + 0x10) & 0x1000) != 0)) {
        *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
        uVar7 = fn_82815798(param_1,param_2,0);
      }
      else if (*(char *)(iVar2 + 0x51) != '\0') {
        uVar6 = 0;
        do {
          iVar4 = uVar6 * 0x21 + *(int *)(param_2 + 0x30);
          uVar9 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x1d);
          uVar8 = (unsigned __int64)*(unsigned int *)(iVar4 + 9);
          if (uVar9 < uVar8) {
            lVar5 = (unsigned __int64)*(unsigned int *)(iVar4 + 0xd) + (unsigned __int64)*(unsigned int *)(iVar4 + 0x11);
            lVar10 = ((*(unsigned int *)(iVar4 + 0xd) - uVar9) + (unsigned __int64)*(unsigned int *)(iVar4 + 0x11) +
                      (unsigned __int64)*(unsigned int *)(iVar4 + 0x15) + uVar8 + 0x43 & 0xfffffffc) -
                     (unsigned __int64)*(unsigned int *)(iVar4 + 0x15);
            if (iVar1 != 0) {
              fn_82820290(iVar1,uVar6 + 3,&auStack_70);
              lVar10 = (unsigned __int64)auStack_70 + lVar10;
              lVar5 = (unsigned __int64)auStack_70 + lVar5;
            }
            if ((*(unsigned int *)(param_2 + 0x10) & 2) == 0) {
              if (lbl_8320A5D0 == (int (**)())0x0) goto LAB_82815b50;
              uVar3 = (*lbl_8320A5D0)(*(unsigned int *)(param_2 + 0x18),lVar10,uVar9,lVar5,uVar8);
            }
            else {
              if (*(int (***)())(param_1 + 0xc) != (int (**)())0x0) {
                (**(int (***)())(param_1 + 0xc))
                          (*(unsigned int *)(param_2 + 0x18),lVar10,uVar9,lVar5,uVar8,
                           0xffffffff82815798,param_2);
                goto LAB_82815b64;
              }
LAB_82815b50:
              uVar3 = 0;
            }
            uVar7 = fn_82815798(param_1,param_2,uVar3);
          }
LAB_82815b64:
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < *(unsigned char *)(iVar2 + 0x51));
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

