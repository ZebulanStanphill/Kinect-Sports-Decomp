typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268B610(unsigned int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  char *pcVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
    pcVar7 = param_2;
    if (param_3 == (char *)0xffffffff) {
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      param_3 = pcVar7 + (-1 - (int)param_2);
    }
    uVar4 = *param_1;
    uVar5 = 0;
    uVar2 = (unsigned __int64)uVar4 & 0xfffffffc;
    uVar3 = *(unsigned int *)uVar2 & 0x7fffffff;
    if ((uVar4 & 3) == 0) {
      uVar5 = (unsigned __int64)lbl_831E7E64;
    }
    else if ((uVar4 & 3) == 1) {
      uVar5 = fn_8267BF50(param_1,0);
    }
    else if ((uVar4 & 3) < 3) {
      uVar5 = (unsigned __int64)param_1[1];
    }
    uVar4 = fn_8268B368(param_1,uVar5,param_3 + uVar3,0);
    fn_82F68CC0(uVar4 + 8,uVar2 + 8,uVar3);
    fn_82F68CC0(uVar4 + uVar3 + 8,param_2,param_3);
    *param_1 = uVar4 | *param_1 & 3;
    do {
      puVar6 = (unsigned int *)(uVar2 + 4);
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar5 - 1,0,uVar2 + 4);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38(uVar2);
    }
  }
  return;
}

