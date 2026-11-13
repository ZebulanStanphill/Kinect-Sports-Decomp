typedef unsigned char bool;
extern unsigned int *auStack_10;
extern unsigned int fStack_4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8326183C;


bool fn_82F4E1B8(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_10 [12];
  float fStack_4;
  
  fVar3 = lbl_821AAD20;
  puVar1 = (unsigned int *)(lbl_8326183C + 0xb00U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return fStack_4 != fVar3;
}

