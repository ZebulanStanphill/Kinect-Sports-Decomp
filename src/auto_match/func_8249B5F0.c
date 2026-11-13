typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_af0;
extern unsigned int fStack_ae8;
extern int fn_82265140();
extern int fn_8229DCA8();
extern int fn_8229E090();
extern int fn_8249B9D0();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_82F4E1F8();
extern int fn_82F4EBC0();
extern int fn_82F4EBE8();
extern int fn_82F4EFF8();
extern int fn_82F52188();
extern unsigned int lbl_821A8C90;
extern unsigned int stack0x00000000;
extern unsigned int stack0x00000030;
extern V16 loadVectorLeftIndexed128();


void fn_8249B5F0(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  char cVar8;
  int *piVar7;
  __int64 lVar9;
  int *piVar10;
  unsigned int uVar11;
  float in_register_00010000;
  float in_ACC;
  unsigned int uVar12;
  float in_register_00010008;
  unsigned int uVar13;
  float in_vr0;
  unsigned int uVar14;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_vr68;
  float in_stack_00000038;
  unsigned char auStack_af0 [8];
  float fStack_ae8;
  
  uVar4 = ZEXT48(&stack0x00000000);
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000030 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x88) == 0)) {
    if (param_3 != 0) {
      loadVectorLeftIndexed128(in_r0,uVar4 - 0xb00);
      pfVar2 = (float *)((unsigned int)(auStack_af0 + (int)in_r0) & 0xfffffff0);
      *pfVar2 = in_register_00010440 * in_register_00010000;
      pfVar2[1] = in_register_00010444 * in_ACC;
      pfVar2[2] = in_register_00010448 * in_register_00010008;
      pfVar2[3] = in_vr68 * in_vr0;
      if (fStack_ae8 < in_stack_00000038) {
        if (*(int *)(param_1 + 0xb4) != 0) {
          return;
        }
        uVar12 = *(unsigned int *)(param_1 + 0xe4);
        puVar1 = (unsigned int *)(param_1 + 0x100U & 0xfffffff0);
        *puVar1 = in_register_00010010;
        puVar1[1] = in_register_00010014;
        puVar1[2] = in_register_00010018;
        puVar1[3] = in_vr1;
        fn_82528BF8(uVar12,0xffffffff821bf00c,uVar4 - 0xa60,0x100,0,0);
        fn_82528BF8(*(unsigned int *)(param_1 + 0xe4),0xffffffff821bf024,uVar4 - 0x860,0x400,0,0
                         );
        fn_82528BF8(*(unsigned int *)(param_1 + 0xe4),0xffffffff821bf03c,uVar4 - 0xaa0,0x20,0,0)
        ;
        fn_82528BF8(*(unsigned int *)(param_1 + 0xe4),0xffffffff821bf050,uVar4 - 0xae0,0x20,0,0)
        ;
        iVar5 = fn_8265C9E0(0x434);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          *(unsigned char ***)(iVar5 + 0x41c) = &lbl_821A8C90;
          fn_8229DCA8(iVar5,uVar4 - 0xa60,uVar4 - 0x860,uVar4 - 0xaa0,uVar4 - 0xae0,
                            0xffffffff8249c920,param_1,1);
        }
        *(int *)(param_1 + 0xb4) = iVar5;
        return;
      }
      fn_82F4E1F8();
      fn_82265140(0);
    }
    iVar5 = 0;
    uVar11 = 0;
    puVar1 = (unsigned int *)(param_1 + 0xf0U & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    do {
      iVar6 = fn_82F4EBC0(uVar11 & 0xff);
      if ((iVar6 != 0) && (cVar8 = fn_82F4EFF8(), cVar8 != '\0')) {
        iVar5 = iVar5 + 1;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 2);
    if (0 < iVar5) {
      piVar10 = (int *)(param_1 + 0x14);
      lVar9 = 2;
      do {
        iVar5 = *piVar10;
        if (*(int *)(iVar5 + 0x20) < 0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)fn_82F4EBE8();
        }
        if ((piVar7 != (int *)0x0) && (iVar6 = (**(int (***)())(*piVar7 + 4))(piVar7), iVar6 != 0)) {
          iVar6 = fn_82F52188(uVar4 - 0xaf0,piVar7,1);
          puVar1 = (unsigned int *)((int)in_r0 + iVar6 & 0xfffffff0);
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          puVar3 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
          *puVar3 = *puVar1;
          puVar3[1] = uVar12;
          puVar3[2] = uVar13;
          puVar3[3] = uVar14;
        }
        lVar9 = lVar9 + -1;
        piVar10 = piVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x88) = 1;
  if ((param_2 == 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    fn_8229E090(*(int *)(param_1 + 0xb4),0,0);
    *(unsigned int *)(param_1 + 0xb4) = 0;
  }
  if ((param_4 != 0) && (*(int *)(param_1 + 8) == 2)) {
    if (*(int *)(param_1 + 0xb4) != 0) {
      fn_8229E090(*(int *)(param_1 + 0xb4),0,1);
      *(unsigned int *)(param_1 + 0xb4) = 0;
    }
    *(unsigned int *)(param_1 + 0x50) = 0;
    fn_8249B9D0(param_1,3);
  }
  return;
}

