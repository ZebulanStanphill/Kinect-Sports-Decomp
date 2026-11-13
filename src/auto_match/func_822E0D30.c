extern int fn_822315A0();
extern int fn_824D68B0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CD618;


unsigned __int64
fn_822E0D30(int param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5,
             unsigned int *param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x24);
  uVar3 = 0xffffffff831cd5f8;
  if (param_4 == 0) {
    uVar3 = 0xffffffff831cd608;
  }
  dVar4 = (double)lbl_821CA460;
  iVar1 = fn_824D68B0((double)lbl_831CD618,dVar4,uVar2,param_3,1,param_4,uVar3);
  if (iVar1 == 0) {
    if (((int)param_3 == 1) ||
       (iVar1 = fn_824D68B0((double)lbl_831CD618,dVar4,uVar2,param_3,0), iVar1 == 0)) {
      if (*(int *)(param_2 + 4) != 0) {
        fn_822315A0();
      }
      return 0;
    }
    uVar2 = 0;
    *param_6 = 2;
  }
  else {
    uVar2 = 1;
    *param_6 = 1;
  }
  iVar1 = *(int *)(param_2 + 4);
  *param_5 = uVar2;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return 1;
}

