extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_822315A0();
extern int fn_8234C000();
extern int fn_8234D5A0();
extern int fn_8250DA48();
extern int fn_82511558();
extern int fn_8255F0B8();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2DD0();
extern int fn_827F46E8();
extern int fn_827F4818();
extern int fn_827F5AF8();
extern int fn_82811080();
extern int fn_82811400();
extern unsigned int iStack_f4;
extern unsigned int lbl_821B1C88;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;


void fn_822B80E8(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int auStack_100 [2];
  unsigned char auStack_f8 [4];
  int iStack_f4;
  unsigned char auStack_f0 [64];
  unsigned char auStack_b0 [48];
  unsigned char auStack_80 [128];
  
  uVar7 = *(unsigned int *)(param_1 + 4);
  uVar2 = fn_827F04B0(0x18c);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_827F1148(uVar2,uVar7,0);
  }
  *(unsigned int *)(param_1 + 8) = uVar4;
  fn_827F2DD0((double)ltcg_pool_0_0f,uVar7);
  uVar3 = fn_82811400(&stack0x00000000 + -0xb0,8);
  uVar2 = fn_82811080(0xffffffff8320a3e0,0x1b0,uVar3);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_8255F0B8(uVar2,uVar7,0);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  *(unsigned int *)(iVar5 + 0x174) = 0;
  *(int *)(iVar5 + 0x178) = param_1 + 0x14;
  *(int (***)())(iVar5 + 0x170) = fn_82511558;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x1a8) = 1;
  fn_827F0FB8(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),1);
  fn_827F0FB8(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x2c),1);
  fn_827F4818(&stack0x00000000 + -0x80,0,*(unsigned int *)(param_1 + 0xc),
               *(unsigned int *)(param_1 + 0x2c));
  uVar2 = fn_827F46E8(0x118);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8250DA48(uVar2,&stack0x00000000 + -0x80);
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  fn_827F0FB8(*(unsigned int *)(param_1 + 8),uVar3,1);
  uVar7 = *(unsigned int *)(param_1 + 0x10);
  uVar4 = *(unsigned int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x2e0) != 0) {
    fn_827F4818(&stack0x00000000 + -0xf0,2,uVar7);
    puVar6 = (unsigned int *)fn_827F46E8(0xf4);
    if (puVar6 == (unsigned int *)0x0) {
      puVar6 = (unsigned int *)0x0;
    }
    else {
      fn_827F5AF8(puVar6,&stack0x00000000 + -0xf0);
      puVar6[0x3a] = 0;
      *puVar6 = &lbl_821B1C88;
      puVar6[0x3b] = 1;
      puVar6[0x3c] = 0x41600000;
    }
    puVar1 = *(unsigned int **)(param_1 + 0x2e4);
    if (puVar6 != puVar1) {
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      *(unsigned int **)(param_1 + 0x2e4) = puVar6;
    }
    fn_827F0FB8(uVar4,*(unsigned int *)(param_1 + 0x2e0),0);
    fn_827F0FB8(uVar4,*(unsigned int *)(param_1 + 0x2e4),1);
    uVar7 = *(unsigned int *)(param_1 + 0x2e4);
  }
  uVar3 = fn_8234C000(param_1 + 0x150,*(unsigned int *)(param_1 + 8),uVar7);
  uVar7 = *(unsigned int *)(param_1 + 8);
  fn_827F4818(&stack0x00000000 + -0xb0,1,uVar3,*(unsigned int *)(param_1 + 0x32c));
  puVar6 = (unsigned int *)fn_8234D5A0(&stack0x00000000 + -0xf8,&stack0x00000000 + -0xb0);
  uVar8 = 0;
  uVar4 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x100) != puVar6) {
    uVar4 = puVar6[1];
    puVar6[1] = 0;
    uVar8 = *puVar6;
    *puVar6 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x338);
  *(unsigned int *)(param_1 + 0x338) = uVar4;
  *(unsigned int *)(param_1 + 0x334) = uVar8;
  if (iVar5 != 0) {
    fn_822315A0();
  }
  if (iStack_f4 != 0) {
    fn_822315A0();
  }
  fn_827F0FB8(uVar7,*(unsigned int *)(param_1 + 0x32c),0);
  fn_827F0FB8(uVar7,*(unsigned int *)(param_1 + 0x334),1);
  return;
}

