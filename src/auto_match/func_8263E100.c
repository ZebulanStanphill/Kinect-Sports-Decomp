extern unsigned int lbl_82195914;
extern unsigned int lbl_82195920;
extern unsigned int lbl_821CBFB0;
extern unsigned int uStack_c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8263E100(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uStack_c;
  
  if (param_3 == 0) {
    if ((*(unsigned short *)(param_2 + 0x2888) & 1) != 0) {
code_r0x8263e1a0:
      fVar1 = (float)param_1;
      if (((unsigned int)fVar1 & 0x80000000) == 0) {
        if ((unsigned int)fVar1 >> 0x17 < 0x71) {
          iVar2 = -((unsigned int)fVar1 >> 0x17 & 0xff);
          uVar3 = (unsigned __int64)
                  (((1 << (iVar2 + 0x70U & 0x3f)) + ((unsigned int)fVar1 & 0x7fffff) | 0x800000) >>
                  (iVar2 + 0x71U & 0x3f));
        }
        else {
          uVar3 = ((unsigned __int64)(unsigned int)fVar1 & 0x7800000 | (unsigned __int64)(unsigned int)fVar1 + 4 & 0xffffffff) >>
                  3;
        }
      }
      else {
        uVar3 = 0;
      }
      uStack_c = (unsigned int)(uVar3 << 8);
      uVar4 = uStack_c | (unsigned int)param_5 & 0xff;
      uStack_c = uStack_c >> 0x15;
      goto code_r0x8263e208;
    }
    uStack_c = (unsigned int)(__int64)(param_1 * (double)lbl_82195914);
    uVar4 = uStack_c;
    uStack_c = (unsigned int)(__int64)(param_1 * (double)lbl_82195920);
  }
  else {
    if ((*(unsigned short *)(&lbl_821CBFB0 + (*(unsigned int *)(param_3 + 8) & 0x3f) * 2) & 0xf00) != 0)
    goto code_r0x8263e1a0;
    uStack_c = (unsigned int)(__int64)(param_1 * (double)lbl_82195914);
    uVar4 = uStack_c;
    uStack_c = (unsigned int)(__int64)(param_1 * (double)lbl_82195920);
  }
  uVar4 = uVar4 << 8 | (unsigned int)param_5;
code_r0x8263e208:
  *(unsigned int *)(param_2 + 0x2a2c) = uVar4;
  *(unsigned int *)(param_2 + 0x2a28) =
       (unsigned int)(param_5 != *(unsigned char *)(param_2 + 0x2942)) << 0xb ^
       (~*(unsigned int *)(param_2 + 0x2940) & 0x20) << 6 | uStack_c;
  *(unsigned __int64 *)(param_2 + 0x20) = *(unsigned __int64 *)(param_2 + 0x20) | 0x300;
  return;
}

