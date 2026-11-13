extern unsigned int *auStack_140;
extern unsigned int *auStack_240;
extern int fn_828358A8();
extern int fn_828358F8();
extern int fn_828359F8();
extern int fn_828369A8();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82836B70(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,char param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_240 [256];
  unsigned char auStack_140 [320];
  
  lVar1 = fn_828358F8(param_1,param_3);
  auStack_240[0] = 0;
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_240,param_5);
  }
  uVar2 = fn_828358A8(param_1);
  cVar3 = fn_828369A8(param_1,lVar1 + param_4,auStack_140);
  if (cVar3 == '\0') {
    if ((int)param_7 < 0) {
      uVar4 = 0xffffffff8201f460;
    }
    else {
      uVar4 = 0xffffffff8201f458;
      uVar2 = param_7;
    }
    fn_82F64020(auStack_240,0x100,uVar4,auStack_240,uVar2);
    fn_82F6D000(param_2,0xffffffff8201f468,auStack_240);
    (**(int (***)())(**(int **)(param_1 + 8) + 4))
              (*(int **)(param_1 + 8),param_2,param_1,lVar1 + param_4,param_5,1,0xffffffffffffffff);
  }
  else {
    fn_82F64020(auStack_240,0x100,0xffffffff8201f44c,auStack_240,auStack_140);
    fn_82F6D000(param_2,0xffffffff8201f454,auStack_240);
  }
  return;
}

