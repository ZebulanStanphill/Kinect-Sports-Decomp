typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82528948();
extern int fn_8252D970();
extern V16 vectorCompareEqualToFloatingPoint();


void fn_82569740(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned char in_cr6;
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar1 = *(int *)(param_2 + 0xdc);
  if (*(char *)(param_2 + 0x24) != '\0') {
    puVar2 = (unsigned int *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    vectorCompareEqualToFloatingPoint(in_vs44,in_vs45);
    if (!(bool)(in_cr6 >> 3 & 1)) {
      puVar3 = (unsigned int *)(in_r0 + iVar1 + 0xa0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      *(unsigned int *)(iVar1 + 0x170) = 0;
      fn_82528948(iVar1);
    }
  }
  fn_8252D970(param_1,iVar1);
  return;
}

