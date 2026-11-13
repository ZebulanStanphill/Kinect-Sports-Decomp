typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int INFINITY;
extern int fn_826BC900();
extern int fn_826BCA20();
extern int fn_826BCA90();
extern int fn_82F664B0();
extern unsigned int lbl_8200831C;


char * fn_826BCBA0(double param_1,unsigned __int64 param_2,char *param_3,unsigned __int64 param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff82008358;
  if (param_5 < 1) {
    iVar5 = -param_5;
    if (param_5 < -0xe) {
      iVar5 = 0xe;
    }
    param_5 = 10;
    uVar3 = (unsigned __int64)*(unsigned int *)(&lbl_8200831C + iVar5 * 4);
  }
  if (((unsigned __int64)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((((unsigned __int64)param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (bVar2 = true, ((unsigned __int64)param_1 & 0xfffffffffffff) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      uVar4 = 0xffffffff8200831c;
    }
    else if (param_1 == INFINITY) {
      uVar4 = 0xffffffff82008310;
    }
    else {
      if (param_1 != -INFINITY) {
        return param_3;
      }
      uVar4 = 0xffffffff82008304;
    }
    fn_82F664B0(param_3,param_4,uVar4);
  }
  else {
    iVar5 = (int)param_1;
    if (param_5 == 10) {
      if ((double)(__int64)iVar5 == param_1) {
        param_3 = (char *)fn_826BCA20(iVar5,param_3,param_4);
      }
      else {
        fn_826BC900(param_3,param_4,uVar3,param_1);
        cVar1 = *param_3;
        pcVar6 = param_3;
        while (cVar1 != '\0') {
          if ((*pcVar6 == ',') || (*pcVar6 == '.')) {
            *pcVar6 = '.';
            return param_3;
          }
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
      }
    }
    else {
      param_3 = (char *)fn_826BCA90(iVar5,param_3,param_4);
    }
  }
  return param_3;
}

