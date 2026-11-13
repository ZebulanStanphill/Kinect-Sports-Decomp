extern int fn_823AB470();
extern int fn_8251B258();
extern int fn_828AD0F8();
extern int fn_828AD270();
extern int fn_828AD488();
extern int fn_828AD588();
extern int fn_828EA820();
extern unsigned int lbl_83265988;
extern unsigned int uStack_2e;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;


void fn_8251B0F0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  char cVar6;
  int iVar5;
  unsigned __int64 uVar7;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char uStack_2e;
  
  iVar5 = lbl_83265988;
  if (lbl_83265988 == 0) {
    if (*(int *)(param_1 + 0x50) != 2) {
      *(unsigned int *)(param_1 + 0xc) = 1;
      *(unsigned int *)(param_1 + 0x54) = 2;
    }
  }
  else {
    uVar4 = fn_828EA820(lbl_83265988);
    fn_8251B258(param_1);
    cVar6 = fn_828AD0F8(*(unsigned int *)(*(int *)(param_1 + 4) + 8));
    if (cVar6 == '\0') {
      cVar6 = fn_828AD488(*(unsigned int *)(*(int *)(param_1 + 4) + 8));
      if (cVar6 != '\0') {
        uVar1 = *(unsigned int *)(param_1 + 0x38);
        uVar2 = *(unsigned int *)(param_1 + 0x34);
        uVar3 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
        uVar4 = fn_828EA820(iVar5);
        fn_828AD588(uVar3,uVar4,1,uVar2,uVar1,0,0);
      }
    }
    else {
      iVar5 = fn_823AB470(iVar5);
      if (iVar5 == 2) {
        uVar7 = *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x10);
        uStack_2e = (unsigned char)((unsigned __int64)uVar7 >> 0x28);
        uStack_2f = (unsigned char)((unsigned __int64)uVar7 >> 0x30);
        uStack_30 = (unsigned char)((unsigned __int64)uVar7 >> 0x38);
        fn_828AD270(*(unsigned int *)(*(int *)(param_1 + 4) + 8),uVar4,1,0,1,uStack_30,uStack_2f
                          ,uStack_2e);
      }
      else if (*(int *)(param_1 + 0x50) != 2) {
        *(unsigned int *)(param_1 + 0xc) = 2;
        *(unsigned int *)(param_1 + 0x54) = 2;
      }
    }
  }
  return;
}

