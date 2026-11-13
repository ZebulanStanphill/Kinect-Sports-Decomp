#define true 1
extern int fn_82FF5400();
extern unsigned int lbl_832642F4;


unsigned __int64 fn_8300A650(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  double dVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0x7c);
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      return 1;
    }
    if (puVar1[1] == param_2) break;
    puVar1 = (unsigned int *)*puVar1;
  }
  puVar2 = puVar1 + 2;
  if (puVar2 == (unsigned int *)0x0) {
    return 1;
  }
  dVar3 = (double)(float)puVar1[5];
  if (puVar1[4] != 0) {
    fn_82FF5400(dVar3,lbl_832642F4,puVar1[4],0x10000,param_4,0,4,1);
  }
  if (puVar1[4] != 0) {
    return 1;
  }
  (**(int (***)())*puVar2)(dVar3,puVar2,0x10000);
  return 1;
}

