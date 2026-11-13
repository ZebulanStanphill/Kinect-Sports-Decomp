extern unsigned int *auStack_140;
extern int fn_828358A8();
extern int fn_828358F8();
extern int fn_828359F8();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82835D48(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5,char param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned char auStack_140 [320];
  
  lVar1 = fn_828358F8(param_1,param_3);
  auStack_140[0] = 0;
  uVar2 = fn_828358A8(param_1);
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_140,param_5);
  }
  if ((int)param_7 < 0) {
    uVar3 = 0xffffffff8201f2e0;
  }
  else {
    uVar3 = 0xffffffff8201f2d8;
    uVar2 = param_7;
  }
  fn_82F64020(auStack_140,0x100,uVar3,auStack_140,uVar2);
  fn_82F6D000(param_2,0xffffffff8201f2e8,auStack_140);
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 != (int *)0x0) {
    do {
      (**(int (***)())(*piVar4 + 4))
                (piVar4,param_2,param_1,lVar1 + param_4,param_5 + 1,0,0xffffffffffffffff);
      piVar4 = (int *)piVar4[3];
    } while (piVar4 != (int *)0x0);
  }
  return;
}

