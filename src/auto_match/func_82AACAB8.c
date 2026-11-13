#define true 1
extern int fn_82A29A38();


void fn_82AACAB8(int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(*param_1 + 4);
  fn_82A29A38();
  uVar1 = *puVar2;
  while( true ) {
    if ((uVar1 & 0x80000000) == 0) break;
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
  }
  *param_1 = (int)puVar2;
  return;
}

