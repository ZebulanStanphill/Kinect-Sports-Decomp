extern unsigned int *auStack_4c;
extern int fn_82F69590();
extern int fn_82F69650();
extern int fn_82F6FA38();
extern int fn_82F80AC8();
extern int fn_82F812C0();
extern unsigned int uStack_50;


void fn_82F80C10(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
                  ,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  if (*param_1 != -0x7ffffffd) {
    iVar1 = fn_82F6FA38();
    if ((((*(int *)(iVar1 + 0x74) == 0) ||
         (iVar1 = fn_82F6FA38(), *(int *)(iVar1 + 0x74) == 0)) || (*param_1 == -0x1fbcb0b3))
       || ((*param_1 == -0x1fbcbcae ||
           (iVar1 = fn_82F69590(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
           iVar1 == 0)))) {
      if (*(int *)(param_5 + 0xc) == 0) {
        fn_82F812C0();
      }
      iVar1 = fn_82F69650(param_2,param_5,param_6,&uStack_50,auStack_4c,param_4);
      if (uStack_50 < auStack_4c[0]) {
        piVar3 = (int *)(iVar1 + 0xc);
        do {
          if ((piVar3[-3] <= (int)param_6) && ((int)param_6 <= piVar3[-2])) {
            iVar2 = piVar3[1] + *piVar3 * 0x10;
            iVar1 = *(int *)(iVar2 + -0xc);
            if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
              fn_82F80AC8(param_1,param_2,param_3,param_4,param_5,iVar2 + -0x10,0,piVar3 + -3);
            }
          }
          uStack_50 = uStack_50 + 1;
          piVar3 = piVar3 + 5;
        } while (uStack_50 < auStack_4c[0]);
      }
    }
  }
  return;
}

