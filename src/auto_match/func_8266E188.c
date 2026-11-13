#define true 1
extern unsigned int *auStack_80;
extern int fn_8266CBF0();
extern int fn_8266CC70();
extern int fn_8266D440();
extern int fn_8266D5C0();
extern int fn_8266D668();
extern int fn_8266D840();
extern int fn_8266DCC0();
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_8266E188(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned char auStack_80 [128];
  
  iVar5 = param_4 + param_5;
  while( true ) {
    if (iVar5 == 2) {
      if (*(unsigned int *)(param_2 + 8) < *(unsigned int *)(param_1 + 8)) {
        fn_8266CC70(param_1,param_2);
      }
      return;
    }
    if (((int)param_4 <= (int)param_5) && (iVar5 = fn_8266CBF0(param_6), (int)param_4 <= iVar5))
    break;
    iVar5 = fn_8266CBF0(param_6);
    if ((int)param_5 <= iVar5) {
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
      uStack_90 = *(unsigned int *)(param_6 + 0x10);
      fn_8266D840(auStack_80,param_2,param_3,&uStack_a0);
      fn_8266D440(auStack_80);
      fn_8266D668(param_1,param_2,**(unsigned int **)(param_6 + 0x10),
                    (*(unsigned int **)(param_6 + 0x10))[1],param_3);
      return;
    }
    if ((int)param_5 < (int)param_4) {
      iVar2 = ((int)param_4 >> 1) + (unsigned int)((int)param_4 < 0 && (param_4 & 1) != 0);
      uVar6 = ((int)param_3 - param_2) / 0xc;
      iVar7 = iVar2 * 0xc + param_1;
      iVar4 = param_2;
      if (0 < (int)uVar6) {
        do {
          uVar3 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
          iVar5 = uVar3 * 0xc + iVar4;
          if (*(unsigned int *)(iVar5 + 8) < *(unsigned int *)(iVar7 + 8)) {
            iVar4 = iVar5 + 0xc;
            uVar3 = (uVar6 - uVar3) - 1;
          }
          uVar6 = uVar3;
        } while (0 < (int)uVar3);
      }
      iVar5 = (iVar4 - param_2) / 0xc;
    }
    else {
      iVar5 = ((int)param_5 >> 1) + (unsigned int)((int)param_5 < 0 && (param_5 & 1) != 0);
      uVar6 = (param_2 - param_1) / 0xc;
      iVar4 = iVar5 * 0xc + param_2;
      iVar7 = param_1;
      if (0 < (int)uVar6) {
        do {
          uVar3 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
          iVar2 = uVar3 * 0xc + iVar7;
          if (*(unsigned int *)(iVar2 + 8) <= *(unsigned int *)(iVar4 + 8)) {
            iVar7 = iVar2 + 0xc;
            uVar3 = (uVar6 - uVar3) - 1;
          }
          uVar6 = uVar3;
        } while (0 < (int)uVar3);
      }
      iVar2 = (iVar7 - param_1) / 0xc;
    }
    param_4 = param_4 - iVar2;
    iVar1 = fn_8266DCC0(iVar7,param_2,iVar4,param_4,iVar5,param_6);
    fn_8266E188(param_1,iVar7,iVar1,iVar2,iVar5,param_6);
    param_5 = param_5 - iVar5;
    iVar5 = param_4 + param_5;
    param_2 = iVar4;
    param_1 = iVar1;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
  uStack_90 = *(unsigned int *)(param_6 + 0x10);
  fn_8266D840(auStack_80,param_1,param_2,&uStack_a0);
  fn_8266D440(auStack_80);
  fn_8266D5C0(**(unsigned int **)(param_6 + 0x10),(*(unsigned int **)(param_6 + 0x10))[1],param_2,
                param_3,param_1);
  return;
}

