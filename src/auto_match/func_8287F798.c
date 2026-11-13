#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_28 ((*(unsigned __int64*)&fStack_28))
extern unsigned int fStack_28;
extern int fn_8287D6D8();
extern int fn_8287F198();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_24;


void fn_8287F798(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  unsigned int uStack0000001c;
  float afStack_30 [2];
  float fStack_28;
  unsigned int uStack_24;
  
  uStack0000001c = (unsigned int)param_2;
  cVar4 = fn_828821A0(param_2);
  if ((cVar4 == '\0') && (cVar4 = fn_82882218(param_2), cVar4 == '\0')) {
    fn_8287D6D8(afStack_30,param_1 + 0xf0,&stack0x0000001c);
    uVar1 = *(unsigned int *)(param_1 + 0x114);
    pfVar6 = (float *)(param_1 + 0x94);
    pfVar2 = (float *)((int)afStack_30[0] + 0xac);
    afStack_30[0] = (float)uVar1;
    fVar3 = *(float *)(param_1 + 0x94) - *pfVar2;
    *(float *)(param_1 + 0x94) = fVar3;
    _fStack_28 = CONCAT44((float)uVar1,uVar1);
    pfVar5 = &fStack_28;
    pfVar2 = afStack_30;
    if ((float)uVar1 <= fVar3) {
      pfVar5 = pfVar6;
      pfVar2 = pfVar6;
    }
    if (*pfVar2 < *pfVar5) {
      pfVar5 = pfVar2;
    }
    *pfVar6 = *pfVar5;
    fn_8287F198(&fStack_28,param_1 + 0xf0);
  }
  return;
}

