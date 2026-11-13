extern unsigned int *auStack_70;
extern int fn_8306E7E8();
extern int fn_8306E850();
extern int fn_8306E860();
extern int fn_8306ECA8();
extern int fn_8306ED30();
extern int fn_8306ED38();
extern int fn_83075D30();
extern int fn_83075D50();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E60;


void fn_83075790(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_70 [112];
  
  iVar1 = *(int *)(param_1 + 0x520);
  iVar6 = *(int *)(param_1 + 0x524) * 0x290 + param_1;
  uVar3 = fn_83075D50(param_2);
  *(unsigned __int64 *)(iVar6 + 0x280) = uVar3;
  lVar5 = 0;
  iVar7 = iVar6 + 0x140;
  dVar9 = (double)lbl_82002AE0;
  dVar10 = (double)lbl_82186E60;
  do {
    fn_83075D30(auStack_70,param_2,lVar5);
    altv207_13(in_vs32,in_vs35);
    puVar2 = (unsigned int *)(iVar7 - 0x140U & 0xfffffff0);
    *puVar2 = in_register_000103f0;
    puVar2[1] = in_register_000103f4;
    puVar2[2] = in_register_000103f8;
    puVar2[3] = in_vr63;
    if (*(int *)(param_1 + 0x528) < 1) {
      fn_8306ECA8();
    }
    else {
      uVar3 = fn_8306E860(*(unsigned __int64 *)(iVar6 + 0x280),
                           *(unsigned __int64 *)(iVar1 * 0x290 + param_1 + 0x280));
      dVar8 = (double)fn_8306E7E8(uVar3,dVar10);
      dVar8 = (double)(float)(dVar9 / dVar8);
      puVar2 = (unsigned int *)(iVar7 - 0x140U & 0xfffffff0);
      in_register_00010010 = *puVar2;
      in_register_00010014 = puVar2[1];
      in_register_00010018 = puVar2[2];
      in_vr1 = puVar2[3];
      fn_8306ED30();
      puVar2 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
      fn_8306ED38(dVar8);
    }
    lVar5 = lVar5 + 1;
    puVar2 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
    iVar7 = iVar7 + 0x10;
  } while ((int)lVar5 < 0x14);
  iVar1 = *(int *)(param_1 + 0x524);
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x528) + 1;
  *(int *)(param_1 + 0x524) = 1 - iVar1;
  *(int *)(param_1 + 0x528) = (int)lVar5;
  *(int *)(param_1 + 0x520) = iVar1;
  uVar4 = fn_8306E850(lVar5,2);
  *(unsigned int *)(param_1 + 0x528) = uVar4;
  return;
}

