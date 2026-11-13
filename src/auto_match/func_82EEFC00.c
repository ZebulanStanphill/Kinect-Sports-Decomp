#define true 1
extern unsigned int lbl_8318A744;


unsigned __int64 fn_82EEFC00(int param_1,unsigned int param_2,int *param_3)

{
  unsigned int uVar1;
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_3 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0xffffffff80004005;
    }
    uVar1 = *(unsigned int *)(param_1 + 4);
    if ((uVar1 <= param_2) && (param_2 < uVar1 + 0x14)) break;
    param_1 = *(int *)(param_1 + 0x160);
  }
  param_2 = param_2 - uVar1;
  if ((*(unsigned char *)((param_2 >> 3) + param_1 + 0x1c) & (&lbl_8318A744)[param_2 & 7]) == 0) {
    return 0xffffffff80004005;
  }
  *param_3 = (param_2 + 2) * 0x10 + param_1;
  return 0;
}

