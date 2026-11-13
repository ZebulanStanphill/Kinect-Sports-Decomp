extern int fn_82FA5060();
extern int fn_83029CF0();
extern unsigned int lbl_831BC768;


unsigned __int64
fn_8302A0B0(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned char param_5,
             unsigned int *param_6)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  
  uVar1 = 2;
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 8) = param_2;
    *(unsigned int *)(param_1 + 0x1c) = param_4;
    *(unsigned char *)(param_1 + 0x21) = param_5;
    *(short *)(param_1 + 0x16) = (short)param_3;
    if (param_6[1] == 0) {
      *(int *)(param_1 + 0x10) = param_2;
      *(unsigned short *)(param_1 + 0x14) = 0;
      iVar2 = fn_82FA5060(lbl_831BC768,param_3);
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        uVar4 = 0;
        if (*(short *)(param_1 + 0x16) != 0) {
          puVar3 = (unsigned char *)(iVar2 + -1);
          do {
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = 0;
          } while (uVar4 < *(unsigned short *)(param_1 + 0x16));
        }
        if ((param_4 & 1) != 0) {
          fn_83029CF0(param_1);
        }
        uVar1 = 1;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0xc) = param_6[1];
      uVar1 = 1;
      uVar4 = *param_6;
      *(short *)(param_1 + 0x14) = (short)uVar4;
      *(unsigned int *)(param_1 + 0x10) = (uVar4 & 0xffff) * 0x10 + param_2;
    }
  }
  return uVar1;
}

