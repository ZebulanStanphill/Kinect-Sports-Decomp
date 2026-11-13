extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F94C;
extern unsigned int uRam831c1d9c;
extern unsigned int uRam8327f950;


void fn_82464A40(int param_1)

{
  int iVar1;
  
  if (((lbl_82195634 <= *(float *)(param_1 + 0x18)) && (*(float *)(param_1 + 0x18) <= lbl_82193CC0))
     && (*(float *)(param_1 + 0x1c) == ltcg_pool_0_0f)) {
    return;
  }
  fn_82631920(lbl_8320A898,lbl_8327F8B8);
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2ed8) = uRam831c1d9c;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
  fn_82637EC0(lbl_8320A898,1);
  fn_82637D70(lbl_8320A898,0);
  fn_82637DE0(lbl_8320A898);
  fn_82637E50(lbl_8320A898,10);
  fn_826310E0(lbl_8320A898,0,0xffffffff8329ead0,4,0x8000000000000000);
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,uRam8327f950);
  }
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,lbl_8327F94C);
}

