extern int fn_82F35400();
extern unsigned int uStack_70;


unsigned __int64 fn_82F36668(int *param_1,int param_2,__int64 *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_70;
  int *piStack_6c;
  int *piStack_68;
  unsigned int *puStack_64;
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned int * apuStack_58;
  __int64 lStack_50;
  __int64 alStack_48 [1];
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if ((param_2 == 0) || (param_3 == (__int64 *)0x0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    lStack_50 = 0;
    uVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,&lStack_50,0);
    if (-1 < (int)uVar2) {
      uVar1 = param_1[0x31];
      uVar4 = 0;
      if (uVar1 != 0) {
        param_1 = param_1 + 0x17;
        do {
          fn_82F35400(param_1,uVar4,&piStack_6c);
          if (*piStack_6c == param_2) {
            *param_3 = lStack_50;
            return 0;
          }
          fn_82F35400(param_1,uVar4,&piStack_68);
          if (*piStack_68 != 0) {
            uStack_70 = 0;
            fn_82F35400(param_1,uVar4,&puStack_64);
            (**(int (***)())(*(int *)*puStack_64 + 0x10))((int *)*puStack_64,&uStack_70);
            fn_82F35400(param_1,uVar4,&puStack_60);
            (**(int (***)())(*(int *)*puStack_60 + 0xc))((int *)*puStack_60,uStack_70 | 1);
            fn_82F35400(param_1,uVar4,&puStack_5c);
            iVar3 = (**(int (***)())(*(int *)*puStack_5c + 0x18))((int *)*puStack_5c,alStack_48);
            if (-1 < iVar3) {
              lStack_50 = alStack_48[0] + lStack_50;
            }
            fn_82F35400(param_1,uVar4,&apuStack_58);
            (**(int (***)())(*(int *)*apuStack_58 + 0xc))((int *)*apuStack_58,uStack_70);
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (unsigned __int64)uVar1);
      }
      uVar2 = 0xffffffffc00d3a9c;
    }
  }
  return uVar2;
}

