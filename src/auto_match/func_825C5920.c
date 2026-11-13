extern unsigned int *auStack_e0;
extern int fn_825443D8();
extern int fn_82544718();
extern int fn_825C5F68();
extern int fn_8262FE50();
extern int fn_82631578();
extern unsigned int lbl_8320A898;
extern unsigned int uStack00000024;
extern unsigned int uStack_11c;
extern unsigned int uStack_124;


void fn_825C5920(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  char cVar2;
  unsigned int uStack00000024;
  unsigned int uStack_124;
  unsigned int uStack_11c;
  unsigned char auStack_e0 [224];
  
  uStack00000024 = (unsigned int)param_3;
  if (*(int *)(param_1 + 8) != 0) {
    cVar2 = fn_825C5F68(param_1,param_3);
    if (cVar2 != '\0') {
      uStack_11c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3224);
      uStack_124 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220);
      fn_825443D8(param_3);
      fn_82544718(auStack_e0,uStack_124,uStack_11c,0x18280186,0,0);
      if (*(int *)(lbl_8320A898 + 0x3148) != 0) {
        fn_8262FE50();
      }
      iVar1 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
      *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
                    /* WARNING: Subroutine does not return */
      fn_82631578(lbl_8320A898,*(unsigned int *)(param_1 + 0x14));
    }
  }
  return;
}

