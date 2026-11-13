extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8251FA58();
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern unsigned int uStack_48;


void fn_825BD360(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned int uStack_48;
  
  uStack_48 = 0;
  puStack_50 = (unsigned int *)0x0;
  puStack_4c = (unsigned int *)0x0;
  RtlEnterCriticalSection(param_1 + 0x234);
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
  puVar2 = (unsigned int *)0x0;
  puVar1 = (unsigned int *)0x0;
  if ((*(int *)(param_1 + 0x1e4) != 0) &&
     (uVar3 = 0,
     (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x8c) + 0x24) +
     (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x8c) + 0x14) != 0)) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + *(int *)(param_1 + 0x1e4)) != 0) {
        fn_8257A9F0(&puStack_50,iVar5 + *(int *)(param_1 + 0x1e4));
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
      puVar2 = puStack_4c;
      puVar1 = puStack_50;
    } while (uVar3 < (unsigned int)(*(int *)(*(int *)(param_1 + 0x8c) + 0x24) +
                           *(int *)(*(int *)(param_1 + 0x8c) + 0x14)));
  }
  RtlLeaveCriticalSection(param_1 + 0x234);
  for (puVar6 = puVar1; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    fn_8251FA58(*puVar6);
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x21c);
  uVar3 = *(unsigned int *)(param_1 + 0x220);
  while ((uVar4 & 0xffffffff) != (unsigned __int64)uVar3) {
    fn_82365BD8(&puStack_50,uVar4);
    fn_825BD360(puStack_50);
    uVar4 = uVar4 + 8;
    if (puStack_4c != (unsigned int *)0x0) {
      fn_822315A0();
    }
  }
  if (puVar1 != (unsigned int *)0x0) {
    fn_8265CA20(puVar1);
  }
  return;
}

