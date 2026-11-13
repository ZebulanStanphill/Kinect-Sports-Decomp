extern int fn_82A1BB18();
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5B680();
extern int fn_82A5C760();
extern int fn_82F68CC0();


__int64 fn_82A5C480(unsigned int param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,
                      __int64 param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  uVar1 = fn_82A5B680(param_1,param_3);
  iVar2 = fn_82A1BB18();
  if (iVar2 == *(int *)(param_1 + 0x14)) {
    uVar1 = -(unsigned int)(param_2 != 1) & uVar1;
  }
  if (uVar1 == 0) {
    puVar3 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,param_5 + 0x18,0x20970006,0);
    if (puVar3 == (unsigned int *)0x0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      puVar3[1] = (unsigned int)param_3;
      puVar3[3] = param_1;
      puVar3[2] = 2;
      *puVar3 = (unsigned int)(param_3 != 0);
      puVar3[4] = (unsigned int)param_2;
      puVar3[5] = (unsigned int)param_5;
      fn_82F68CC0(puVar3 + 6,param_4,param_5);
      lVar4 = fn_82A5C760(*(unsigned int *)(param_1 + 0x10),puVar3);
      if (lVar4 < 0) {
        fn_82A4F4E0(puVar3);
      }
    }
  }
  else {
    (**(int (***)())(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),param_2,param_4,param_5);
  }
  return lVar4;
}

