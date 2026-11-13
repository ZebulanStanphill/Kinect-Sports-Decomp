extern int fn_828B1000();
extern int fn_828B1218();


/* The game code's 0.0f at 0x821CC160 is 8 zero bytes; this function passes its address as an
   8-byte buffer, so it names the constant instead of writing a literal. */
extern char ltcg_pool_0_0f[];
extern char lbl_8202E370[];
void fn_828B1538(int param_1)

{
  __int64 lVar1;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x98;
  fn_828B1218(lVar1,0,0,0);
  fn_828B1000(lVar1,1,ltcg_pool_0_0f,8);
  fn_828B1000(lVar1,2,lbl_8202E370,0x10);
  return;
}

