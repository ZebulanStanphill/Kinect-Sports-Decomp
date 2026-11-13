extern int fn_82630750();
extern int fn_826308A0();
extern unsigned int uStack_38;


void fn_82853A60(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 *puVar8;
  int iVar9;
  unsigned int uStack_38;
  
  iVar9 = *(int *)(param_2 + 8) * 0x3c + *(int *)(*(int *)(param_3 + 0x48) + 0x40);
  iVar1 = *(int *)(iVar9 + 0x34);
  if (*(int *)(param_1 + 0x6940) != 0) {
    fn_826308A0(*(unsigned int *)(param_1 + 4),0,*(int *)(param_1 + 0x6940),0);
  }
  iVar1 = iVar1 * 8;
  uVar2 = *(unsigned int *)(param_2 + 0x14);
  uVar3 = *(unsigned int *)(param_2 + 0x18);
  uVar4 = *(unsigned int *)(param_2 + 0x1c);
  uVar5 = *(unsigned int *)(param_2 + 0x10);
  uVar6 = *(unsigned int *)(param_1 + 0x9c);
  uVar7 = *(unsigned int *)(param_2 + 0x20);
  puVar8 = *(unsigned __int64 **)(param_1 + 4);
  *(unsigned int *)((int)puVar8 + uVar6 * 0x10 + 0x784) = 0x4b000000;
  *(unsigned int *)(puVar8 + (uVar6 + 0x78) * 2) = 0x40000000;
  *(unsigned int *)(puVar8 + uVar6 * 2 + 0xf1) =
       (((uVar2 & 1) << 3 | 0x4b00 | uVar3 & 7) << 8 | uVar4 & 0x3f) << 8 | uVar7 & 7 |
       uStack_38 & 0xc0f8;
  *(unsigned int *)((int)puVar8 + uVar6 * 0x10 + 0x78c) = uVar5 & 0x7fffff | 0x4b000000;
  *puVar8 = 0x8000000000000000U >> ((unsigned __int64)(uVar6 >> 2) & 0x7f) | *puVar8;
  fn_82630750(*(unsigned int *)(param_1 + 4),0,*(unsigned int *)(*(int *)(iVar9 + 0x30) + iVar1),0
                   );
  *(unsigned int *)(param_1 + 0x6940) = *(unsigned int *)(*(int *)(iVar9 + 0x30) + iVar1);
  return;
}

