extern int fn_826310E0();
extern int fn_828461E8();


void fn_82853840(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 4) * 0x10;
  iVar3 = *(int *)(iVar4 + param_3);
  if (iVar3 != 0) {
    uVar1 = *param_1;
    uVar5 = -(unsigned int)(param_1[0x3f] < *(unsigned int *)(iVar3 + 0x20)) & param_1[0x3f];
    iVar6 = *(int *)(iVar3 + 0x24) + uVar5 * 0xc;
    fn_828461E8(iVar3,*(unsigned int *)(*(int *)(param_1[0x1a4f] + 0x4c) + iVar4 + 4),param_1[1]
                      ,uVar1 + 0x40,uVar5,*(unsigned int *)(uVar1 + 0x100),uVar1,0);
    uVar1 = *(unsigned int *)(*(int *)(iVar6 + 4) + 0x10);
    if (-1 < (int)uVar1) {
      puVar2 = (unsigned __int64 *)param_1[1];
      *(unsigned int *)(puVar2 + (uVar1 + 0x78) * 2) = param_1[0x29];
      *(unsigned int *)((int)puVar2 + uVar1 * 0x10 + 0x784) = param_1[0x2a];
      *(unsigned int *)(puVar2 + uVar1 * 2 + 0xf1) = param_1[0x2b];
      *(unsigned int *)((int)puVar2 + uVar1 * 0x10 + 0x78c) = param_1[0x2c];
      *puVar2 = 0x8000000000000000U >> ((unsigned __int64)(uVar1 >> 2) & 0x7f) | *puVar2;
    }
    uVar1 = *(unsigned int *)(*(int *)(iVar6 + 4) + 0xc);
    if (-1 < (int)uVar1) {
      param_1[0x26] = uVar1;
    }
    uVar1 = *(unsigned int *)(*(int *)(iVar6 + 4) + 0x14);
    if (-1 < (int)uVar1) {
      fn_826310E0(param_1[1],(unsigned __int64)uVar1,(unsigned __int64)*param_1 + 0xc0,4,
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   ((((unsigned __int64)uVar1 + 3 & 0xffffffff) >> 2) - (unsigned __int64)(uVar1 >> 2) & 0x7f)) >>
                   ((unsigned __int64)(uVar1 >> 2) & 0x7f));
      param_1[0x48] = *(unsigned int *)(*(int *)(iVar6 + 4) + 0x14);
    }
    uVar1 = *(unsigned int *)(*(int *)(iVar6 + 4) + 0x18);
    if (-1 < (int)uVar1) {
      param_1[0x28] = uVar1;
    }
    uVar1 = *(unsigned int *)(*(int *)(iVar6 + 4) + 0x1c);
    if (-1 < (int)uVar1) {
      param_1[0x27] = uVar1;
    }
  }
  return;
}

