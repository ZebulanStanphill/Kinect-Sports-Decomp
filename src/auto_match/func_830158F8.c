extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_83013880();
extern int fn_83014FE0();
extern int fn_830154F0();
extern int fn_83015C88();
extern int fn_83015CF8();
extern unsigned int iStack_78;
extern unsigned int uStack_74;


unsigned __int64
fn_830158F8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,char param_6)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  int *piVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned int in_register_000103f0;
  unsigned char auStack_80 [1];
  int iStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  lVar8 = param_1 + 4;
  fn_83014FE0(auStack_80,lVar8,param_2);
  if (iStack_78 != 0) {
    if ((param_6 != '\0') && (*(char *)(iStack_78 + 0x29) == '\0')) {
      return 1;
    }
    piVar9 = *(int **)(iStack_78 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(int (***)())(*piVar9 + 0x10))(piVar9,0xffffffff831bc7f4);
    }
    fn_83015CF8(auStack_70,lVar8,auStack_80);
  }
  puVar4 = (unsigned int *)fn_83015C88(lVar8,param_2);
  if (puVar4 == (unsigned int *)0x0) {
    return 2;
  }
  *puVar4 = (int)param_3;
  *(char *)((int)puVar4 + 0x21) = param_6;
  *(unsigned char *)(puVar4 + 8) = 0;
  puVar7 = &uStack_74;
  altv300_21(in_vs32,in_vs40);
  puVar6 = puVar4 + 1;
  puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f0;
  puVar2[2] = in_register_000103f0;
  puVar2[3] = in_register_000103f0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f0;
  puVar2[2] = in_register_000103f0;
  puVar2[3] = in_register_000103f0;
  lVar8 = 6;
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar9 = puVar4 + 1;
  iVar5 = fn_83013880(0xffffffff831bc7f4,param_3,piVar9,auStack_60,auStack_70,
                            0xffffffff82002ae0);
  if ((iVar5 == 1) && (piVar1 = (int *)*piVar9, piVar1 != (int *)0x0)) {
    uVar3 = (**(int (***)())(*piVar1 + 0xc))(piVar1,0xffffffff831bc7f4,param_4,param_5);
    if ((int)uVar3 != 1) {
      (**(int (***)())(*(int *)*piVar9 + 0x10))((int *)*piVar9,0xffffffff831bc7f4);
      fn_830154F0(param_1,param_2);
      return uVar3;
    }
    return uVar3;
  }
  fn_830154F0(param_1,param_2);
  return 1;
}

