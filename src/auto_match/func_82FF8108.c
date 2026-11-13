#define true 1
extern int fn_82FF6060();


unsigned __int64 fn_82FF8108(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)*param_1;
  puVar2 = (unsigned int *)0x0;
  while( true ) {
    puVar1 = puVar3;
    if (puVar1 == (unsigned int *)0x0) {
      return 2;
    }
    if (puVar1[1] == param_2) break;
    puVar3 = (unsigned int *)*puVar1;
    puVar2 = puVar1;
  }
  fn_82FF6060(param_1,puVar1,puVar2);
  return 1;
}

