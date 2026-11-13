extern unsigned int *auStack_10;
extern int fn_82CE1780();


unsigned __int64 fn_828ED350(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 auStack_10;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     ((*(int *)(param_1 + 8) == 2 || (*(int *)(param_1 + 8) == 4)))) {
    auStack_10 = param_2;
    uVar1 = fn_82CE1780(*(unsigned int *)(param_1 + 0x58),1,&auStack_10,0);
    return uVar1;
  }
  return 0;
}

