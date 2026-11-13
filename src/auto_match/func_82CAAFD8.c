extern int fn_82C53960();
extern int fn_82C53970();


unsigned __int64 fn_82CAAFD8(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  
  puVar2 = (unsigned int *)0x0;
  if (param_1 == (unsigned int *)0x0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else {
    puVar4 = param_1 + -1;
    lVar6 = 6;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar3 = param_1 + 2;
    param_1[5] = param_2;
    param_1[4] = 0;
    iVar5 = 0;
    puVar4 = puVar3;
    if (0 < param_2) {
      do {
        puVar2 = (unsigned int *)fn_82C53960(8,0);
        if (puVar2 == (unsigned int *)0x0) {
          puVar2 = (unsigned int *)*puVar3;
          while (puVar2 != (unsigned int *)0x0) {
            puVar2 = (unsigned int *)*puVar2;
            fn_82C53970();
          }
          puVar2 = (unsigned int *)*param_1;
          *puVar3 = 0;
          while (puVar2 != (unsigned int *)0x0) {
            puVar2 = (unsigned int *)*puVar2;
            fn_82C53970();
          }
          *param_1 = 0;
          return 0xfffffffffffffff7;
        }
        *puVar2 = 0;
        iVar5 = iVar5 + 1;
        puVar2[1] = 0;
        puVar2[1] = 0;
        *puVar4 = puVar2;
        puVar4 = puVar2;
      } while (iVar5 < param_2);
    }
    param_1[3] = puVar2;
    *puVar2 = 0;
    uVar1 = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return uVar1;
}

