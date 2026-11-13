extern int fn_82490F58();


double fn_82493800(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  
  uVar2 = (*(int *)(*(int *)(param_1 + 0x40) + 0x2b44) - *(int *)(param_1 + 0x3c)) - 1;
  iVar1 = fn_82490F58(param_2,*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x38),
                       *(unsigned int *)(param_1 + 0x38),param_2);
  dVar4 = extraout_f1;
  dVar3 = (double)fn_82490F58(iVar1,*(unsigned int *)(iVar1 + 0x14));
  return (double)(float)(dVar4 * (double)(__int64)(int)(0xffffffffU - ((int)uVar2 >> 0x1f) & uVar2)
                        + dVar3);
}

