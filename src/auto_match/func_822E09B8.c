#define NAN(x) ((x) != (x))
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822DF348();
extern int fn_822E0D30();
extern int fn_82365BD8();
extern int fn_8255E2B0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_a0;


unsigned int fn_822E09B8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_a0;
  int aiStack_9c [3];
  float afStack_90 [4];
  unsigned char auStack_80 [128];
  
  uStack_a0 = 0;
  iVar1 = *(int *)(*param_2 + 0x2184);
  uVar5 = fn_82365BD8(afStack_90);
  iVar7 = fn_822E0D30(param_1,uVar5,iVar1,1,aiStack_9c,&uStack_a0);
  iVar4 = (int)in_r0;
  iVar8 = iVar1;
  if (iVar7 == 0) {
    uVar9 = 1;
    do {
      if ((int)uVar9 != iVar1) {
        uVar5 = fn_82365BD8(afStack_90,param_2);
        iVar7 = fn_822E0D30(param_1,uVar5,uVar9,0,aiStack_9c,&uStack_a0);
        iVar4 = (int)in_r0;
        iVar8 = (int)uVar9;
        if (iVar7 != 0) goto LAB_822e0a6c;
      }
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xffffffff) < 4);
  }
  else {
LAB_822e0a6c:
    if (iVar8 != 0) {
      dVar10 = (double)ltcg_pool_0_0f;
      dVar12 = (double)lbl_821CA460;
      if (iVar8 == 1) {
        iVar8 = *(int *)(param_1 + 0x14);
        iVar7 = *(int *)(*(int *)(iVar8 + 0x14) + 0x8c0);
        if ((iVar7 == 0) || (piVar2 = *(int **)(iVar7 + 0x1b4), piVar2 == (int *)0x0)) {
          iVar7 = -1;
        }
        else {
          iVar7 = (**(int (***)())(*piVar2 + 0x14))(piVar2,4);
        }
        if (iVar7 < 0) {
          puVar3 = (unsigned int *)((int)afStack_90 + iVar4 & 0xfffffff0);
          *puVar3 = in_register_000104d0;
          puVar3[1] = in_register_000104d4;
          puVar3[2] = in_register_000104d8;
          puVar3[3] = in_vr77;
        }
        else {
          fn_8255E2B0(*(unsigned int *)(iVar8 + 0x14));
          puVar3 = (unsigned int *)((int)afStack_90 + iVar4 & 0xfffffff0);
          *puVar3 = in_register_00010010;
          puVar3[1] = in_register_00010014;
          puVar3[2] = in_register_00010018;
          puVar3[3] = in_vr1;
        }
        dVar11 = (double)lbl_82192734;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)(((double)afStack_90[0] < dVar10) << 2) |
                      (unsigned int)(NAN((double)afStack_90[0]) || NAN(dVar10)) << 2)) < 0.0) {
          dVar11 = dVar12;
        }
      }
      else {
        dVar11 = dVar12;
        if (aiStack_9c[0] != 0) {
          dVar11 = (double)lbl_82192734;
        }
      }
      if (iVar1 != aiStack_9c[0]) {
        dVar12 = dVar10;
      }
      uVar5 = fn_82230110(auStack_80,0xffffffff82196582);
      uVar6 = fn_82365BD8(afStack_90,param_2);
      fn_822DF348(dVar11,dVar12,param_1,uVar6,uVar5,(iVar1 == aiStack_9c[0]) + '\x03');
    }
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return uStack_a0;
}

