extern int fn_8265D8A0();
extern int fn_8265DAB8();
extern int fn_8265DEE8();
extern int fn_8265E080();
extern int fn_82663D38();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_10;


unsigned char fn_8265DC30(int param_1,unsigned int param_2,char param_3)

{
  unsigned int uVar1;
  int iStack00000014;
  unsigned int uStack0000001c;
  char cStack00000027;
  unsigned int uStack_10;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  cStack00000027 = param_3;
  uVar1 = fn_82663D38(param_1);
  if (uVar1 < uStack0000001c) {
    fn_8265E080(iStack00000014);
  }
  if (*(unsigned int *)(iStack00000014 + 0x14) < uStack0000001c) {
    fn_8265DEE8(iStack00000014,uStack0000001c,*(unsigned int *)(iStack00000014 + 0x10));
  }
  else if ((cStack00000027 == '\0') || (0xf < uStack0000001c)) {
    if (uStack0000001c == 0) {
      fn_8265DAB8(iStack00000014,0);
    }
  }
  else {
    if (uStack0000001c < *(unsigned int *)(iStack00000014 + 0x10)) {
      uStack_10 = uStack0000001c;
    }
    else {
      uStack_10 = *(unsigned int *)(iStack00000014 + 0x10);
    }
    fn_8265D8A0(iStack00000014,1,uStack_10);
  }
  return -(uStack0000001c != 0) & 1;
}

