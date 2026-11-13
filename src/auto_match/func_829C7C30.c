extern unsigned int *auStack_90;
extern int fn_829C9BB0();
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156E0;
extern unsigned int lbl_832156E4;
extern unsigned int lbl_832156E8;
extern unsigned int lbl_832156EC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_8321573C;
extern unsigned int lbl_83215740;
extern unsigned int lbl_83215744;
extern unsigned int lbl_83215748;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


unsigned __int64 fn_829C7C30(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int auStack_90 [5];
  unsigned int uStack_7c;
  unsigned int uStack_74;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  auStack_90[0] = 0x24;
  uStack_7c = 0;
  iVar2 = fn_829C9BB0(auStack_90);
  if (-1 < iVar2) {
    iVar2 = param_1 * 0x184;
    *(unsigned int *)(&lbl_8321570C + iVar2) =
         *(unsigned int *)(&lbl_8321570C + iVar2) & 0xfffffff0 | uStack_74 & 0xf;
    *(unsigned int *)(&lbl_8321573C + iVar2) = uStack_44;
    *(unsigned int *)(&lbl_83215740 + iVar2) = uStack_40;
    *(unsigned int *)(&lbl_83215744 + iVar2) = uStack_3c;
    *(unsigned int *)(&lbl_83215748 + iVar2) = uStack_38;
    (&lbl_832156B0)[param_1 * 0x61] = (&lbl_832156B0)[param_1 * 0x61] & 0xfffffff0 | uStack_74 & 0xf
    ;
    (&lbl_832156E0)[param_1 * 0x61] = uStack_44;
    (&lbl_832156E4)[param_1 * 0x61] = uStack_40;
    (&lbl_832156E8)[param_1 * 0x61] = uStack_3c;
    (&lbl_832156EC)[param_1 * 0x61] = uStack_38;
  }
  uVar1 = RtlNtStatusToDosError();
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

