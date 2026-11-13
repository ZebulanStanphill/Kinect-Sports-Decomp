extern unsigned int *auStack_12f;
extern unsigned int *auStack_150;
extern int fn_822315A0();
extern int fn_82273CD8();
extern int fn_822746B8();
extern int fn_82359C18();
extern int fn_824A7FF8();
extern int fn_8251FA58();
extern int fn_8266F600();
extern int fn_8266F6B8();
extern int fn_82672660();
extern int fn_82F691F0();
extern unsigned int lbl_821A82B8;
extern unsigned int uStack_130;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;


void fn_82279AF0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_160;

  unsigned char *puStack_158;
  unsigned char auStack_150 [32];
  unsigned char uStack_130;
  unsigned char auStack_12f [287];
  
  *param_1 = &lbl_821A82B8;
  if (0 < (int)param_1[0x35]) {
    uVar2 = fn_8266F6B8();
    fn_8266F600(param_1[2],uVar2,auStack_150,0x20);
    stack_pair_160.first = 0;
    stack_pair_160.second = 0;
    fn_82273CD8(&stack_pair_160.first,4);
    puStack_158 = auStack_150;
    uStack_130 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_12f,0,0xff);
  }
  puVar3 = (unsigned int *)param_1[4];
  for (puVar1 = (unsigned int *)*puVar3; puVar1 != puVar3; puVar1 = (unsigned int *)*puVar1) {
    puVar3 = (unsigned int *)puVar1[2];
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
    puVar3 = (unsigned int *)param_1[4];
  }
  fn_82672660(param_1[2],param_1);
  if (param_1[8] != 0) {
    fn_8251FA58();
    param_1[8] = 0;
  }
  param_1[9] = 0;
  if (param_1[0x27] != 0) {
    fn_822746B8(param_1[0x27],param_1[0x3b]);
    param_1[0x27] = 0;
  }
  fn_82359C18(param_1 + 0x44);
  fn_824A7FF8(param_1 + 4);
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  return;
}

