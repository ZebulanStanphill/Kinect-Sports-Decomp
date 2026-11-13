extern int fn_8267C880();
extern int fn_8267D840();


unsigned __int64 fn_8267D8F0(int param_1,unsigned __int64 param_2)

{
  unsigned char cVar1;
  
  if (*(unsigned int *)(param_1 + 8) != 0) {
    cVar1 = fn_8267C880();
    if (cVar1 == '\0') {
      return 1;
    }
    fn_8267D840(param_1,param_2);
  }
  return 0;
}

