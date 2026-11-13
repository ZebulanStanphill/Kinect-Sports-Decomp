extern int fn_8243CD40();
extern int fn_82586B60();
extern unsigned char fn_8288B760(void *);
extern unsigned char lbl_8327F87D;
extern unsigned int lbl_83296FF4;
extern unsigned int lbl_83281140;


unsigned __int64 fn_8251E608(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned char cVar3;
  
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0x88);
  uVar1 = fn_82586B60(param_2 + 2);
  *(unsigned int *)(param_1 + 8) = uVar1;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x94);
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(void **)(param_1 + 0x20) == 0) {
      cVar3 = *(int *)(param_1 + 0x24) != 0;
    }
    else {
      cVar3 = fn_8288B760(*(void **)(param_1 + 0x20));
    }
    if ((cVar3 != '\0') && (lbl_8327F87D != '\0')) {
      *(unsigned int *)(param_1 + 0x28) = 1;
      *(int *)(param_1 + 0x2c) = lbl_83281140;
      piVar2 = (int *)fn_8243CD40(&lbl_83296FF4,&lbl_83281140);
      *piVar2 = *piVar2 + 1;
      lbl_83281140 = lbl_83281140 + 1;
    }
  }
  return 1;
}

