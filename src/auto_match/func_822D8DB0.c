extern int fn_822B83D0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_827F6188();
extern int fn_827F6210();
extern int fn_827F6308();
extern unsigned int lbl_82191FC0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822D8DB0(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uStack_30;
  
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  fn_8255FD70(&uStack_30,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x24),
                    param_2);
  iVar3 = (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(__int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  puVar2 = (unsigned int *)(iVar1 * 4 + (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF));
  uStack_30 = (__int64)iVar1;
  uVar4 = fn_822B83D0(*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118),*puVar2);
  fn_827F6188((double)ltcg_pool_0_0f);
  fn_827F6210((double)lbl_82191FC0,uVar4);
  fn_827F6308(uVar4,1);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

