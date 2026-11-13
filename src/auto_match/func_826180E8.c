extern unsigned int *auStack_80;
extern int fn_8251FBA8();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_82575FA8();
extern int fn_827D6968();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CACDC;
extern unsigned int lbl_83265A24;


/* WARNING: Removing unreachable block (ram,0x826181e8) */

unsigned int *
fn_826180E8(double param_1,unsigned int *param_2,int param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  char cVar3;
  __int64 lVar2;
  int *piVar4;
  double dVar5;
  unsigned char auStack_80 [128];
  
  param_2[4] = (float)param_1;
  param_2[3] = (float)param_1;
  param_2[2] = (int)param_7;
  param_2[6] = 0;
  *param_2 = &lbl_821CACDC;
  param_2[1] = param_3;
  uVar1 = fn_8251FBA8(param_4);
  uVar1 = (uVar1 & 0xffffffff) >> 3;
  if (uVar1 != 0) {
    piVar4 = (int *)(param_4 + 4);
    dVar5 = (double)lbl_82192734;
    do {
      if (*piVar4 != 0) {
        fn_825200F0(auStack_80,piVar4);
        cVar3 = fn_827D6968(lbl_83265A24,auStack_80,0xffffffffffffffff);
        if (cVar3 != '\0') {
          lVar2 = fn_82575FA8(param_1,dVar5,param_7,piVar4,(unsigned __int64)(unsigned int)param_2[1] + 0x10,
                                    1,0);
          if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82522D98(0xc);
          }
        }
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar1 != 0);
  }
  param_2[5] = *(unsigned int *)(param_3 + 400);
  return param_2;
}

