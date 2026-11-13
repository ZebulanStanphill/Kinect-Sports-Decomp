extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_8265CA60();
extern int fn_8305C3F8();
extern int fn_83061508();
extern int fn_83061BC8();
extern int fn_830625A0();
extern int fn_83063D30();
extern int fn_830646D8();
extern int fn_83064A38();


void fn_8285B910(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned char auStack_140 [16];
  unsigned char auStack_130 [16];
  unsigned char auStack_120 [288];
  
  uVar1 = *(unsigned short *)(param_1 + 0x44);
  uVar7 = (unsigned __int64)uVar1;
  lVar3 = -1;
  *param_2 = (unsigned int)uVar1;
  uVar5 = uVar7 * 0x30;
  if (0x5555555 < uVar7) {
    uVar5 = 0xffffffffffffffff;
  }
  if ((uVar5 & 0xffffffff) < 0xfffffffc) {
    lVar3 = uVar5 + 4;
  }
  puVar4 = (unsigned int *)fn_8265CA60(lVar3);
  if (puVar4 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6 = puVar4 + 1;
    *puVar4 = (unsigned int)uVar1;
    puVar4 = puVar6;
    while (uVar7 = uVar7 - 1, -1 < (__int64)uVar7) {
      fn_83061508(puVar4);
      puVar4 = puVar4 + 0xc;
    }
  }
  param_2[1] = (unsigned int)puVar6;
  fn_830646D8(auStack_120,param_1 + 0x6c,0);
  fn_8305C3F8(param_1 + 0x6c,auStack_140,auStack_130);
  fn_83064A38(auStack_120,param_2[1],auStack_140,auStack_130,0);
  iVar8 = 0;
  if (0 < (int)*param_2) {
    lVar3 = 0;
    do {
      uVar2 = param_2[1];
      fn_83061BC8((double)*(float *)(param_1 + 0x74),(unsigned __int64)uVar2 + lVar3);
      fn_830625A0((unsigned __int64)uVar2 + lVar3,1,0,0);
      iVar8 = iVar8 + 1;
      lVar3 = lVar3 + 0x30;
    } while (iVar8 < (int)*param_2);
  }
  fn_83063D30(auStack_120);
  return;
}

