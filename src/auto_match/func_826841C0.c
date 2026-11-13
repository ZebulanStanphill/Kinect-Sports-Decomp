extern int fn_82683DD0();
extern int fn_8268B610();
extern int fn_8268BA10();
extern int fn_8268BC50();


void fn_826841C0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int *puVar3;
  
  cVar2 = fn_82683DD0(((unsigned __int64)*(unsigned int *)(param_2 + 4) & 0xfffffffc) + 8);
  if (cVar2 == '\0') {
    puVar3 = (unsigned int *)(param_2 + 8);
    uVar1 = *(unsigned int *)(*puVar3 & 0xfffffffc) & 0x7fffffff;
    if (uVar1 != 0) {
      fn_8268BA10(param_1,puVar3);
      cVar2 = *(char *)((*puVar3 & 0xfffffffc) + uVar1 + 7);
      if ((cVar2 != '\\') && (cVar2 != '/')) {
        fn_8268B610(param_1,0xffffffff821aa630,0xffffffffffffffff);
      }
      fn_8268BC50(param_1,param_2 + 4);
      return;
    }
  }
  fn_8268BA10(param_1,param_2 + 4);
  return;
}

