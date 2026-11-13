#define true 1
extern unsigned int lbl_82057BCC;


unsigned __int64 fn_829E82F0(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  puVar2 = (unsigned int *)&lbl_82057BCC;
  uVar1 = 0;
  uVar3 = 0;
  while( true ) {
    if (param_2 < *puVar2) {
      return uVar1;
    }
    if (param_3 < *puVar2) break;
    uVar4 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    uVar1 = uVar3;
    uVar3 = uVar4;
    if (7 < (uVar4 & 0xffffffff)) {
      return 7;
    }
  }
  return uVar1;
}

