extern int fn_82520780();
extern int fn_82569980();
extern int fn_82573530();
extern int fn_825764F0();
extern unsigned int lbl_821CA460;


void fn_826103B0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  double dVar4;
  
  if (param_5 == 0) {
    iVar2 = fn_82520780((double)*(float *)(param_3 + 0x58),0xffffffff83265a28);
    if (iVar2 != 0) {
      if ((*(int *)(param_3 + 0x10) == 0) || (iVar2 = *(int *)(param_1 + 0xdc), iVar2 == 0)) {
        iVar2 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x14));
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
        }
      }
      if (iVar2 != 0) {
        if ((*(int *)(**(int **)(param_1 + 0x60) + 0x93c) != 0) &&
           ((unsigned __int64)*(unsigned int *)(iVar2 + 0x8c0) != 0)) {
          lVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x8c0) + 0x128;
          iVar2 = fn_82573530(lVar3,param_3 + 0x15);
          if (iVar2 != 0) {
            dVar4 = (double)lbl_821CA460;
            do {
              piVar1 = *(int **)(iVar2 + 0x1b0);
              (**(int (***)())(*piVar1 + 8))(piVar1,5,0);
              if ((double)*(float *)(param_3 + 0x5c) != dVar4) {
                (**(int (***)())(*piVar1 + 8))(piVar1,0x15,*(unsigned int *)(param_3 + 0x5c));
              }
              iVar2 = fn_825764F0(lVar3,param_3 + 0x15,iVar2);
            } while (iVar2 != 0);
          }
        }
      }
    }
  }
  return;
}

