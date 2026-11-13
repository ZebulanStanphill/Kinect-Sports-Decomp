extern unsigned int *auStack_14e;
extern int fn_82A3FF60();
extern int fn_82A447A0();
extern int fn_82A4F4E0();
extern int memcpy();
extern int memset();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int uStack_150;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82A47128(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5)

{
  int iVar1;
  short *psVar3;
  unsigned __int64 uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_180;

  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned int uStack_170;
  unsigned int uStack_168;
  unsigned int uStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned short uStack_150;
  unsigned char auStack_14e [318];
  
  psVar3 = (short *)fn_82A3FF60(0xffffffff83219d50,
                                      (unsigned __int64)*(unsigned short *)(param_5 + 0x10) + 0x12,0x20970002,0);
  if (psVar3 == (short *)0x0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    memcpy(psVar3,param_5,(unsigned __int64)*(unsigned short *)(param_5 + 0x10) + 0x12);
    if (*psVar3 == -2) {
      stack_pair_180.second = lbl_8208E054;
      uStack_178 = lbl_8208E058;
      uStack_174 = lbl_8208E05C;
      stack_pair_180.first = 1;
      memcpy(psVar3 + 0xc,&stack_pair_180.first,0x10);
      psVar3[9] = 0x10;
    }
    else {
      *psVar3 = 1;
    }
    iVar1 = ((unsigned short)psVar3[1] & 0x7fff) * 2;
    psVar3[7] = 0x10;
    psVar3[6] = (short)iVar1;
    *(int *)(psVar3 + 4) = *(int *)(psVar3 + 2) * iVar1;
    uVar2 = fn_82A447A0(param_1,param_2,param_3);
    fn_82A4F4E0(psVar3);
    if (-1 < (int)uVar2) {
      uStack_170 = *(unsigned int *)(param_5 + 4);
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_164 = 0x10;
      uStack_160 = 2;
      uStack_15c = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_14e,0,0x16);
    }
  }
  return uVar2;
}

