extern unsigned int *auStack_40;
extern int memcpy();
extern int memset();


void fn_82A3AB68(int param_1,__int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  unsigned char auStack_40 [48];
  
  if ((int)param_3 < 7) {
    *(int *)(param_1 + 0x98c) = *(int *)(param_1 + 0x98c) + (int)param_3;
    return;
  }
  lVar1 = param_2 + param_3 + -6;
  memcpy(auStack_40,lVar1,6);
                    /* WARNING: Subroutine does not return */
  memset(lVar1,0xe8,6);
}

