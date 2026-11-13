typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8245AB78();
extern int fn_82A1DD38();
extern int memcpy();
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8245B630(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  bool bVar1;
  unsigned char auStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  int (**pcStack_40)();
  unsigned int uStack_3c;

  RtlEnterCriticalSection();
  if ((*(int *)(param_1 + 0x588) != 0) && (*(int *)(param_1 + 0x6a4) == 3)) {
    RtlLeaveCriticalSection(param_1);
    auStack_60 = 3;
    fn_82A1DD38(param_2,&auStack_60,1);
    stack_pair_50.second = (unsigned int)param_2;
    stack_pair_50.first = 1;
    pcStack_40 = fn_8245AB78;
    uStack_48 = stack_pair_50.second;
    uStack_44 = param_3;
    uStack_3c = param_4;
    RtlEnterCriticalSection(param_1);
    if ((*(int *)(param_1 + 0x574) != 0) || (bVar1 = true, *(int *)(param_1 + 0x578) != 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      memcpy(param_1 + 0x5c4,&stack_pair_50.first,0x18);
      *(unsigned int *)(param_1 + 0x574) = 1;
      RtlLeaveCriticalSection(param_1);
      return param_2;
    }
  }
  RtlLeaveCriticalSection(param_1);
  return 0;
}
