typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8232C528();
extern int fn_82520780();


void fn_8232D7A8(int param_1,unsigned int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_2 < 3) || ((5 < param_2 && (param_2 == 6)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(float *)(param_1 + 0x44) =
       ((*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x1c)) /
       *(float *)(*(int *)(param_1 + 8) + 0x4e0)) * *(float *)(*(int *)(param_1 + 8) + 0x4e8) +
       *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x44);
  if ((*(int *)(*(int *)(param_1 + 0xc) + 8) == 2) &&
     (iVar3 = fn_82520780(0xffffffff83265a28), iVar3 != 0)) {
    piVar1 = *(int **)(param_1 + 0xc);
    iVar3 = piVar1[2];
    piVar1[2] = (unsigned int)!bVar2;
    (**(int (***)())(*piVar1 + 0x14))(piVar1,iVar3);
    fn_8232C528(*(unsigned int *)(param_1 + 0xc),1);
  }
  return;
}

