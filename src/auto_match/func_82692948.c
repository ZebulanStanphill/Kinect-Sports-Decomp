extern int fn_82691DB0();


void fn_82692948(int param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82691DB0();
  trapWord(6,uVar1,0);
  *(int *)(param_1 + 0x220) =
       (int)(((uVar1 + param_2) - 1 & 0xffffffff) / (uVar1 & 0xffffffff)) * (int)uVar1;
  return;
}

