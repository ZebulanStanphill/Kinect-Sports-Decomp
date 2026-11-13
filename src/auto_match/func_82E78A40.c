extern int fn_82E65B08();
extern int fn_82E78228();
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;


__int64 fn_82E78A40(__int64 param_1,int param_2,int *param_3)

{
  int *piVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int *piStack_60;
  int iStack_5c;
  unsigned int *puStack_58;
  int iStack_54;
  int iStack_50;
  unsigned int *puStack_4c;
  int iStack_48;
  unsigned int *puStack_44;
  int aiStack_40 [16];
  
  piStack_60 = (int *)0x0;
  iStack_5c = 0;
  lVar2 = 0;
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    lVar2 = -0x7fffbffd;
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x140);
    if (uVar3 < (uVar3 + *(unsigned int *)(param_2 + 0x144) & 0xffffffff)) {
      param_1 = param_1 + 0x244;
      do {
        fn_82E78228(param_1,uVar3,&puStack_58);
        lVar2 = (**(int (***)())(*(int *)*puStack_58 + 0x14))((int *)*puStack_58,&iStack_5c);
        piVar1 = piStack_60;
        if (lVar2 < 0) break;
        fn_82E78228(param_1,uVar3,&iStack_54);
        if ((*(int *)(iStack_54 + 4) == 0) &&
           (fn_82E78228(param_1,uVar3,&iStack_50), iStack_5c == *(int *)(iStack_50 + 8))) {
          fn_82E78228(param_1,uVar3,&puStack_4c);
          piVar1 = (int *)*puStack_4c;
        }
        else {
          fn_82E78228(param_1,uVar3,&iStack_48);
          fn_82E78228(param_1,uVar3,&puStack_44);
          lVar2 = fn_82E65B08(*puStack_44,*(unsigned int *)(iStack_48 + 4),&piStack_60);
          piVar1 = piStack_60;
          if (lVar2 < 0) break;
          fn_82E78228(param_1,uVar3,aiStack_40);
          lVar2 = (**(int (***)())(*piStack_60 + 0x18))(piStack_60,*(unsigned int *)(aiStack_40[0] + 8));
          piVar1 = piStack_60;
          if (lVar2 < 0) break;
        }
        lVar2 = (**(int (***)())(*param_3 + 0xa8))(param_3,piVar1);
        piVar1 = piStack_60;
        if (lVar2 < 0) break;
        if (piStack_60 != (int *)0x0) {
          (**(int (***)())(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        piVar1 = (int *)0x0;
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) <
               ((unsigned __int64)*(unsigned int *)(param_2 + 0x140) + (unsigned __int64)*(unsigned int *)(param_2 + 0x144) &
               0xffffffff));
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 8))();
      }
    }
  }
  return lVar2;
}

