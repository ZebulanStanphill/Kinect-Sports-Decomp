extern int fn_82630750();
extern int fn_826308A0();
extern int fn_82639F78();
extern int fn_82640680();
extern int fn_82645EA8();
extern unsigned int lbl_8320A898;
extern unsigned int uStack_28;


void fn_824F4F18(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 *puVar2;
  unsigned int uStack_28;
  
  puVar2 = lbl_8320A898;
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  *(unsigned int *)((int)lbl_8320A898 + 0x13f4) = 0x4b000000;
  *(unsigned int *)((int)puVar2 + 0x13fc) = 0x4b000546;
  *(unsigned int *)(puVar2 + 0x27f) = uStack_28 & 0xc0f8 | 0x4b072402;
  *(unsigned int *)(puVar2 + 0x27e) =
       ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffffffc) >> 2 | 0x40000000;
  *puVar2 = *puVar2 | 0x4000;
  fn_82639F78(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x1c),0,0,1);
  fn_82645EA8(lbl_8320A898,3);
  fn_82630750(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x18),0);
  fn_82640680(lbl_8320A898,1,0,0x1c2);
  fn_826308A0(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x18),0);
  fn_82645EA8(lbl_8320A898,0);
  return;
}

