extern int fn_82522D98();
extern int fn_8265C9E0();
extern int fn_82F65B18();
extern unsigned int lbl_821C1EA8;
extern unsigned int ltcg_pool_0_0f;


void fn_824F6098(double param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar2 != (unsigned int *)0x0) {
    uVar3 = *(unsigned int *)(param_2 + 8);
    puVar2[3] = (float)param_1;
    puVar2[1] = param_4;
    puVar2[6] = 0;
    uVar1 = ltcg_pool_0_0f;
    *puVar2 = &lbl_821C1EA8;
    puVar2[5] = uVar1;
    puVar2[2] = uVar3;
    if ((param_7 & 0xffffffff) != 0) {
      uVar3 = fn_82F65B18(param_7);
      puVar2[4] = uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

