extern int fn_82647448();
extern int fn_82647460();
extern int fn_82677DD0();
extern int fn_82678FA0();
extern int fn_82F68CC0();


unsigned __int64
fn_82679108(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5)

{
  char cVar1;
  
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    *(int *)(param_1 + 0xd8) = (int)param_2;
    fn_82647448(param_2);
    cVar1 = fn_82678FA0(param_1);
    if (cVar1 != '\0') {
      *(unsigned int *)(param_1 + 0x24) = param_4;
      fn_82F68CC0(param_1 + 0x1e0,param_3,0x7c);
      *(unsigned int *)(param_1 + 0x25c) = param_5;
      *(unsigned char *)(param_1 + 0x10) = 1;
      return 1;
    }
    fn_82677DD0(param_1);
    fn_82647460(*(unsigned int *)(param_1 + 0xd8));
    *(unsigned int *)(param_1 + 0xd8) = 0;
  }
  return 0;
}

