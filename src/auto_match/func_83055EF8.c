typedef unsigned char bool;
extern int fn_82A2B760();


bool fn_83055EF8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  
  *(unsigned char *)(param_2 + 8) = 0;
  iVar1 = NtSetEvent(*(unsigned int *)(param_2 + 4),0);
  if (iVar1 < 0) {
    fn_82A2B760();
  }
  return iVar1 >= 0;
}

