#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FFE0F0();
extern int fn_83016E90();
extern int fn_83017DA0();
extern int fn_830196F8();
extern unsigned int lbl_821AAD20;


void fn_830189E8(__int64 param_1,__int64 param_2,__int64 param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  float *pfVar4;
  
  RtlEnterCriticalSection(param_1 + 0x720);
  uVar2 = CONCAT44((int)param_2,(int)param_3);
  uVar3 = fn_83016E90(param_1 + 4,uVar2,
                       param_2 + param_3 + ((param_2 + param_3 & 0xffffffffU) / 0xc1) * -0xc1);
  if ((uVar3 & 0xffffffff) != 0) {
    pfVar4 = (float *)fn_82FFE0F0(param_1 + 0x61c,param_2);
    fVar1 = lbl_821AAD20;
    if (pfVar4 != (float *)0x0) {
      fVar1 = *pfVar4;
    }
    fn_83017DA0((double)fVar1,param_1,param_2,uVar3);
    fn_830196F8(param_1 + 4,uVar2);
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return;
}

