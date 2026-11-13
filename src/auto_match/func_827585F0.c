unsigned __int64
fn_827585F0(double param_1,double param_2,int param_3,unsigned __int64 param_4,int param_5,
             unsigned short param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9)

{
  unsigned short uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = *(int *)(param_3 + 8);
  if (((*(int *)(iVar2 + 0x60) != 0) && (*(int *)(param_3 + 0x14) != 0)) &&
     (iVar2 = *(int *)(iVar2 + 0x60) * 0x18 + *(int *)(iVar2 + 0x5c), *(int *)(iVar2 + -0xc) == 0))
  {
    if (((((*(int *)(iVar2 + -0x10) != param_5) ||
          ((unsigned __int64)*(unsigned short *)(iVar2 + -0x14) != ((__int64)param_1 & 0xffffffffU))) ||
         ((uVar1 = *(unsigned short *)(iVar2 + -8), (uVar1 & 1) != (param_6 & 0xff) ||
          (((uVar1 & 6) != param_7 || ((uVar1 & 0xc0) != param_8)))))) ||
        ((uVar1 & 0x30) != param_9)) || (uVar3 = 1, (double)*(float *)(iVar2 + -4) != param_2)) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

