#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82508078();
extern float lbl_821954D4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82426B08(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  char *apcStack_18 [6];
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x1ac == 1) &&
     (*(int *)(*(int *)(iVar1 + 0x18) * 0x1ac + *(int *)(iVar1 + 8) + 4) != 0)) {
    apcStack_18[0] = "bowlerquickmatchenjoy";
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    apcStack_18[1] = "bowlerquickmatchpractise";
    apcStack_18[2] = "bowlerquickmatchpressure";
    if (*(int *)(param_1 + 4) != *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      return;
    }
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0xa4);
    uVar3 = ZEXT48(apcStack_18
                   [-(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                          lbl_821954D4)]);
  }
  else {
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      return;
    }
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0xa4);
    uVar3 = 0xffffffff821b8838;
  }
  fn_82508078(uVar2,uVar3,0);
  return;
}

