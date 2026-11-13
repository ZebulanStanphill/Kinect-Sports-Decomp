extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_828F1160();
extern int fn_82F68CC0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_825F2D00(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned int uStack_144;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  unsigned int uStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned char auStack_e0 [64];
  unsigned char auStack_a0 [160];
  
  param_2 = param_2 * 0xb0;
  puVar2 = &lbl_83296890;
  iVar1 = *(int *)(&lbl_83296C80 + param_2);
  if (iVar1 != 0) {
    puVar2 = (unsigned __int64 *)(&lbl_83296C20 + param_2);
  }
  fn_82F68CC0(auStack_a0,puVar2,0x40);
  puVar2 = (unsigned __int64 *)(&lbl_83296BE0 + param_2);
  if (iVar1 == 0) {
    puVar2 = &lbl_832968D0;
  }
  fn_82F68CC0(auStack_e0,puVar2,0x40);
  fn_828F1160(&uStack_120,auStack_a0,auStack_e0);
  uStack_160 = uStack_120;
  uStack_15c = uStack_110;
  uStack_158 = uStack_100;
  uStack_154 = uStack_f0;
  uStack_150 = uStack_11c;
  uStack_14c = uStack_10c;
  uStack_148 = uStack_fc;
  uStack_144 = uStack_ec;
  uStack_140 = uStack_118;
  uStack_13c = uStack_108;
  uStack_138 = uStack_f8;
  uStack_134 = uStack_e8;
  uStack_130 = uStack_114;
  uStack_12c = uStack_104;
  uStack_128 = uStack_f4;
  uStack_124 = uStack_e4;
  fn_826310E0(lbl_8320A898,0xc0,&uStack_160,4,0x8000);
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  fn_82637B30(lbl_8320A898,1);
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2f04) = 7;
  *(unsigned int *)(iVar1 + 0x28dc) =
       -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 7 | *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,*(unsigned int *)(param_1 + 0x9b4));
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,*(unsigned int *)(param_1 + 0x9b8));
}

