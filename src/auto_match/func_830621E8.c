extern int fn_8265CA60();
extern int fn_830619F8();
extern int fn_83061B30();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();


void fn_830621E8(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_830677A0(param_2,*(unsigned int *)(param_1 + 0xc),0xffffffff8217e6c0);
  }
  fn_830619F8(param_1);
  lVar1 = -1;
  uVar6 = *(unsigned int *)(param_1 + 0x18);
  uVar7 = (unsigned __int64)uVar6;
  uVar4 = uVar7 * 0x18;
  if (0xaaaaaaa < uVar7) {
    uVar4 = 0xffffffffffffffff;
  }
  if ((uVar4 & 0xffffffff) < 0xfffffffc) {
    lVar1 = uVar4 + 4;
  }
  puVar2 = (unsigned int *)fn_8265CA60(lVar1);
  if (puVar2 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = uVar6;
    puVar3 = puVar2 + 1;
    if (-1 < (__int64)(uVar7 - 1)) {
      puVar5 = (unsigned char *)((int)puVar2 + 1);
      do {
        *(unsigned int *)(puVar5 + 7) = 0;
        *(unsigned int *)(puVar5 + 0xb) = 0;
        *(unsigned int *)(puVar5 + 0xf) = 0;
        puVar5[0x17] = 1;
        puVar5 = puVar5 + 0x18;
        *puVar5 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  uVar6 = 0;
  *(unsigned int **)(param_1 + 0x2c) = puVar3;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar3 = puVar3 + -6;
    do {
      puVar3 = puVar3 + 6;
      *puVar3 = uVar6;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x18));
  }
  iVar8 = *(int *)(param_1 + 4);
  while (iVar8 != 0) {
    fn_83061B30(param_1,iVar8);
    iVar8 = *(int *)(iVar8 + 4);
    if ((param_2 & 0xffffffff) != 0) {
      fn_830679A8(param_2);
    }
  }
  if ((param_2 & 0xffffffff) != 0) {
    fn_830678C8(param_2);
  }
  return;
}

