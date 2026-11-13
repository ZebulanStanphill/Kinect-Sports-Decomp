typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82FB7808(unsigned __int64 param_1,short *param_2)

{
  short sVar1;
  
  if (param_2 != (short *)0x0) {
    if ((*(unsigned char *)(param_2 + 1) & 0x80) == 0) {
      return false;
    }
    if ((*(unsigned char *)(param_2 + 1) & 0x40) == 0) {
      sVar1 = *param_2;
      *param_2 = sVar1 + -1;
      return (short)(sVar1 + -1) != 0;
    }
  }
  return true;
}

