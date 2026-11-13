extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_82695128();


unsigned __int64 fn_8269AEB8(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  int aiStack_20 [2];
  
  if ((*(unsigned int *)(*param_1 + 0xc) >> 0x1d & 1) == 0) {
    iVar2 = fn_82693A98(param_1);
    if ((iVar2 != 0) && (iVar2 = fn_82693B08(param_1,0), iVar2 == 0x5f)) {
      fn_82695128(aiStack_20,param_1);
      iVar2 = aiStack_20[0];
      if ((*(unsigned int *)(aiStack_20[0] + 0xc) >> 0x1c & 1) != 0) {
        if (param_2 != (int *)0x0) {
          *(int *)(aiStack_20[0] + 8) = *(int *)(aiStack_20[0] + 8) + 1;
          lVar3 = (unsigned __int64)*(unsigned int *)(*param_2 + 8) - 1;
          *(int *)(*param_2 + 8) = (int)lVar3;
          if (lVar3 == 0) {
            fn_826944C8();
          }
          *param_2 = iVar2;
        }
        lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_20[0] + 8) - 1;
        *(int *)(aiStack_20[0] + 8) = (int)lVar3;
        if (lVar3 == 0) {
          fn_826944C8(aiStack_20[0]);
        }
        goto LAB_8269aee4;
      }
      lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_20[0] + 8) - 1;
      *(int *)(aiStack_20[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_20[0]);
      }
    }
    uVar1 = 0;
  }
  else {
LAB_8269aee4:
    uVar1 = 1;
  }
  return uVar1;
}

