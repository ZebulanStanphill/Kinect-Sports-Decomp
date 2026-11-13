#define true 1
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8248E2C0();


void fn_8248F390(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [88];
  
  uVar6 = param_2;
  while( true ) {
    uVar7 = (uVar6 + 1 & 0x7fffffff) * 2;
    if ((int)param_3 <= (int)uVar7) break;
    lVar5 = (uVar7 & 0x1fffffff) * 8 + param_1;
    uVar1 = fn_82365BD8(auStack_60,lVar5 + -8);
    uVar2 = fn_82365BD8(auStack_58,lVar5);
    cVar3 = fn_8248E2C0(uVar2,uVar1);
    if (cVar3 != '\0') {
      uVar7 = uVar7 - 1;
    }
    fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,(uVar7 & 0x1fffffff) * 8 + param_1);
    uVar6 = uVar7;
  }
  if ((int)uVar7 == (int)param_3) {
    fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,(param_3 & 0x1fffffff) * 8 + param_1 + -8);
    uVar6 = param_3 - 1;
  }
  while( true ) {
    uVar4 = (int)uVar6 - 1;
    uVar7 = (__int64)((int)uVar4 >> 1) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    if ((int)uVar6 <= (int)param_2) break;
    lVar5 = (uVar7 & 0x1fffffff) * 8 + param_1;
    uVar1 = fn_82365BD8(auStack_58,param_4);
    uVar2 = fn_82365BD8(auStack_60,lVar5);
    cVar3 = fn_8248E2C0(uVar2,uVar1);
    if (cVar3 == '\0') break;
    fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,lVar5);
    uVar6 = uVar7;
  }
  fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,param_4);
  return;
}

