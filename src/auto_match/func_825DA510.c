extern unsigned int *auStack_5a5;
extern unsigned int *auStack_5f0;
extern int fn_82529320();
extern int fn_82529A38();
extern int fn_8255FA88();
extern int fn_82587AC0();
extern int fn_82592430();
extern int fn_825D9FB0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_5f9;


void fn_825DA510(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char uStack_5f9;
  unsigned char auStack_5f0 [75];
  unsigned char auStack_5a5 [1421];
  unsigned char uStack_18;
  unsigned int uStack_14;
  
  fn_82592430();
  if ((*(int *)(param_1 + 400) == 0) ||
     (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x114) == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = fn_8255FA88();
  }
  if (iVar2 != 0) {
    if (ltcg_pool_0_0f < *(float *)(param_1 + 0xb60)) {
      fn_825D9FB0(auStack_5f0,param_1);
      uStack_14 = 0;
      uStack_5f9 = (unsigned char)(__int64)*(float *)(param_1 + 0x1fc);
      uStack_18 = uStack_5f9;
      uVar1 = fn_82587AC0(auStack_5a5);
      fn_82529A38(uVar1,auStack_5f0,0);
    }
    fn_82529320(param_1,0);
  }
  return;
}

