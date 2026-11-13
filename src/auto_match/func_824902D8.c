extern int fn_8248F890();
extern int fn_82491018();
extern int fn_82494B00();
extern int fn_82496D88();
extern int iRam83276734;
extern unsigned int lbl_821BED3C;
extern unsigned int lbl_821BED84;
extern unsigned int lbl_821BEDCC;
extern unsigned int lbl_821BEE14;
extern unsigned int lbl_821BEE74;


int fn_824902D8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned __int64 param_5)

{
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned int *apuStack_50 [20];
  
  iVar2 = fn_8248F890(0x6c);
  if (iVar2 == 0) {
    iRam83276734 = 0;
  }
  else {
    iRam83276734 = fn_82491018();
  }
  apuStack_50[0] = (unsigned int *)fn_8248F890(0x18);
  if (apuStack_50[0] == (unsigned int *)0x0) {
    apuStack_50[0] = (unsigned int *)0x0;
  }
  else {
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
    apuStack_50[0][3] = 0;
    apuStack_50[0][5] = param_3;
    *apuStack_50[0] = &lbl_821BEE74;
  }
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  apuStack_50[0] = (unsigned int *)fn_8248F890(0x18);
  if (apuStack_50[0] == (unsigned int *)0x0) {
    apuStack_50[0] = (unsigned int *)0x0;
  }
  else {
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
    apuStack_50[0][3] = 0;
    apuStack_50[0][5] = param_1;
    *apuStack_50[0] = &lbl_821BED3C;
  }
  iVar2 = iRam83276734 + 0x20;
  *(unsigned int **)(iRam83276734 + 0x30) = apuStack_50[0];
  fn_82494B00(iVar2,apuStack_50);
  apuStack_50[0] = (unsigned int *)fn_8248F890(0x18);
  if (apuStack_50[0] == (unsigned int *)0x0) {
    apuStack_50[0] = (unsigned int *)0x0;
  }
  else {
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
    apuStack_50[0][3] = 0;
    apuStack_50[0][5] = param_2;
    *apuStack_50[0] = &lbl_821BEDCC;
  }
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  puVar3 = (unsigned int *)fn_8248F890(0x18);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = (int)param_5;
    *puVar3 = &lbl_821BED84;
    if ((param_5 & 0xffffffff) != 0) {
      uVar1 = fn_8248F890(0x5c);
      if ((uVar1 & 0xffffffff) == 0) {
        apuStack_50[0] = (unsigned int *)0x0;
      }
      else {
        apuStack_50[0] = (unsigned int *)fn_82496D88(uVar1,param_5);
      }
      fn_82494B00(puVar3 + 1,apuStack_50);
    }
  }
  apuStack_50[0] = puVar3;
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  puVar3 = (unsigned int *)fn_8248F890(0x18);
  apuStack_50[0] = (unsigned int *)0x0;
  if (puVar3 != (unsigned int *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = param_4;
    *puVar3 = &lbl_821BEE14;
    apuStack_50[0] = puVar3;
  }
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  return iRam83276734;
}

