extern unsigned int lbl_821CC078;


void fn_82639380(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  
  iVar7 = (param_2 + 0x30) * 0x18 + param_1;
  uVar6 = (param_3 & 0xffffffff) >> 2;
  uVar2 = *(unsigned int *)(iVar7 + 0x10);
  uVar3 = *(unsigned int *)(iVar7 + 0xc);
  uVar4 = *(unsigned int *)(&lbl_821CC078 + (unsigned int)*(unsigned char *)(param_1 + param_2 + 0x2f44) * 4);
  uVar5 = (unsigned int)(uVar6 << 0xb) & 0x800;
  *(unsigned int *)(iVar7 + 0x10) = uVar5 | uVar2 & 0xfffff7ff;
  uVar6 = ((unsigned __int64)uVar4 & ~(((unsigned __int64)(uVar2 >> 10) & 1 | uVar6) - 1) & 0xfffffff) << 4 |
          uVar6;
  uVar6 = ((uVar6 | param_3 & 0xffffffff) & 0x70) << 0x15 |
          ((uVar6 | param_3 & 0xffffffff) & 3) << 0x15 | (unsigned __int64)uVar3 & 0xfffffffff19fffff;
  *(int *)(iVar7 + 0xc) = (int)uVar6;
  bVar1 = *(unsigned char *)(param_1 + param_2 + 0x2f92);
  uVar4 = (bVar1 >> 2) - 1;
  *(unsigned int *)(iVar7 + 0x10) =
       uVar5 | uVar2 & 0xfffff7fc |
       (((unsigned int)(uVar6 >> 1) & 0x7ff00000 | uVar3 & 0x80000) >> 0x13 & uVar4) +
       ((unsigned int)bVar1 & ~uVar4) & 3;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

