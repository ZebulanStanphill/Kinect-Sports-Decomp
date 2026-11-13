extern unsigned int *auStack_30;
extern unsigned fn_82A383C0();


unsigned fn_82A34278(int param_1,unsigned param_2)

{
  int iVar2;
  unsigned uVar1;
  unsigned auStack_30 [1];
  
  auStack_30[0] = 0;
  iVar2 = -0x3fffffff;
  if (*(int (***)())(param_1 + 0x3c) != (int (**)())0x0) {
    iVar2 = (*(int (**)())(param_1 + 0x3c))("XctdDecompression",param_2,5,0,0,0,0,auStack_30);
  }
  uVar1 = fn_82A383C0(param_1 + 0x50,param_2);
  if ((*(int (***)())(param_1 + 0x40) != (int (**)())0x0) && (0 <= iVar2)) {
    (*(int (**)())(param_1 + 0x40))(uVar1,auStack_30[0]);
  }
  return uVar1;
}

