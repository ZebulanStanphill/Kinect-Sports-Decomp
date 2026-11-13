#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_830177C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_20;


unsigned __int64 * fn_830050A8(unsigned __int64 *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  double dVar2;
  unsigned __int64 uStack_20;
  
  if ((*(int *)(param_2 + 0x10) == 0) || ((*(unsigned char *)(param_2 + 0x3d) & 8) != 0)) {
    uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)*(unsigned __int64 *)(param_2 + 0x34) >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if ((*(unsigned int *)(param_2 + 0x40) >> 8 & 1) != 0) {
      dVar2 = (double)fn_830177C8(lbl_832642FC,param_2,8,param_3);
      uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)dVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    }
    uVar1 = lbl_821AAD20;
    if ((*(unsigned char *)(param_2 + 0x3d) & 0x10) != 0) {
      uVar1 = *(unsigned int *)(param_2 + 0x38);
    }
    uStack_20 = CONCAT44((((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF),uVar1);
    *param_1 = uStack_20;
  }
  else {
    ((int (*)())fn_830050A8)();
  }
  return param_1;
}

