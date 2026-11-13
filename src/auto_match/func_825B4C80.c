extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_8251F468();
extern int fn_8251F720();
extern int fn_82522DF8();
extern int fn_82526A20();
extern int fn_82526C70();
extern int fn_82569C38();
extern int fn_8265BF48();
extern int fn_82837BA0();
extern int fn_82839198();
extern int fn_82851580();
extern int fn_82851760();
extern int fn_82851858();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_825B4C80(int *param_1,int *param_2,unsigned __int64 param_3)

{
  char *pcVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int auStack_78 [2];
  unsigned char auStack_70 [112];
  
  fn_82851580(0,*param_1);
  iVar4 = *param_1;
  uVar8 = 0;
  if (*(int *)(iVar4 + 300) != 0) {
    iVar6 = 0;
    do {
      puVar2 = (unsigned int *)(*(int *)(iVar4 + 0x128) + iVar6);
      if (puVar2[1] == 0) {
        uStack_80 = fn_8265BF48(*puVar2);
        if ((param_3 & 0xffffffff) == 0) {
          uVar3 = fn_8251F720(&uStack_80,0);
          *(unsigned int *)(*(int *)(*param_1 + 0x128) + iVar6 + 4) = uVar3;
        }
        else {
          fn_8251F468(&uStack_80,*(int *)(*param_1 + 0x128) + iVar6 + 4,3,param_3,0,0,0,0);
        }
        pcVar1 = *(char **)(*(int *)(*param_1 + 0x128) + iVar6 + 8);
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          uStack_80 = fn_8265BF48(pcVar1,0);
          if ((param_3 & 0xffffffff) == 0) {
            uVar3 = fn_8251F720(&uStack_80,0);
            *(unsigned int *)(*(int *)(*param_1 + 0x128) + iVar6 + 0xc) = uVar3;
          }
          else {
            fn_8251F468(&uStack_80,*(int *)(*param_1 + 0x128) + iVar6 + 0xc,3,param_3,0,0,0,0)
            ;
          }
        }
      }
      else {
        fn_82839198(0);
      }
      iVar4 = *param_1;
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x20;
    } while (uVar8 < *(unsigned int *)(iVar4 + 300));
  }
  if (*(int *)(iVar4 + 0x1c) == 0) {
    *param_2 = 0;
  }
  else {
    iVar4 = fn_82522DF8(*(int *)(iVar4 + 0x1c) << 5);
    *param_2 = iVar4;
    iVar4 = *param_1;
    uVar7 = 0;
    if (*(int *)(iVar4 + 0x1c) != 0) {
      iVar9 = 0;
      iVar6 = 0;
      do {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x98) + iVar6);
        if (iVar4 == 0) {
          uStack_80 = 0;
          fn_82526C70(auStack_70,0x20,0xffffffff821c8460,uVar7);
          iVar4 = fn_82851760(*param_1,auStack_70,0,&uStack_7c);
          if (iVar4 != 0) {
            fn_82851858(uStack_7c,&uStack_80);
          }
          uVar5 = (unsigned __int64)uStack_80;
          if (uVar5 == 0) {
            *(unsigned int *)(iVar9 + *param_2 + 0x10) = 1;
          }
          else {
            iVar4 = fn_82526A20(uVar5,0xffffffff821c8450);
            if (iVar4 != 0) {
              auStack_78[0] = fn_8265BF48(uVar5,0);
              fn_82569C38(auStack_78,iVar9 + *param_2,param_3);
            }
          }
        }
        else {
          fn_82837BA0(0,iVar4);
        }
        iVar4 = *param_1;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar9 = iVar9 + 0x20;
      } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar4 + 0x1c));
    }
  }
  return;
}

