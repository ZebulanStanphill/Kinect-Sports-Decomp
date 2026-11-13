#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8229E090();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();


extern char lbl_83292A0C[];
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
void fn_824A0FD0(int param_1)

{
  int bVar1;
  unsigned int uVar2;
  int lVar3;
  unsigned int *piVar4;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [48];
  
  bVar1 = false;
  piVar4 = (unsigned int *)(param_1 + 0xc);
  lVar3 = 2;
  do {
    if (*piVar4 != 0) {
      fn_8229E090(*piVar4,0,1);
      bVar1 = true;
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 2;
  } while (lVar3 != 0);
  if (bVar1) {
    fn_828648F0(auStack_50,lbl_83292A0C);
    uVar2 = fn_828647D8();
    auStack_60[0] = *(unsigned int *)(param_1 + 0x1c);
    auStack_60[0] = fn_82535298(auStack_60,uVar2,lbl_83296BC0,lbl_83296BD0);
    fn_82864898(auStack_50);
    fn_82536288(auStack_60);
  }
  return;
}

