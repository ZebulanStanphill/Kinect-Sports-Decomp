extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();


void fn_82B10DF8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  
  uVar3 = 1;
  if ((param_3 & 0xffffffff) != 0) {
    puVar4 = (unsigned int *)(param_2 + 0x2c);
    do {
      if ((uVar3 & param_4) != 0) {
        puVar1 = (unsigned int *)fn_82AD17B0(param_1,param_5);
        *puVar1 = (param_6 & 0x1b) << 5 | 0x2001c80 | *puVar1 & 0xf3fffc9f;
        fn_82AD20C0(param_2,*puVar4,param_1);
        uVar2 = fn_82AD1978(param_2,puVar1);
        param_6 = param_6 + 1;
        *puVar4 = uVar2;
      }
      param_3 = param_3 - 1;
      puVar4 = puVar4 + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
    } while (param_3 != 0);
  }
  return;
}

