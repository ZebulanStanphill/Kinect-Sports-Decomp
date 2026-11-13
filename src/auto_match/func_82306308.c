extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_82306238();
extern int fn_82531F18();
extern unsigned int lbl_82191F78;
extern int (*lbl_83276798)();


void fn_82306308(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  double dVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int aiStack_70 [2];
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [80];
  
  if (lbl_83276798 == (int (**)())0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (*lbl_83276798)();
  }
  if ((-(unsigned int)(lVar2 != 0) & param_1) == 0) {
    fn_82306238();
  }
  else {
    uVar4 = 0;
    dVar5 = (double)lbl_82191F78;
    do {
      uVar9 = in_vr1;
      uVar8 = in_register_00010018;
      uVar7 = in_register_00010014;
      uVar6 = in_register_00010010;
      fn_82306238();
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar1 = in_register_00010010;
      puVar1[1] = in_register_00010014;
      puVar1[2] = in_register_00010018;
      puVar1[3] = in_vr1;
      in_vr1 = uVar9;
      in_register_00010018 = uVar8;
      in_register_00010014 = uVar7;
      in_register_00010010 = uVar6;
      iVar3 = fn_82531F18(dVar5,dVar5,auStack_60,auStack_68,aiStack_70);
      if ((iVar3 != 0) && (aiStack_70[0] == 1)) {
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x14);
  }
  return;
}

