extern int fn_82C3CE78();
extern int fn_82C3D138();
extern int fn_82C3D190();
extern int fn_82C3D240();
extern int fn_82C3D2A0();
extern int fn_82C3D4D0();
extern int fn_82C3D4E0();
extern int fn_82D7E470();


unsigned __int64 fn_82C3D830(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0xffffffff80500003;
  if (*(int *)(param_1 + 4) == 2) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 0x14);
    if ((((((((iVar2 == 0x57564331) || (iVar2 == 0x574d5641)) || (iVar2 == 0x574d5633)) ||
           ((iVar2 == 0x574d5632 || (iVar2 == 0x574d5631)))) ||
          ((iVar2 == 0x57565032 || ((iVar2 == 0x574d5650 || (iVar2 == 0x574d5652)))))) ||
         (iVar2 == 0x4d503453)) || ((iVar2 == 0x4d503433 || (iVar2 == 0x4d503432)))) &&
       ((*(int *)(iVar1 + 8) != 0 &&
        ((*(int *)(iVar1 + 0xc) != 0 && (*(short *)(iVar1 + 0x12) != 0)))))) {
      param_3[9] = param_3;
      *param_3 = fn_82C3D4E0;
      param_3[1] = fn_82C3D190;
      uVar3 = 0;
      param_3[8] = 0;
      param_3[2] = fn_82C3D240;
      param_3[3] = fn_82C3D2A0;
      param_3[4] = fn_82C3D138;
      param_3[5] = fn_82D7E470;
      param_3[6] = fn_82D7E470;
      param_3[7] = fn_82C3D4D0;
      param_3[10] = fn_82C3CE78;
    }
  }
  return uVar3;
}

