extern unsigned int *auStack_30;
extern int fn_822B7900();
extern int fn_8235A3B8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern int atexit();
extern unsigned int lbl_83298F5C;


unsigned __int64 fn_822C3D90(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int auStack_30 [1];
  
  iVar5 = 0;
  uVar3 = fn_8251F720(param_2,0);
  if (uVar3 != 0) {
    uVar4 = fn_8251FBA8(uVar3);
    iVar5 = fn_8265CA60();
    fn_82A1DD38(iVar5,uVar3,uVar4);
  }
  *(unsigned int **)(iVar5 + 0x24) = auStack_30;
  uVar2 = lbl_83298F5C;
  auStack_30[0] = *(unsigned int *)(param_1 + 0x114);
  uVar1 = lbl_83298F5C & 1;
  *(unsigned int *)(*(int *)(iVar5 + 0x24) + 4) =
       *(unsigned int *)
        (*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 + **(int **)(param_1 + 0x1c)) + 0x48);
  if (uVar1 == 0) {
    lbl_83298F5C = uVar2 | 1;
    fn_8235A3B8();
    atexit(0xffffffff8313caf8);
  }
  uVar4 = fn_822B7900(0xffffffff83298ef8,iVar5);
  fn_8265CAA0(iVar5);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8251FA58(uVar3);
  }
  return uVar4;
}

