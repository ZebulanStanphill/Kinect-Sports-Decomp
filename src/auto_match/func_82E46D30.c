extern unsigned int *auStack_4c;
extern int memcpy();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


__int64 fn_82E46D30(int *param_1,int *param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int iStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int auStack_4c;
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iStack_60 = 0;
  auStack_4c = 0;
  lVar1 = (**(int (***)())(*param_2 + 0xc))(param_2,&iStack_60,0,&auStack_4c);
  if (-1 < lVar1) {
    uStack_54 = 0;
    lVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2,&uStack_54);
    if (-1 < lVar1) {
      uStack_58 = 0;
      lVar1 = (**(int (***)())(*param_1 + 0xb4))(param_1,&uStack_58);
      if (-1 < lVar1) {
        if (uStack_54 < uStack_58) {
          lVar1 = -0x3ff2c94f;
        }
        else {
          uVar2 = 0;
          if (param_1[0x19] != 0) {
            iVar3 = 0;
            do {
              piVar4 = (int *)(iVar3 + param_1[0x1d]);
              if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
                lVar1 = -0x7fff0001;
                goto LAB_82e46eb4;
              }
              uStack_50 = 0;
              iStack_5c = 0;
              lVar1 = (**(int (***)())(*(int *)*piVar4 + 0xc))((int *)*piVar4,&uStack_50,0,&iStack_5c);
              if (lVar1 < 0) goto LAB_82e46eb4;
              memcpy(iStack_60,uStack_50,iStack_5c);
              iStack_60 = iStack_5c + iStack_60;
              (**(int (***)())(*(int *)*piVar4 + 0x10))();
              uVar2 = uVar2 + 1;
              iVar3 = iVar3 + 4;
            } while (uVar2 < (unsigned int)param_1[0x19]);
          }
          lVar1 = (**(int (***)())(*param_2 + 0x18))(param_2,uStack_58);
          if (-1 < lVar1) goto LAB_82e46ecc;
        }
      }
    }
  }
LAB_82e46eb4:
  (**(int (***)())(*param_2 + 0x18))(param_2,0);
LAB_82e46ecc:
  (**(int (***)())(*param_2 + 0x10))(param_2);
  return lVar1;
}

