extern int fn_822315A0();
extern int fn_8251F468();
extern int fn_827D5070();


void fn_8260BEF8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short *puVar1;
  
  for (puVar1 = (unsigned short *)fn_827D5070(*param_1); puVar1[2] != 0;
      puVar1 = (unsigned short *)((unsigned int)*puVar1 + (int)puVar1)) {
  }
  if (*(int *)(puVar1 + 0x24) == 0) {
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
  }
  else {
    fn_8251F468(puVar1 + 0x24,puVar1 + 0x26,0xffffffffffffffff,param_3,0,0,0);
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

