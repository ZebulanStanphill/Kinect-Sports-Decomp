extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825D07E0();
extern int fn_826231D8();
extern int fn_82623338();
extern int fn_82639EA8();
extern int memcpy();


void fn_825EEDF8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char auStack_b0 [64];
  unsigned char auStack_70 [64];
  
  iVar6 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4);
  piVar4 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 5) * 4 + param_1);
  iVar1 = *piVar4;
  memcpy(auStack_b0,iVar6 + 0x50,0x40);
  memcpy(auStack_70,iVar6 + 0x90,0x40);
  **(int **)(param_1 + 0x10) = iVar1;
  fn_82540870(*(unsigned int *)(param_1 + 0x10),auStack_b0);
  fn_82540B48(*(unsigned int *)(param_1 + 0x10),auStack_70);
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(unsigned int *)(param_1 + 0x10));
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xabb8) = *(unsigned int *)(param_1 + 8);
  fn_825C7348(3);
  uVar5 = fn_825C7348(2);
  fn_826231D8(piVar4,uVar5);
  fn_82540438(((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x7fffff) * 0x200 +
                    (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174,*(unsigned int *)(param_1 + 0x10),4);
  fn_82639EA8(iVar1,((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar1 + 0x2f14) = 1;
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned int *)(iVar1 + 0x2f04) = 7;
  *(unsigned int *)(iVar1 + 0x28dc) =
       *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 7;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  puVar2 = *(unsigned int **)(param_1 + 4);
  uVar3 = *(unsigned int *)(param_1 + 8);
  fn_825D07E0((double)(float)puVar2[uVar3 * 8 + 0x2ac],(unsigned __int64)*puVar2 + 0xcec,
                    *(unsigned int *)(param_1 + 0x10),((unsigned __int64)uVar3 + 0x55 & 0x7ffffff) << 5,
                    puVar2 + uVar3 * 0x80 + 99);
  *(unsigned int *)(iVar1 + 0x2f04) = 0xf;
  *(unsigned int *)(iVar1 + 0x28dc) =
       -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 0xf | *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  fn_82623338(piVar4);
  return;
}

