extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5B680();
extern int fn_82A5C760();


__int64 fn_82A5C590(unsigned int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  lVar3 = 0;
  iVar1 = fn_82A5B680(param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
    if (puVar2 == (unsigned int *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      puVar2[1] = (unsigned int)param_3;
      puVar2[3] = param_1;
      puVar2[2] = 3;
      *puVar2 = (unsigned int)(param_3 != 0);
      puVar2[4] = (unsigned int)param_2;
      lVar3 = fn_82A5C760(*(unsigned int *)(param_1 + 0x10),puVar2);
      if (lVar3 < 0) {
        fn_82A4F4E0(puVar2);
      }
    }
  }
  else {
    (**(int (***)())(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2);
  }
  return lVar3;
}

