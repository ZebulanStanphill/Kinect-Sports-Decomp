typedef unsigned char bool;
extern int fn_82F68CC0();
extern unsigned int uRam831e79a4;
extern unsigned int uRam8329f804;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A5D160(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (uRam831e79a4 != 0x1800) {
    do {
      uVar1 = uRam831e79a4;
      uVar2 = (unsigned __int64)uRam831e79a4;
      if (in_RESERVE != '\0') {
        uRam831e79a4 = storeWordConditionalIndexed(uVar2 + 0x1800,0,0xffffffff831e79a4);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar2 == 0) {
      *(unsigned int *)(param_1 + 0x44) = uRam8329f804;
    }
    else {
      if ((uVar2 - *(unsigned int *)(param_1 + 0x44) & 0xffffffff) == 0x1800) {
        uVar3 = *(int *)(param_1 + 0x48) + 1;
      }
      else {
        uVar3 = 1;
      }
      *(unsigned int *)(param_1 + 0x48) = uVar3;
      *(unsigned int *)(param_1 + 0x44) = uVar1;
      if (uVar3 < 0xf) {
        fn_82F68CC0(uVar2,param_2,0x1800,in_MSR);
        sync(1);
      }
    }
  }
  return;
}

