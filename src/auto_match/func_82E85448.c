extern unsigned int lbl_8215F4B8;
extern unsigned int lbl_8215F4D4;
extern unsigned int lbl_8215F4F0;
extern unsigned int lbl_8215F528;
extern unsigned int lbl_831A9794;


void fn_82E85448(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = (int)((param_2 & 0xffffffff) << 2);
    *(unsigned int *)(param_1 + 0x854) = *(unsigned int *)(&lbl_8215F4B8 + iVar1);
    *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(&lbl_8215F4D4 + iVar1);
  }
  else {
    iVar1 = (int)((param_2 - 0x70 & 0xffffffff) << 2);
    *(unsigned int *)(param_1 + 0x854) = *(unsigned int *)(&lbl_8215F4F0 + iVar1);
    *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(&lbl_8215F528 + iVar1);
  }
  *(unsigned int *)(param_1 + 0x850) = *(unsigned int *)(&lbl_831A9794 + *(int *)(param_1 + 0x858) * 4);
  return;
}

