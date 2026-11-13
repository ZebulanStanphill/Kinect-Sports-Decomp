#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))


void fn_82635BB0(int *param_1,__int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x9b3] = 0;
  *(unsigned __int64 *)(param_1 + iVar1 * 0x9b4 + 0x946) =
       1L << (0x3fU - param_2 & 0x7f) | *(unsigned __int64 *)(param_1 + iVar1 * 0x9b4 + 0x946);
  iVar4 = iVar1 * 0x26d0 + 0x2568;
  uVar2 = (unsigned int)((param_2 + 0x8c8U & 0x3fffffff) >> 3) & 0x7fffffc;
  uVar3 = (unsigned int)((param_2 + 0x8c8U & 0x3fffffff) << 2);
  *(unsigned int *)((int)param_1 + uVar2 + iVar4) =
       1 << (uVar3 >> 2 & 0x1f) | *(unsigned int *)((int)param_1 + uVar2 + iVar4);
  *(unsigned int *)((int)param_1 + uVar3 + iVar1 * 0x26d0 + 0x170) =
       (unsigned int)CONCAT21(CONCAT11(*(unsigned char *)(param_3 + 0xb),*(unsigned char *)(param_3 + 7)),
                      *(unsigned char *)(param_3 + 3));
  return;
}

