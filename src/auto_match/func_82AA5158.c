#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82637088();
extern int fn_82AA1C90();
extern int fn_82AA2720();
extern unsigned int iStack_28;
extern unsigned int uStack_30;


unsigned __int64
fn_82AA5158(unsigned __int64 param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,int param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uStack_30;
  int iStack_28;

  if (*(int *)(param_6 * 8 + param_3 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uStack_30 = CONCAT44((int)param_1,param_2);
    iStack_28 = param_6;
    uVar1 = fn_82637088(param_5,&uStack_30,0xffffffff82aa5020);
    if (-1 < (int)uVar1) {
      fn_82AA2720(param_1,0xffffffff821ce7a4);
      fn_82AA1C90(param_1,0xffffffff821cc86c);
      uVar1 = 0;
    }
  }
  return uVar1;
}
