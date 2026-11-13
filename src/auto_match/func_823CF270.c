extern unsigned int *auStack_78;
extern unsigned int *auStack_98;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d8;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_823CF430();
extern int fn_823E6A28();
extern int fn_823F17E0();
extern int fn_8288B760();
extern int memcpy();
extern unsigned int iStack_ac;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64
fn_823CF270(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned char auStack_d8 [28];
  unsigned int *puStack_bc;
  unsigned char auStack_b0 [4];
  int iStack_ac;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int auStack_98 [8];
  unsigned int auStack_78 [22];
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1));
  stack_pair_a0.first = 0xffffffff;
  puVar5 = auStack_98;
  auStack_98[0] = 0;
  stack_pair_a0.second = 0xffffffff;
  lVar6 = 7;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0xffffffff;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar5 = auStack_78;
  auStack_78[0] = 0;
  lVar6 = 7;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0xffffffff;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823E6A28(param_1,iVar2,&stack_pair_a0.first);
  }
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) != 0) {
    return 0;
  }
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (*(char *)(iVar3 + 4) != '\0') {
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      return 1;
    }
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar4 = *(unsigned int *)(iVar2 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if (uVar4 == 0) {
      return 1;
    }
    puVar5 = (unsigned int *)fn_822EFBF0(auStack_b0,iVar3);
    puStack_bc = &stack_pair_a0.first;
    memcpy(auStack_d8,param_5 + 5,0x18);
    fn_823F17E0((unsigned __int64)*(unsigned int *)*puVar5 + 0x930,param_2,param_3,*param_5,param_5[1],
                      param_5[2],param_5[3],param_5[4]);
    if (iStack_ac != 0) {
      fn_822315A0();
    }
  }
  fn_823CF430(param_1,param_2,param_3,param_4,&stack_pair_a0.first);
  return 1;
}

