extern int fn_825010E8();
extern int fn_8265C9E0();
extern int fn_828EB518();
extern int fn_82A81B88();
extern int fn_82F50D88();
extern int fn_82F51A50();
extern int fn_82F51EF0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265988;


unsigned __int64 fn_82500A58(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  
  *(unsigned int *)(param_1 + 0xffc) = *(unsigned int *)(param_2 + 0x5d8);
  *(unsigned __int64 *)(param_1 + 0xf58) = 0;
  *(unsigned __int64 *)(param_1 + 0xf60) = 0;
  *(unsigned __int64 *)(param_1 + 0xf68) = 0;
  *(unsigned int *)(param_1 + 0xf70) = 0;
  if (*(int *)(param_2 + 0xd4) != 0) goto LAB_82500b4c;
  iVar3 = *(int *)(param_2 + 0x5bc);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff831c2a10;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        if (*(int *)(param_2 + 0x5dc) < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = lbl_83265988;
          if (*(int *)(param_2 + 0x5dc) != 0xff) {
            iVar3 = fn_828EB518();
          }
        }
        if (iVar3 != 0) {
          uVar1 = *(unsigned int *)(param_2 + 0x5dc);
          *(unsigned char *)(param_1 + 0xb69) = 1;
          *(unsigned int *)(param_1 + 0xb6c) = uVar1;
          goto LAB_82500b4c;
        }
      }
      else if (iVar3 != 4) {
        uVar4 = 0xffffffff831c2240;
        goto LAB_82500b44;
      }
      fn_82A81B88(3,1,param_1 + 0xb70,param_1 + 0xf58);
      *(unsigned char *)(param_1 + 0xb6a) = 1;
      *(unsigned char *)(param_1 + 0xb69) = 1;
      goto LAB_82500b4c;
    }
    uVar4 = 0xffffffff831c2628;
  }
LAB_82500b44:
  fn_825010E8(param_1,uVar4);
LAB_82500b4c:
  *(unsigned int *)(param_1 + 0xff4) = *(unsigned int *)(param_2 + 0x5bc);
  *(char *)(param_1 + 0xff8) = '\x01' - (*(int *)(param_2 + 0x5d4) == 0);
  *(unsigned int *)(param_1 + 0xfec) = *(unsigned int *)(param_2 + 0x5c0);
  uVar2 = fn_8265C9E0(8);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82F51A50(uVar2,0);
  }
  *(int *)(param_1 + 0xb60) = (int)uVar4;
  fn_82F51EF0(uVar4,*(int *)(param_2 + 0x5c4) != 0);
  fn_82F50D88((double)lbl_821CA460,(double)lbl_821CA460,*(unsigned int *)(param_1 + 0xb60));
  *(unsigned char *)(param_1 + 0x1000) = 1;
  return 1;
}

