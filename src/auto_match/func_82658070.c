extern int fn_82645110();
extern unsigned int lbl_8328240C;
extern unsigned int lbl_83282410;


void fn_82658070(unsigned __int64 *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  
  puVar6 = (unsigned int *)(param_1 + 0x8d);
  param_1[0x5dc] = 0xffffffff;
  lVar7 = 0x1a;
  do {
    puVar2 = puVar6 + 6;
    puVar6 = puVar6 + 6;
    *puVar6 = *puVar2 & 0xfffffffc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = (unsigned int *)(param_1 + 0xdd);
  lVar7 = 0x12;
  do {
    puVar2 = puVar6 + 2;
    puVar6 = puVar6 + 2;
    *puVar6 = *puVar2 & 0xfffffffc | 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(unsigned int *)((int)param_1 + 0x28bc) = 0x20002000;
  *(unsigned int *)((int)param_1 + 0x29d4) = 0xff000;
  *(unsigned int *)((int)param_1 + 0x2a14) = 0x10;
  *(unsigned int *)((int)param_1 + 0x2944) = *(unsigned int *)((int)param_1 + 0x2944) | 0x80000;
  *(unsigned int *)((int)param_1 + 0x2984) = 0xe;
  *(unsigned int *)(param_1 + 0x542) = 0xe;
  *(unsigned int *)((int)param_1 + 0x296c) = 8;
  *(unsigned int *)(param_1 + 0x53b) = 0xff100;
  *(unsigned int *)((int)param_1 + 0x2954) = 4;
  *(unsigned int *)(param_1 + 0x529) = *(unsigned int *)(param_1 + 0x529) | 0x10000;
  *(unsigned int *)((int)param_1 + 0x28cc) = 0xffffff;
  *(unsigned int *)(param_1 + 0x538) = 4;
  *(unsigned int *)(param_1 + 0x549) = 2;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  *(unsigned int *)((int)param_1 + 0x2aa4) = 0xe;
  uVar4 = *(unsigned int *)(param_1 + 6);
  if (*(unsigned int *)(param_1 + 7) < uVar4) {
    uVar4 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar4 + 4) = 0xd01;
  *(unsigned int *)(uVar4 + 8) = 0x4000000;
  uVar1 = lbl_8328240C;
  *(unsigned int *)(uVar4 + 0xc) = 0xc0022100;
  *(unsigned int *)(uVar4 + 0x10) = 0x81;
  uVar3 = lbl_83282410;
  uVar5 = 0xf;
  *(unsigned int *)(uVar4 + 0x14) = 0xffffffff;
  *(unsigned int *)(uVar4 + 0x18) = uVar1 | 0x80010000;
  *(unsigned int *)(uVar4 + 0x1c) = 0xc0022100;
  *(unsigned int *)(uVar4 + 0x20) = 0x82;
  *(unsigned int *)(uVar4 + 0x24) = 0xffffffff;
  *(unsigned int *)(uVar4 + 0x28) = uVar3;
  *(unsigned int *)(uVar4 + 0x2c) = 0xe42;
  *(unsigned int *)(uVar4 + 0x30) = 0x1f60;
  uVar1 = *(unsigned int *)(param_1 + 0xbd1);
  *(unsigned int *)(uVar4 + 0x34) = 0xc85;
  if ((uVar1 & 2) == 0) {
    uVar5 = 3;
  }
  *(unsigned int *)(uVar4 + 0x38) = uVar5;
  *(unsigned int *)(uVar4 + 0x3c) = 0x57c;
  *(unsigned int *)(uVar4 + 0x40) = 0xbadf00d;
  *(unsigned int *)(uVar4 + 0x44) = 0x57b;
  *(unsigned int *)(uVar4 + 0x48) = 0;
  *(unsigned int **)(param_1 + 6) = (unsigned int *)(uVar4 + 0x48);
  return;
}

