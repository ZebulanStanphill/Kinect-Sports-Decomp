#define true 1
extern int fn_83007620();
extern int fn_83008F08();


unsigned __int64 fn_83007DF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char param_4)

{
  unsigned char cVar1;
  int next;
  
  cVar1 = fn_83007620();
  while( true ) {
    if (cVar1 != '\0') {
      return 1;
    }
    if ((param_4 == '\0') && (*(int *)(param_1 + 0x14) != 0)) {
      param_4 = '\x01';
      cVar1 = fn_83008F08(*(int *)(param_1 + 0x14),param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    next = *(int *)(param_1 + 0x10);
    if (next == 0) break;
    param_1 = next;
    cVar1 = fn_83007620(param_1,param_2,param_3);
  }
  return 0;
}

