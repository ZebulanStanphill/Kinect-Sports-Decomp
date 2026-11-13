extern unsigned fn_827B0790(int,unsigned);


unsigned int fn_827B1400(int param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int lVar2;
  unsigned int uVar3;
  
  uVar1 = fn_827B0790(param_1,param_2);
  lVar2 = fn_827B0790(param_3,param_4);
  if ((uVar1 - param_2) != (lVar2 - param_4)) return 0;
 {
    if ((param_2) < (uVar1)) {
      do {
        if (*(char *)(*(int *)(((unsigned int)param_2 >> 10 & 0x3ffffc) +
                              *(int *)(*(int *)(param_1 + 0xc) + 0xc)) + ((unsigned int)param_2 & 0xfff)) !=
            *(char *)(*(int *)(((unsigned int)param_4 >> 10 & 0x3ffffc) +
                              *(int *)(*(int *)(param_3 + 0xc) + 0xc)) + ((unsigned int)param_4 & 0xfff)))
        return 0;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
      } while ((param_2) < (uVar1));
    }
    uVar3 = 1;
  }
  return uVar3;
}
