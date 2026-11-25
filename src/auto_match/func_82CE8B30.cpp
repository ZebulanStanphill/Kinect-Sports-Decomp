#include "havok/hkString.h"

extern "C" {

extern unsigned int *auStack_a0;
extern int fn_82CE8A48(...);
void RtlEnterCriticalSection(...);
void RtlLeaveCriticalSection(...);

void fn_82CE8B30(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char auStack_a0 [136];
  
  hkString::memCpy(auStack_a0, (const void *)param_2, *(unsigned short *)(param_2 + 4));
  RtlEnterCriticalSection(param_1);
  fn_82CE8A48(param_1,*(unsigned int *)(param_1 + 0x1c),auStack_a0,param_3);
  RtlLeaveCriticalSection(param_1);
  return;
}

}
