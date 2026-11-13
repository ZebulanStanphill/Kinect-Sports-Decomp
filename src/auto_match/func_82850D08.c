extern unsigned int lbl_83156E70;


void fn_82850D08(int param_1,char param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  iVar2 = *(int *)((param_4 + 2) * 4 + param_3);
  if (param_2 != '\0') {
    *(unsigned char *)((uVar1 >> 3) + iVar2) = (&lbl_83156E70)[uVar1 & 7] | *(unsigned char *)((uVar1 >> 3) + iVar2);
    return;
  }
  *(unsigned char *)((uVar1 >> 3) + iVar2) = *(unsigned char *)((uVar1 >> 3) + iVar2) & ~(unsigned char)(0x80 >> (uVar1 & 7));
  return;
}

