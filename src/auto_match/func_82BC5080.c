#define true 1
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern int fn_82BC5A28();
extern int fn_82BC6DC0();
extern int fn_82BC7368();


void fn_82BC5080(int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  
  *(int *)(param_1[8] + 0x864) = *(int *)(param_1[8] + 0x864) + 1;
  uVar1 = *(unsigned int *)(param_1[9] + 0x5b0);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar7 = puVar3 + 1;
  *puVar3 = uVar1;
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar7,*(unsigned int *)(param_1[9] + 0x5b0));
  }
  *(unsigned int *)(param_2 + 0x48) = 1;
  *(unsigned int *)(*param_1 + 4) = 0;
  *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[6]) = param_2;
  piVar4 = (int *)fn_82BC0088(puVar7,puVar7[1]);
  *piVar4 = param_2;
  iVar6 = 2;
  *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[1]) = *(int *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x48);
  do {
    *(int *)(iVar5 * 4 + param_1[4]) = iVar5;
    iVar5 = param_2;
    while( true ) {
      param_2 = fn_82BC5A28(iVar5,*(unsigned int *)(param_1[8] + 0x864));
      if (param_2 != 0) break;
      if (puVar7[1] == 0) {
        fn_82BC6DC0(puVar7,1);
        return;
      }
      iVar5 = fn_82BC7368();
    }
    piVar4 = (int *)fn_82BC0088(puVar7,puVar7[1]);
    *piVar4 = param_2;
    *(int *)(param_2 + 0x48) = iVar6;
    iVar2 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(unsigned int *)(iVar2 + *param_1) = *(unsigned int *)(iVar5 + 0x48);
    *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[6]) = param_2;
    *(unsigned int *)(param_2 + 0x80) = *(unsigned int *)(param_1[8] + 0x864);
    *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[1]) = *(int *)(param_2 + 0x48);
    iVar5 = *(int *)(param_2 + 0x48);
  } while( true );
}

