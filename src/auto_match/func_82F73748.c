typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82F72B00();
extern int fn_82F72BA8();
extern int fn_82F72DD0();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F78540();
extern unsigned int *lbl_832635B4;
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned int * fn_82F73748(unsigned int *param_1)

{
  unsigned int uVar1;
  bool bVar2;
  char *pcVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned char auStack_48 [8];
  unsigned char auStack_40 [64];
  
  *(unsigned char *)(param_1 + 1) = 0;
  bVar2 = true;
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = uVar1 & 0xff00ffff;
  while( true ) {
    if ((uVar1 & 0xff000000) != 0) {
      return param_1;
    }
    if (*lbl_832635C0 == '@') {
      return param_1;
    }
    if (*lbl_832635C0 == 'Z') {
      return param_1;
    }
    if (bVar2) {
      bVar2 = false;
    }
    else {
      fn_82F735D8(param_1,0x2c);
    }
    pcVar3 = lbl_832635C0;
    if ((__int64)*lbl_832635C0 == 0) break;
    lVar5 = (__int64)*lbl_832635C0 + -0x30;
    if ((lVar5 < 0) || (9 < (int)lVar5)) {
      stack_pair_50.first = 0;
      stack_pair_50.second = stack_pair_50.second & 0xffff;
      fn_82F78540(auStack_48,&stack_pair_50.first);
      if ((1 < (int)lbl_832635C0 - (int)pcVar3) && (*lbl_832635B4 != 9)) {
        fn_82F72B00(lbl_832635B4,auStack_48);
      }
      fn_82F73228(param_1,auStack_48);
      if (lbl_832635C0 == pcVar3) {
        *(unsigned char *)((int)param_1 + 5) = 0;
        *param_1 = 0;
        *(unsigned char *)(param_1 + 1) = 2;
      }
    }
    else {
      lbl_832635C0 = lbl_832635C0 + 1;
      uVar4 = fn_82F72BA8(auStack_40,lbl_832635B4);
      fn_82F73228(param_1,uVar4);
    }
    uVar1 = param_1[1];
  }
  fn_82F72DD0(param_1,1);
  return param_1;
}

