typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_827D96A0();
extern int fn_827DDDD8();


bool fn_8260CA68(__int64 param_1,unsigned __int64 param_2)

{
  int lVar1;
  unsigned int auStack_30;
  
  RtlEnterCriticalSection(param_1 + 0x1a0);
  auStack_30 = fn_827D96A0(param_2);
  lVar1 = fn_827DDDD8(param_1 + 200,&auStack_30);
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return lVar1 != 0;
}

