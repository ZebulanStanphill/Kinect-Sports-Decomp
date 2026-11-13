extern int fn_82BE5240();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BF8AB8();
extern int fn_82BF8BD0();


unsigned __int64 fn_82BF0EB0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 0x10) == 0x17) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x28);
  }
  if (iVar7 == 0) {
    lVar3 = 0x25d;
  }
  else {
    if (iVar1 == 0) {
      pcVar8 = (char *)0x0;
    }
    else {
      pcVar8 = *(char **)(iVar1 + 0x2c);
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      lVar3 = 0x25b;
    }
    else {
      if (*(int *)(param_1 + 0x6c) != 0) {
        iVar1 = thunk_FUN_82be5550(0x58);
        if (iVar1 == 0) {
          puVar2 = (unsigned int *)0x0;
        }
        else {
          puVar2 = (unsigned int *)fn_82BF8AB8();
        }
        if (puVar2 == (unsigned int *)0x0) {
          *(unsigned int *)(param_1 + 0x10) = 0;
          lVar3 = 0x65;
          uVar4 = 0xffffffff820eb4a8;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x34);
          if (iVar1 == 0) {
            uVar6 = 0;
            uVar5 = 0;
          }
          else {
            uVar6 = *(unsigned int *)(iVar1 + 0x28);
            uVar5 = *(unsigned int *)(iVar1 + 0x2c);
          }
          iVar1 = fn_82BF8BD0(puVar2,param_1,uVar5,*(unsigned int *)(param_1 + 0x6c),uVar6);
          if (iVar1 == 0) {
            *(unsigned int *)(param_1 + 0x10) = 0;
            (**(int (***)())*puVar2)(puVar2,1);
            lVar3 = 0x452;
            uVar4 = 0xffffffff820eb47c;
          }
          else {
            lVar3 = fn_82BE6590(puVar2);
            if (lVar3 == 0) {
              lVar3 = fn_82BEB9B8(param_1,puVar2);
              if (lVar3 == 0) {
                *(unsigned int *)(param_1 + 0x10) = 0x16;
                return 0;
              }
              *(unsigned int *)(param_1 + 0x10) = 0;
              fn_82BE66A0(puVar2);
              (**(int (***)())*puVar2)(puVar2,1);
              uVar4 = 0xffffffff820eb410;
            }
            else {
              *(unsigned int *)(param_1 + 0x10) = 0;
              (**(int (***)())*puVar2)(puVar2,1);
              uVar4 = 0xffffffff820eb450;
            }
          }
        }
        goto LAB_82bf0f00;
      }
      lVar3 = 0x25c;
    }
  }
  uVar4 = 0xffffffff82196582;
LAB_82bf0f00:
  uVar4 = fn_82BE5240(param_1,lVar3,uVar4);
  return uVar4;
}

