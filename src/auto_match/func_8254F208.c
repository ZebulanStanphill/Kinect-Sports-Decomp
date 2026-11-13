extern int fn_8254F298();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8254F208(unsigned __int64 param_1,int *param_2)

{
  unsigned __int64 *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  puVar1 = (unsigned __int64 *)*param_2;
  uVar4 = 0x30;
  lVar6 = 0x20;
  iVar5 = 0x300;
  do {
    uVar3 = uVar4 & 0xffffffff;
    puVar2 = (unsigned int *)((int)&uStack_20 + in_r0 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    uVar4 = uVar4 + 1;
    *(unsigned int *)((int)puVar1 + iVar5 + 0x784) = uStack_1c;
    *(unsigned int *)((int)puVar1 + iVar5 + 0x788) = uStack_18;
    *(unsigned int *)((int)puVar1 + iVar5 + 0x78c) = uStack_14;
    *(unsigned int *)((int)puVar1 + iVar5 + 0x780) = uStack_20;
    *puVar1 = 0x8000000000000000U >> (uVar3 >> 2 & 0x7f) | *puVar1;
    lVar6 = lVar6 + -1;
    iVar5 = iVar5 + 0x10;
  } while (lVar6 != 0);
  fn_8254F298(param_1,puVar1,1);
  return;
}

