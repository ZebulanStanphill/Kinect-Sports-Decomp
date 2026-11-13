extern int fn_82359420();
extern int fn_8239FF60();
extern int fn_823A6168();
extern int fn_823A6490();
extern int fn_823A65E0();
extern int fn_823A67E8();
extern int fn_82508078();
extern unsigned int lbl_821922D0;


void fn_823A6040(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  double dVar3;
  
  fn_823A6168();
  piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x2e0);
  uVar2 = piVar1[0x27];
  if (uVar2 == 0) {
    if (*(int *)(param_2 + 0x20) == 0) {
      dVar3 = (double)(**(int (***)())(*piVar1 + 0xa0))(piVar1);
      if ((double)lbl_821922D0 < dVar3) {
        fn_8239FF60(*(unsigned int *)(*(int *)(param_2 + 8) + 0x2dc),0x1b);
      }
      fn_82508078(*(unsigned int *)(*(int *)(param_2 + 8) + 0xa4),0xffffffff821b4f84,0);
    }
    *(unsigned int *)(param_2 + 0x20) = 1;
  }
  else {
    *(unsigned int *)(param_2 + 0x20) = 0;
    if (piVar1[0x28] + 1U < uVar2) {
      fn_82508078(*(unsigned int *)(*(int *)(param_2 + 8) + 0xa4),0xffffffff821b4f64,0);
    }
  }
  if (piVar1[0x1a] != 0) {
    fn_82359420(param_1,*(int *)(param_2 + 8),
                      (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 8) + 0x174) + 0x84c);
  }
  fn_823A6490(param_2);
  fn_823A65E0(param_2);
  fn_823A67E8(param_1,param_2);
  return;
}

