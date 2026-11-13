extern int fn_825551A8();
extern int fn_82637B30();


void fn_824742B0(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    iVar1 = *(int *)*param_2;
    uVar2 = *(unsigned int *)(iVar1 + 0x2f04);
    *(unsigned int *)(iVar1 + 0x2f04) = 7;
    *(unsigned int *)(iVar1 + 0x28dc) =
         *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 7;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
    uVar3 = *(unsigned int *)(iVar1 + 0x2efc);
    fn_82637B30(iVar1,0);
    fn_825551A8(*(unsigned int *)(param_1 + 0x88));
    *(unsigned int *)(iVar1 + 0x2f04) = uVar2;
    *(unsigned int *)(iVar1 + 0x28dc) =
         -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & uVar2 & 0xf |
         *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
    fn_82637B30(iVar1,uVar3 >> 0x1f);
  }
  return;
}

