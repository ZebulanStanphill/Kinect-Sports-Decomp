#define true 1
extern int fn_82230300();
extern int fn_82359C18();
extern int fn_824E7698();
extern int fn_8265CA20();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C16E0;


void fn_824E6AA8(unsigned int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  
  *param_1 = &lbl_821C16E0;
  cVar1 = *(char *)((int)*(int **)(param_1[0xbd] + 4) + 0x91);
  piVar3 = *(int **)(param_1[0xbd] + 4);
  while( true ) {
    if (cVar1 != '\0') break;
    fn_824E7698(param_1 + 0xbc,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_82230300(piVar3 + 3,1,0);
    fn_8265CA20(piVar3);
    cVar1 = *(char *)((int)piVar2 + 0x91);
    piVar3 = piVar2;
  }
  *(unsigned int *)(param_1[0xbd] + 4) = param_1[0xbd];
  *(unsigned int *)param_1[0xbd] = param_1[0xbd];
  *(unsigned int *)(param_1[0xbd] + 8) = param_1[0xbd];
  param_1[0xbe] = 0;
  fn_8265CA20(param_1[0xbd]);
  lVar4 = 1;
  puVar5 = param_1 + 0x112;
  do {
    puVar5 = puVar5 + -0x5c;
    fn_82359C18(puVar5);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  *param_1 = &lbl_821C1424;
  return;
}

