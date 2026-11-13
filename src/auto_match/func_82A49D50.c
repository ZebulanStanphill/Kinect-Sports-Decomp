extern int fn_82A49A30();
extern int fn_82A49C98();
extern int memcpy();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A49D50(unsigned short *param_1,unsigned short *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  uVar1 = *param_1;
  fn_82A49A30();
  if (uVar1 != 0xfffe) {
    *param_2 = 0xfffe;
    param_2[8] = 0x16;
    param_2[9] = param_1[7];
    uVar2 = fn_82A49C98(param_1,param_4);
    *(unsigned int *)(param_2 + 10) = uVar2;
    uStack_34 = lbl_8208E05C;
    stack_pair_40.second = lbl_8208E054;
    uStack_38 = lbl_8208E058;
    stack_pair_40.first = (unsigned int)uVar1;
    memcpy(param_2 + 0xc,&stack_pair_40.first,0x10);
    *param_3 = 0x28;
  }
  return;
}

