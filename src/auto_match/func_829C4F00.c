extern int d3dx_huft_build();


__int64 d3dx_inflate_trees_dynamic(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,int *param_4,
                      int *param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  __int64 lVar2;
  char *pcVar3;
  int iVar4;
  int in_stack_00000054;
  
  lVar1 = (**(int (***)())(in_stack_00000054 + 0x20))(*(unsigned int *)(in_stack_00000054 + 0x28),0x120,4)
  ;
  if (lVar1 == 0) {
    return -4;
  }
  lVar2 = d3dx_huft_build(param_3,param_1,0x101,0xffffffff82055c68,0xffffffff82055ce8,param_6,param_4,
                        param_8);
  if (lVar2 == 0) {
    if (*param_4 != 0) {
      lVar2 = d3dx_huft_build((param_1 & 0x3fffffff) * 4 + param_3,param_2,0,0xffffffff82055d68,
                            0xffffffff82055de0,param_7,param_5,param_8);
      if (lVar2 == 0) {
        if ((*param_5 != 0) || ((param_1 & 0xffffffff) < 0x102)) {
          (**(int (***)())(in_stack_00000054 + 0x24))(*(unsigned int *)(in_stack_00000054 + 0x28),lVar1);
          return 0;
        }
LAB_829c5048:
        pcVar3 = "empty distance tree with lengths";
LAB_829c5050:
        lVar2 = -3;
      }
      else {
        iVar4 = (int)lVar2;
        if (iVar4 != -3) {
          if (iVar4 != -5) {
            if (iVar4 == -4) goto LAB_829c5058;
            goto LAB_829c5048;
          }
          pcVar3 = "incomplete distance tree";
          goto LAB_829c5050;
        }
        pcVar3 = "oversubscribed distance tree";
      }
      *(char **)(in_stack_00000054 + 0x18) = pcVar3;
LAB_829c5058:
      (**(int (***)())(in_stack_00000054 + 0x24))(*(unsigned int *)(in_stack_00000054 + 0x28),lVar1);
      return lVar2;
    }
LAB_829c5090:
    lVar2 = -3;
    pcVar3 = "incomplete literal/length tree";
  }
  else {
    if ((int)lVar2 != -3) {
      if ((int)lVar2 == -4) goto LAB_829c50a0;
      goto LAB_829c5090;
    }
    pcVar3 = "oversubscribed literal/length tree";
  }
  *(char **)(in_stack_00000054 + 0x18) = pcVar3;
LAB_829c50a0:
  (**(int (***)())(in_stack_00000054 + 0x24))(*(unsigned int *)(in_stack_00000054 + 0x28),lVar1);
  return lVar2;
}

