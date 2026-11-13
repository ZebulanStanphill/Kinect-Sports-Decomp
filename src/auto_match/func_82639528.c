extern unsigned int lbl_821CC078;


void fn_82639528(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  
  iVar7 = (param_2 + 0x30) * 0x18 + param_1;
  uVar6 = (param_3 & 0xffffffff) >> 2;
  uVar2 = *(unsigned int *)(iVar7 + 0x10);
  uVar3 = *(unsigned int *)(&lbl_821CC078 + (unsigned int)*(unsigned char *)(param_1 + param_2 + 0x2f44) * 4);
  uVar5 = (unsigned int)(uVar6 << 10) & 0x400;
  *(unsigned int *)(iVar7 + 0x10) = uVar5 | uVar2 & 0xfffffbff;
  uVar6 = ((unsigned __int64)uVar3 & ~(((unsigned __int64)(uVar2 >> 0xb) & 1 | uVar6) - 1) & 0x3ffffff) << 6 |
          uVar6;
  uVar4 = ((uVar6 | param_3 & 0xffffffff) & 3) << 0x13 |
          (unsigned __int64)*(unsigned int *)(iVar7 + 0xc) & 0xfffffffff1e7ffff;
  uVar6 = ((uVar6 | param_3 & 0xffffffff) & 0x1c0) << 0x13 | uVar4;
  *(int *)(iVar7 + 0xc) = (int)uVar6;
  bVar1 = *(unsigned char *)(param_1 + param_2 + 0x2f92);
  uVar3 = (bVar1 >> 2) - 1;
  *(unsigned int *)(iVar7 + 0x10) =
       uVar5 | uVar2 & 0xfffffbfc |
       (((unsigned int)(uVar6 >> 1) & 0x7ff00000 | (unsigned int)uVar4 & 0x80000) >> 0x13 & uVar3) +
       ((unsigned int)bVar1 & ~uVar3) & 3;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

