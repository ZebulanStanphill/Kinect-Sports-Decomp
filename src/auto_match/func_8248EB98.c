extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();


unsigned __int64 fn_8248EB98(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [56];
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    do {
      uVar4 = param_1;
      param_1 = uVar4 + 8;
      if ((param_1 & 0xffffffff) == (param_2 & 0xffffffff)) {
        return param_2;
      }
      puVar1 = (unsigned int *)fn_82365BD8(auStack_40,param_1);
      puVar2 = (unsigned int *)fn_82365BD8(auStack_38,uVar4);
      cVar3 = (**(int (***)())(*(int *)*puVar2 + 4))((int *)*puVar2,*puVar1);
      if (puVar2[1] != 0) {
        fn_822315A0(puVar2[1]);
      }
      if (puVar1[1] != 0) {
        fn_822315A0();
      }
    } while (cVar3 == '\0');
    while (param_1 = param_1 + 8, (param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
      puVar1 = (unsigned int *)fn_82365BD8(auStack_38,param_1);
      puVar2 = (unsigned int *)fn_82365BD8(auStack_40,uVar4);
      cVar3 = (**(int (***)())(*(int *)*puVar2 + 4))((int *)*puVar2,*puVar1);
      if (puVar2[1] != 0) {
        fn_822315A0(puVar2[1]);
      }
      if (puVar1[1] != 0) {
        fn_822315A0();
      }
      if (cVar3 == '\0') {
        uVar4 = uVar4 + 8;
        fn_823F2E20(uVar4,param_1);
      }
    }
    param_2 = uVar4 + 8;
  }
  return param_2;
}

