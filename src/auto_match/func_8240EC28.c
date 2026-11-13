extern int fn_825735B8();
extern int fn_82573868();
extern int fn_82A1EFC0();
extern unsigned int ltcg_pool_0_0f;


void fn_8240EC28(int param_1)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x28) + 0x8c0) + 0x128;
  if ((lVar1 != 0) && (iVar2 = fn_825735B8(lVar1,0xffffffff821b81f4), iVar2 != 0)) {
    *(unsigned int *)(*(int *)(iVar2 + 4) + 400) = 0;
  }
  *(unsigned int *)(param_1 + 0x260) = 0;
  *(unsigned int *)(param_1 + 0x25c) = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 600) != 0) {
    fn_82573868(*(unsigned int *)(param_1 + 0x28),param_1 + 0x1f0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x1f0,0,0x68);
}

