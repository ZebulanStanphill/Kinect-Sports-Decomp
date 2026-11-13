#define true 1
extern int fn_829EC6F8();
extern int fn_829EDF18();
extern unsigned int lbl_82002D08;


unsigned __int64
fn_829EDF88(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int *param_4,float *param_5,
             unsigned int param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  double dVar5;
  __int64 alStack_40;
  
  if (param_4 != (unsigned int *)0x0) {
    uVar4 = 0;
    if ((*(int *)(param_1 + 8) != 0) && (*(short *)(param_1 + 0x14) != 0)) {
      uVar4 = (unsigned int)**(unsigned short **)(param_1 + 0x2c);
    }
    if (param_3 == uVar4) {
      iVar1 = fn_829EDF18(param_1,param_2,&alStack_40);
      *param_4 = ((unsigned int)((unsigned __int64)(alStack_40) >> 32));
      if ((iVar1 != 0) && (param_5 != (float *)0x0)) {
        uVar4 = 0;
        iVar1 = iVar1 - (int)param_5;
        dVar5 = (double)lbl_82002D08;
        while( true ) {
          uVar2 = fn_829EC6F8(param_1);
          uVar3 = param_6;
          if (uVar2 <= param_6) {
            uVar3 = fn_829EC6F8(param_1);
          }
          if (uVar3 <= uVar4) break;
          if (uVar4 < param_6) {
            alStack_40 = (__int64)*(int *)(iVar1 + (int)param_5);
            *param_5 = (float)((double)alStack_40 * dVar5);
          }
          uVar4 = uVar4 + 1;
          param_5 = param_5 + 1;
        }
      }
      return 0;
    }
  }
  return 0xffffffff80070057;
}

