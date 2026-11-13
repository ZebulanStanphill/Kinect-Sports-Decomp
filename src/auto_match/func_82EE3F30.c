extern int fn_82E3BCC8();
extern int fn_82E4FE40();
extern int fn_82EE3128();
extern int fn_82EE34E0();
extern int fn_82EE3630();
extern int fn_82EE3730();
extern int fn_82F37588();
extern unsigned int iStack_4c;


unsigned __int64 fn_82EE3F30(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piStack_50;
  int iStack_4c;
  int aiStack_48;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xb0) != 0) {
      do {
        fn_82EE3630(param_1 + 0x48,uVar3,&piStack_50);
        iVar1 = *piStack_50;
        if (iVar1 != 0) {
          uVar4 = 0;
          if (*(int *)(iVar1 + 0x100) != 0) {
            do {
              fn_82EE34E0(iVar1 + 0x44,uVar4,&iStack_4c);
              if (*(int *)(iStack_4c + 4) != 0) {
                fn_82EE34E0(iVar1 + 0x44,uVar4,&aiStack_48);
                if (*(int *)(aiStack_48 + 4) != 0) {
                  fn_82E4FE40();
                }
              }
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0x100));
          }
          fn_82EE3128(iVar1 + 0x44,0);
          *(unsigned int *)(iVar1 + 0x100) = 0;
          fn_82E3BCC8(iVar1,0);
          *(unsigned int *)(iVar1 + 0x40) = 0;
          fn_82EE3730(iVar1);
          fn_82E4FE40(iVar1);
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xb0));
    }
    fn_82F37588(param_1 + 0x48,0);
    *(unsigned int *)(param_1 + 0xb0) = 0;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x170) != 0) {
      do {
        fn_82EE34E0(param_1 + 0xb4,uVar3,&aiStack_48);
        if (*(int *)(aiStack_48 + 4) != 0) {
          fn_82EE34E0(param_1 + 0xb4,uVar3,&iStack_4c);
          if (*(int *)(iStack_4c + 4) != 0) {
            fn_82E4FE40();
          }
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x170));
    }
    fn_82EE3128(param_1 + 0xb4,0);
    uVar2 = 0;
    *(unsigned int *)(param_1 + 0x170) = 0;
  }
  return uVar2;
}

