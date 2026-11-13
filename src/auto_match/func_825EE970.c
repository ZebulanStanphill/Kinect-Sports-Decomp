extern int fn_825ED7A8();
extern int fn_825EE4D8();


void fn_825EE970(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  int iVar1;
  
  iVar1 = *(int *)*param_3;
  if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 8) != 0) {
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
    *(unsigned int *)(iVar1 + 0x2f04) = 0;
    *(unsigned int *)(iVar1 + 0x28dc) = *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
    fn_825EE4D8(param_1,param_2,param_5);
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
    *(unsigned int *)(iVar1 + 0x2f04) = 0xf;
    *(unsigned int *)(iVar1 + 0x28dc) =
         -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 0xf | *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  }
  if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x20) != 0) {
    fn_825ED7A8(param_1,param_2,param_4);
  }
  fn_825ED7A8(param_1,param_2,param_3);
  return;
}

