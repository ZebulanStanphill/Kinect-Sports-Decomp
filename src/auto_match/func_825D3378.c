extern unsigned int lbl_8218E3E8;


unsigned __int64
fn_825D3378(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8,int param_9)

{
  unsigned char *pbVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned int in_stack_00000054;
  
  pbVar5 = (unsigned char *)(param_2 + 2);
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *param_2) {
    do {
      if (pbVar5 == (unsigned char *)0x0) {
        return uVar3;
      }
      if ((((*(unsigned int *)(*(short *)(pbVar5 + 2) * 4 + param_9) & *(unsigned int *)(pbVar5 + 4) & param_8) != 0
           ) && ((int (**)())(&lbl_8218E3E8)[(unsigned int)*pbVar5 * 5] != (int (**)())0x0)) &&
         (iVar2 = (*(int (**)())(&lbl_8218E3E8)[(unsigned int)*pbVar5 * 5])
                            (param_1,pbVar5,param_3,param_4,param_5,param_6,param_7,
                             in_stack_00000054), iVar2 != 0)) {
        uVar3 = 1;
      }
      pbVar1 = pbVar5 + 1;
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar5 + *pbVar1;
      if (*pbVar1 == 0) {
        pbVar5 = (unsigned char *)0x0;
      }
    } while (iVar4 < *param_2);
  }
  return uVar3;
}

