extern int fn_822D6AB8();
extern int fn_8265CA20();
extern int fn_8288B760();


void fn_823279C8(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar5;
  __int64 lVar4;
  unsigned int *puVar6;
  
  cVar5 = fn_8288B760();
  if (cVar5 == '\0') {
    puVar1 = (unsigned int *)param_1[0x34];
    puVar6 = (unsigned int *)*puVar1;
    while (puVar6 != puVar1) {
      if ((unsigned __int64)(unsigned int)puVar6[2] == (param_2 & 0xffffffff)) {
        puVar2 = (unsigned int *)puVar6[1];
        puVar3 = (unsigned int *)*puVar6;
        *puVar2 = puVar3;
        puVar3[1] = puVar2;
        fn_8265CA20(puVar6);
        param_1[0x35] = param_1[0x35] + -1;
        puVar6 = puVar3;
      }
      else {
        puVar6 = (unsigned int *)*puVar6;
      }
    }
  }
  else {
    lVar4 = (**(int (***)())(*param_1 + 0x50))(param_1);
    fn_822D6AB8(lVar4 + 0x178,param_2);
  }
  return;
}

