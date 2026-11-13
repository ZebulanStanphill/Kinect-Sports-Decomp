#define true 1
extern int fn_82D01190();


void fn_82D01370(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  fn_82D01190();
  fn_82D01190(param_2);
  puVar4 = (unsigned int *)*param_1;
  puVar3 = (unsigned int *)*param_2;
  puVar2 = puVar4 + param_1[2];
  puVar1 = puVar3 + param_2[2];
  do {
    while( true ) {
      if ((puVar2 <= puVar4) || (puVar1 <= puVar3)) {
        return;
      }
      if (*puVar4 != *puVar3) break;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
LAB_82d013e4:
      puVar3 = puVar3 + 1;
    }
    if (*puVar3 <= *puVar4) goto LAB_82d013e4;
    puVar4 = puVar4 + 1;
  } while( true );
}

