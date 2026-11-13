extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82407968();
extern int fn_82458910();
extern int fn_824589D0();
extern int fn_828EA5F8();
extern unsigned int iStack_5c;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_60;


void fn_824077C8(int param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  struct { unsigned int first; int second; } stack_pair_60;

  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 1) {
    cVar4 = '\x03';
  }
  else if (iVar1 == 2) {
    cVar4 = '\x02';
  }
  else if (iVar1 == 3) {
    cVar4 = '\x01';
  }
  else if (iVar1 == 5) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (iVar1 != 6) + '\x04';
  }
  dVar5 = (double)*(float *)(param_1 + 0xf0);
  uVar2 = *(unsigned int *)(param_1 + 0x38);
  if (lbl_832975B0 == 0) {
    fn_82250A18();
  }
  fn_82407968(cVar4,uVar2,param_3,param_4,param_5);
  if ((*(int *)(param_3 + 0x24) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_3 + 0x24) + 0x34), iVar1 != 0)) {
    cVar3 = fn_828EA5F8(iVar1);
    if (cVar3 != '\0') {
      fn_82458910(&stack_pair_60.first,param_2,*(unsigned int *)(param_3 + 0x2c));
      fn_824589D0(dVar5,iVar1,stack_pair_60.first,cVar4);
      if (stack_pair_60.second != 0) {
        fn_822315A0();
      }
    }
  }
  if (((*(int *)(param_4 + 0x24) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_4 + 0x24) + 0x34), iVar1 != 0)) &&
     (cVar3 = fn_828EA5F8(iVar1), cVar3 != '\0')) {
    fn_82458910(&stack_pair_60.first,param_2,*(unsigned int *)(param_4 + 0x2c));
    fn_824589D0(dVar5,iVar1,stack_pair_60.first,cVar4);
    if (stack_pair_60.second != 0) {
      fn_822315A0();
    }
  }
  return;
}

