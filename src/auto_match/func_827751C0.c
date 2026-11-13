extern int fn_82774720();


int fn_827751C0(int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) &&
     (iVar2 = fn_82774720(param_1,param_2,
                              ((unsigned int)(*(unsigned char *)((int)param_2 + 7) ^ *(unsigned char *)((int)param_2 + 6)) ^
                               (unsigned int)*(unsigned short *)(param_2 + 1) ^ *param_2 >> 6 ^ *param_2) &
                              *(unsigned int *)(iVar1 + 4)), iVar2 >= 0)) {
    return iVar2 * 0x14 + iVar1 + 0x10;
  }
  return 0;
}

