extern int fn_82520780();
extern int fn_82569980();
extern int fn_82573530();
extern int fn_825764F0();


void fn_826104E8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  __int64 lVar2;
  
  if ((param_5 == 0) || (param_5 == 3)) {
    iVar1 = fn_82520780((double)*(float *)(param_3 + 0x58),0xffffffff83265a28);
    if (iVar1 != 0) {
      if ((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_1 + 0xdc), iVar1 == 0)) {
        iVar1 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x14));
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
        }
      }
      if (iVar1 != 0) {
        if ((*(int *)(**(int **)(param_1 + 0x60) + 0x93c) != 0) &&
           ((unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0) != 0)) {
          lVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0) + 0x128;
          for (iVar1 = fn_82573530(lVar2,param_3 + 0x15); iVar1 != 0;
              iVar1 = fn_825764F0(lVar2,param_3 + 0x15,iVar1)) {
            (**(int (***)())(**(int **)(iVar1 + 0x1b0) + 8))(*(int **)(iVar1 + 0x1b0),0,0);
          }
        }
      }
    }
  }
  return;
}

