extern unsigned int *auStack_60;
extern int fn_8265C940();
extern int fn_82E85088();
extern int fn_82E871A0();
extern int fn_82E8EC58();
extern int fn_82E915E0();
extern int fn_82E91950();
extern int fn_82EDFFC0();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82E87F50(int param_1)

{
  int iVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int auStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  int iStack_48;
  int iStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  int iStack_34;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  int iStack_28;
  int iStack_24;

  iStack_28 = *(int *)(param_1 + 0x278) >> 1;
  auStack_60 = 0;
  iStack_24 = *(int *)(param_1 + 0x27c) >> 1;
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  fn_82EDFFC0(param_1 + 0x280,&stack_pair_30.first);
  fn_82E85088(param_1);
  uVar6 = *(unsigned int *)(param_1 + 0x27c);
  iStack_44 = *(int *)(param_1 + 0x28c);
  if (*(int *)(param_1 + 4) == 8) {
    uVar6 = uVar6 + 0x1f & 0xffffffe0;
    iStack_44 = (int)uVar6 >> 1;
  }
  iStack_34 = uVar6 + 0x20;
  iStack_38 = *(int *)(param_1 + 0x278) + 0x20;
  uStack_40 = 0xffffffe0;
  iStack_48 = *(int *)(param_1 + 0x288) + 0x10;
  iStack_44 = iStack_44 + 0x10;
  uStack_3c = 0xffffffe0;
  stack_pair_50.first = 0xfffffff0;
  stack_pair_50.second = 0xfffffff0;
  puVar3 = (unsigned int *)fn_8265C940(0x10,0x248c8000);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(unsigned int **)(param_1 + 0x830) = puVar3;
  if (puVar3 == (unsigned int *)0x0) {
    fn_82E871A0();
    uVar2 = (unsigned __int64)auStack_60;
    if (auStack_60 == 0) {
      uVar2 = 0xfffffffffffffffd;
    }
  }
  else {
    fn_82E8EC58(param_1);
    if (*(int *)(param_1 + 4) == 8) {
      if ((*(int *)(param_1 + 0x76c8) == 0) || (uVar5 = 4, *(int *)(param_1 + 0x654) == 0)) {
        uVar5 = 3;
      }
      fn_82E91950(*(unsigned int *)(param_1 + 0x830),&auStack_60,&uStack_40,&stack_pair_50.first,uVar5,8,
                      *(unsigned int *)(param_1 + 0x31c),*(unsigned int *)(param_1 + 800));
      fn_82E915E0(*(unsigned int *)(param_1 + 0x830),param_1 + 0x304,0xffffffffffffffff);
      fn_82E915E0(*(unsigned int *)(param_1 + 0x830),param_1 + 0x300,0xffffffffffffffff);
      iVar4 = param_1 + 0x30c;
    }
    else {
      fn_82E91950(*(unsigned int *)(param_1 + 0x830),&auStack_60,&uStack_40,&stack_pair_50.first,2,0,
                      *(unsigned int *)(param_1 + 0x31c),*(unsigned int *)(param_1 + 800));
      fn_82E915E0(*(unsigned int *)(param_1 + 0x830),param_1 + 0x304,0xffffffffffffffff);
      iVar4 = param_1 + 0x300;
    }
    fn_82E915E0(*(unsigned int *)(param_1 + 0x830),iVar4,0xffffffffffffffff);
    uVar2 = (unsigned __int64)auStack_60;
    if (auStack_60 == 0) {
      iVar4 = *(int *)(param_1 + 0x300);
      iVar1 = *(int *)(iVar4 + 0x40);
      *(int *)(param_1 + 0x14) = iVar1;
      *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(iVar4 + 0x58);
      *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(iVar4 + 0x70);
      *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x574) + iVar1;
    }
  }
  return uVar2;
}
