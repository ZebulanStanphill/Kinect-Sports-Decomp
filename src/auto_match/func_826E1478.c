#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT24(h,l) ((unsigned __int64)((((unsigned short)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82687270();
extern int fn_826A9280();
extern int fn_826DC448();
extern int fn_826DF728();
extern int fn_826DF7B8();
extern int fn_826DFAA8();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E8FF0();
extern unsigned int iStack_48;
extern float lbl_82005718;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_50;


void fn_826E1478(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned short uVar3;
  char cVar5;
  unsigned __int64 uVar4;
  unsigned char *puVar6;
  int iVar7;
  int *piVar8;
  unsigned __int64 uStack_50;
  struct { int first; unsigned int second; } stack_pair_48;

  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  float fStack_34;

  iVar7 = *(int *)(param_1 + 0x314);
  if (iVar7 == 0) {
    iVar7 = param_1 + 0x28;
  }
  stack_pair_40.first = lbl_821AAD20;
  stack_pair_40.second = lbl_821AAD20;
  fStack_38 = lbl_821AAD20;
  fStack_34 = lbl_821AAD20;
  *(unsigned char *)(iVar7 + 0x15) = 0;
  if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
    fn_826E7800(iVar7,2);
  }
  puVar6 = (unsigned char *)(*(int *)(iVar7 + 0x3c) + *(int *)(iVar7 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
  uVar3 = CONCAT11(uVar1,uVar2);
  fn_826E8FF0(iVar7,&stack_pair_40.first);
  cVar5 = fn_826E7438(iVar7);
  if (cVar5 != '\0') {
    uStack_50 = (unsigned __int64)(int)stack_pair_40.first;
    fn_826A9280(param_1 + 0x14,0xffffffff8200cf74,uVar3,(int)stack_pair_40.first,(int)stack_pair_40.second,
                      (int)fStack_38,(int)fStack_34);
  }
  if (stack_pair_40.first < fStack_38) {
    if (stack_pair_40.second < fStack_34) {
      uStack_50 = (unsigned __int64)CONCAT24(uVar3,(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF));
      stack_pair_48.first = 0;
      stack_pair_48.second = 0;
      cVar5 = fn_826DC448(*(unsigned int *)(param_1 + 0x20),&stack_pair_48.first,&uStack_50);
      if (cVar5 != '\0') {
        piVar8 = (int *)(-(unsigned int)(stack_pair_48.first == 0) & stack_pair_48.second);
        if (piVar8 != (int *)0x0) {
          uVar4 = (**(int (***)())(*piVar8 + 8))(piVar8);
          if ((uVar4 & 0xff00) == 0x8400) {
            fn_826DF728(piVar8,&stack_pair_40.first);
          }
          else {
            uVar4 = (**(int (***)())(*piVar8 + 8))(piVar8);
            if ((uVar4 & 0xff00) == 0x8100) {
              fn_826DF7B8(piVar8,&stack_pair_40.first);
            }
          }
        }
      }
      if ((stack_pair_48.first == 0) && (stack_pair_48.second != 0)) {
        fn_82687270();
      }
    }
    else {
      fn_826DFAA8(param_1 + 0x14,0xffffffff8200cf2c,
                    (double)((fStack_34 - stack_pair_40.second) * lbl_82005718));
    }
  }
  else {
    fn_826DFAA8(param_1 + 0x14,0xffffffff8200cf50,(double)((fStack_38 - stack_pair_40.first) * lbl_82005718)
                 );
  }
  return;
}
