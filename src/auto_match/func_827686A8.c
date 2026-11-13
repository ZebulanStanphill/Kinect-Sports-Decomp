extern unsigned int lbl_82014C48;
extern float lbl_82014C4C;


double fn_827686A8(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((param_2 != 0xffffffff) && (param_2 < *(unsigned int *)(param_1 + 0x38))) {
    iVar1 = *(int *)(param_1 + 0x3c) + param_2 * 8;
    uVar3 = iVar1 + 2;
    uVar2 = iVar1 + 3;
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
    return (double)(((float)((int)(short)((unsigned short)*(unsigned char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) +
                                                                    iVar1) + (uVar2 & 0xfff)) << 8)
                            | (unsigned int)*(unsigned char *)(*(int *)((uVar3 >> 10 & 0x3ffffc) + iVar1) +
                                             (uVar3 & 0xfff))) * lbl_82014C4C) /
                   (float)*(unsigned int *)(param_1 + 0x58));
  }
  return (double)lbl_82014C48;
}

