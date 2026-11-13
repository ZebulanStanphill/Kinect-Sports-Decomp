extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263C7F0();
extern int fn_8263E9F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


void fn_824F5BF8(double param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  
  iVar1 = lbl_8320A898;
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (*(char *)(param_2 + 0x19) == '\0') {
      return;
    }
    if (param_1 < (double)(*(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x20))) {
      *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
      *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
      iVar1 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
      *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
      fn_82631920(lbl_8320A898,*(unsigned int *)(param_2 + 0xc));
                    /* WARNING: Subroutine does not return */
      fn_82631578(lbl_8320A898,*(unsigned int *)(param_2 + 0x10));
    }
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar2 = fn_8263C7F0(lbl_8326B430,lbl_8326B434,1,1,0,0x18280186,0,3);
      *(unsigned int *)(param_2 + 0x14) = uVar2;
    }
    fn_8263E9F0((double)lbl_821CA460,lbl_8320A898,0,0,0,0,*(unsigned int *)(param_2 + 0x14),0,0)
    ;
    uVar3 = 1;
    *(unsigned char *)(param_2 + 0x18) = 0;
  }
  *(unsigned char *)(param_2 + 0x19) = uVar3;
  return;
}

