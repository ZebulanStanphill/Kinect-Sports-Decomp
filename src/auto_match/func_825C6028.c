extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_826310E0();
extern int fn_828F1160();
extern int fn_828F12D8();
extern int fn_82F68CC0();
extern unsigned int lbl_82192604;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_825C6028(double param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned char auStack_f0 [64];
  unsigned char auStack_b0 [64];
  unsigned char auStack_70 [112];
  
  param_3 = param_3 * 0xb0;
  puVar2 = &lbl_83296890;
  iVar1 = *(int *)(&lbl_83296C80 + param_3);
  if (iVar1 != 0) {
    puVar2 = (unsigned __int64 *)(&lbl_83296C20 + param_3);
  }
  fn_82F68CC0(auStack_f0,puVar2,0x40);
  puVar2 = (unsigned __int64 *)(&lbl_83296BE0 + param_3);
  if (iVar1 == 0) {
    puVar2 = &lbl_832968D0;
  }
  fn_82F68CC0(auStack_b0,puVar2,0x40);
  fn_828F1160(auStack_70,auStack_f0,auStack_b0);
  fn_828F12D8(auStack_f0,auStack_f0);
  fn_828F12D8(auStack_b0,auStack_b0);
  fn_828F12D8(auStack_70,auStack_70);
  fn_826310E0(lbl_8320A898,0xc0,auStack_f0,4,0x8000);
  fn_826310E0(lbl_8320A898,0xc4,auStack_b0,4,0x4000);
  fn_826310E0(lbl_8320A898,200,auStack_70,4,0x2000);
  iVar1 = lbl_8320A898;
  *(float *)(lbl_8320A898 + 0x2380) = (float)(param_1 * (double)lbl_82192604);
  *(unsigned int *)(iVar1 + 0x2384) = uStack_fc;
  *(unsigned int *)(iVar1 + 0x2388) = uStack_f8;
  *(unsigned int *)(iVar1 + 0x238c) = uStack_f4;
  *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x8000;
  return;
}

