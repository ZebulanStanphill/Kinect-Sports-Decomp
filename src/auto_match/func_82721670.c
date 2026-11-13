extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826A7398();
extern int fn_82743888();
extern int fn_82744378();
extern int fn_82F68918();
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;


void fn_82721670(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int *piVar5;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_50;
  double dStack_48;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar5 = (int *)fn_826A7398(*(unsigned int *)(param_1 + 0x18));
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar8 = (double)fn_826972E0(uVar3,uVar2);
    uVar7 = (unsigned int)dVar8;
  }
  uVar6 = (**(int (***)())(*piVar5 + 0xd0))(piVar5);
  if (uVar7 < uVar6) {
    if (uVar7 < 4) {
      piVar5 = piVar5 + uVar7 * 9 + 0x251;
    }
    else {
      piVar5 = (int *)0x0;
    }
    dVar9 = (double)(float)piVar5[5];
    dVar8 = (double)(float)piVar5[6];
    uVar4 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82744378(uVar4,*(unsigned int *)(param_1 + 0x18));
    }
    dVar10 = lbl_82005730;
    dVar8 = (double)fn_82F68918(dVar8 + lbl_82005730);
    dStack_50 = (double)fn_82F68918(dVar9 + dVar10);
    dStack_50 = dStack_50 * lbl_82005720;
    dStack_48 = dVar8 * lbl_82005720;
    fn_82743888(uVar4,*(unsigned int *)(param_1 + 0x18),&dStack_50);
    fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar4);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_826824B0(uVar4);
    }
  }
  return;
}

