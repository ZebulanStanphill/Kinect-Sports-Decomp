extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEDD60();
extern int fn_82F41728();
extern int fn_82F41758();
extern int fn_82F41920();
extern int fn_82F41938();
extern int fn_82F41B20();
extern int fn_82F41DF8();


__int64 fn_82EEE8D8(int *param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned int *param_6, unsigned short *param_7, unsigned __int64 param_8, int in_stack_00000054, int in_stack_0000005c, unsigned int in_stack_00000064)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;



  unsigned int *puStack_60;
  int aiStack_5c;

  puStack_60 = (unsigned int *)0x0;
  aiStack_5c = 0;
  if (param_1[0x1d] == 0) {
    lVar4 = -0x7fff0001;
  }
  else {
    lVar4 = fn_82EEDD60(param_1,param_2,param_3,&puStack_60,0,&aiStack_5c,in_stack_0000005c);
    puVar1 = puStack_60;
    if (-1 < lVar4) {
      if ((param_5 & 0xffffffff) != 0) {
        if (aiStack_5c == 0) {
          if ((in_stack_0000005c != 0) || (iVar2 = puStack_60[8], iVar2 == 0)) {
            iVar2 = puStack_60[6];
          }
        }
        else {
          iVar2 = puStack_60[0xe];
        }
        lVar4 = fn_82F41DF8(iVar2,param_4,param_5);
        if ((int)lVar4 < 0) {
          return lVar4;
        }
      }
      if (param_7 != (unsigned short *)0x0) {
        *param_7 = *(unsigned short *)(puVar1 + 0x10);
      }
      iVar2 = fn_82E50BE8(0x68,0,0,0,0);
      if (iVar2 == 0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        puVar3 = (unsigned int *)fn_82F41938();
      }
      if (puVar3 == (unsigned int *)0x0) {
        lVar4 = -0x7ff8fff2;
      }
      else {
        *puVar3 = *puVar1;
        *(unsigned short *)(puVar3 + 1) = *(unsigned short *)(puVar1 + 1);
        if (in_stack_00000054 != 0) {
          fn_82F41728(puVar3,param_8,in_stack_00000054);
        }
        fn_82F41920(puVar3);
        puVar3[0x13] = in_stack_00000064;
        lVar4 = (**(int (***)())(*param_1 + 0x24))
                          (param_1,(unsigned __int64)(in_stack_00000054 != 0) |
                                   -(unsigned __int64)(in_stack_0000005c != 0) & 0x20000 | 0x200,puVar3);
        fn_82F41920(puVar3);
        if (-1 < (int)lVar4) {
          fn_82F41758(puVar3);
          if (param_6 != (unsigned int *)0x0) {
            *param_6 = puVar3[0xf];
          }
          fn_82F41B20(puVar3);
          fn_82E4FE40(puVar3);
          puVar3 = (unsigned int *)0x0;
        }
        if (puVar3 != (unsigned int *)0x0) {
          fn_82F41B20(puVar3);
          fn_82E4FE40(puVar3);
        }
      }
    }
  }
  return lVar4;
}
