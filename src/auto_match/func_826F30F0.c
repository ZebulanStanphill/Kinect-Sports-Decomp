typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F3080();
extern unsigned int stack0x00000000;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_826F30F0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  __int64 lVar2;
  unsigned int uStack_40;
  unsigned int uStack_38;
  
  RtlEnterCriticalSection(param_1 + 0xc);
  bVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 4) <= (param_3 & 0xffffffff);
  if (bVar1) {
    uStack_40 = 0;
    lVar2 = ZEXT48(&stack0x00000000) - 0x40;
  }
  else {
    lVar2 = fn_826F3080(ZEXT48(&stack0x00000000) - 0x38,
                          (unsigned __int64)*(unsigned int *)(param_1 + 8) + (param_3 & 0x1fffffff) * 8);
  }
  fn_82687F98(param_2,lVar2);
  if ((bVar1) && (uStack_40 != 0)) {
    fn_82687270(uStack_40);
  }
  if ((!bVar1) && (uStack_38 != 0)) {
    fn_82687270();
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

