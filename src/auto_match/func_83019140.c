#define true 1
extern int fn_82FA5190();
extern int fn_83018220();
extern int fn_83018BC0();
extern int fn_830195D8();
extern int fn_83019D98();
extern unsigned int lbl_831BC768;


unsigned __int64
fn_83019140(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5
             )

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  int iVar6;
  
  iVar6 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar6);
  puVar5 = *(unsigned int **)(param_1 + 0x6e0);
  while( true ) {
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)fn_83019D98(param_1 + 0x6e0);
      if (puVar5 == (unsigned int *)0x0) {
        uVar4 = 2;
      }
      else {
        *puVar5 = (int)param_2;
        puVar5[1] = param_3;
        uVar4 = fn_830195D8(puVar5 + 2,param_4,param_5,0);
        uVar1 = lbl_831BC768;
        if ((int)uVar4 == 1) {
          puVar5[10] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0xffffffff;
          puVar5[0xb] = 0;
          puVar5[0xc] = uVar1;
          puVar5[7] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
        }
        else {
          fn_83018BC0(param_1,param_2);
        }
      }
      puVar5 = *(unsigned int **)(param_1 + 0x6c0);
      puVar3 = (unsigned int *)0x0;
      while (puVar2 = puVar5, puVar2 != (unsigned int *)0x0) {
        if ((unsigned __int64)(unsigned int)puVar2[2] == (param_2 & 0xffffffff)) {
          puVar5 = (unsigned int *)*puVar2;
          uVar1 = puVar2[1];
          if (puVar2 == *(unsigned int **)(param_1 + 0x6c0)) {
            *(unsigned int **)(param_1 + 0x6c0) = puVar5;
          }
          else {
            *puVar3 = puVar5;
          }
          if (puVar2 == *(unsigned int **)(param_1 + 0x6c4)) {
            *(unsigned int **)(param_1 + 0x6c4) = puVar3;
          }
          *puVar2 = *(unsigned int *)(param_1 + 0x6c8);
          *(unsigned int **)(param_1 + 0x6c8) = puVar2;
          *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x6d4) + -1;
          fn_83018220(param_1,uVar1,param_2,0);
        }
        else {
          puVar5 = (unsigned int *)*puVar2;
          puVar3 = puVar2;
        }
      }
      RtlLeaveCriticalSection(iVar6);
      return uVar4;
    }
    if ((unsigned __int64)(unsigned int)puVar5[1] == (param_2 & 0xffffffff)) break;
    puVar5 = (unsigned int *)*puVar5;
  }
  puVar5[2] = param_3;
  if (puVar5[3] != 0) {
    fn_82FA5190(lbl_831BC768);
    puVar5[3] = 0;
  }
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar4 = fn_830195D8(puVar5 + 3,param_4,param_5,0);
  RtlLeaveCriticalSection(iVar6);
  return uVar4;
}

