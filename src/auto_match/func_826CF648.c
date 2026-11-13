typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C498();
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696330();
extern int fn_826CD488();
extern int fn_826CD508();
extern unsigned int iStack_6c;


void fn_826CF648(int param_1,unsigned __int64 param_2,char *param_3,unsigned __int64 param_4,char *param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  char acStack_70;
  int iStack_6c;
  int *apiStack_68 [2];
  char acStack_60 [16];
  
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xac);
  if (uVar5 != 0) {
    if ((*(char *)(param_1 + 0x1ce) == '\0') && (*param_5 == '\0')) {
      iVar6 = *(int *)(param_1 + 0x6c);
      if (iVar6 != 0) {
        acStack_60[0] = '\0';
        fn_82681728(&iStack_6c,(unsigned __int64)*(unsigned int *)(param_1 + 0x148) + 0x254,
                          0xffffffff820066cc);
        cVar3 = (**(int (***)())(*(int *)(iVar6 + 0x10) + 0x2c))
                          (iVar6 + 0x10,param_1 + 0x148,&iStack_6c,acStack_60);
        lVar4 = (unsigned __int64)*(unsigned int *)(iStack_6c + 8) - 1;
        *(int *)(iStack_6c + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8(iStack_6c);
        }
        if (cVar3 != '\0') {
          if ((acStack_60[0] == '\0') || (bVar2 = false, acStack_60[0] == '\n')) {
            bVar2 = true;
          }
          if (!bVar2) {
            cVar3 = fn_82695608(acStack_60,param_1 + 0xd0);
            *param_5 = (cVar3 == '\0') + '\x01';
          }
        }
        fn_82696330(acStack_60);
      }
    }
    if (((*(char *)(param_1 + 0x1ce) != '\x02') && (*param_5 != '\x02')) && (uVar5 != 0)) {
      iVar6 = 0;
      do {
        piVar1 = *(int **)(iVar6 + *(int *)(param_1 + 0xa8));
        if ((piVar1 != (int *)0x0) && ((*(unsigned char *)((int)piVar1 + 0x66) & 0x80) != 0)) {
          cVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
          if (cVar3 != '\0') {
            piVar1[1] = piVar1[1] + 1;
            apiStack_68[0] = piVar1;
            if ((0 < *(short *)(piVar1 + 0x24)) && (*param_3 == '\0')) {
              fn_826CD508(param_2,0);
              *param_3 = '\x01';
            }
            cVar3 = (**(int (***)())(*piVar1 + 0xb4))(piVar1);
            if (cVar3 == '\0') {
              if ((param_4 & 0xff) != 0) {
                cVar3 = (**(int (***)())(*piVar1 + 0xbc))(piVar1);
                if (cVar3 != '\0') goto LAB_826cf828;
              }
            }
            else {
LAB_826cf828:
              if (*param_3 != '\0') {
                if (*(short *)(piVar1 + 0x24) < 1) goto LAB_826cf84c;
              }
              fn_826CD488(param_2,apiStack_68);
            }
LAB_826cf84c:
            acStack_70 = *param_5;
            (**(int (***)())(*piVar1 + 0xc4))(piVar1,param_2,param_3,param_4,&acStack_70);
            fn_8267C498(piVar1);
          }
        }
        uVar5 = uVar5 - 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  return;
}

