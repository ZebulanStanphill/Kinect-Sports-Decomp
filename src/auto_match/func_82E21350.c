extern char cRam8323fe19;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82E21200();
extern int fn_82F64268();
extern int fn_82F66368();
extern int fn_82F668D8();
extern unsigned int uRam8323fe18;


unsigned __int64 fn_82E21350(unsigned __int64 param_1,char *param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iVar3;
  char cVar4;
  unsigned int uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar4 != '\0');
    iVar3 = (int)pcVar6 - (int)param_2;
    uVar5 = iVar3 - 1;
    iVar7 = 0;
    if (cRam8323fe19 == '\0') {
      do {
        cVar4 = (char)iVar7 + '\x01';
        *(char *)(iVar7 + -0x7cdc020c) = '\x1f' - (char)iVar7;
        iVar7 = (int)cVar4;
      } while (cVar4 < ' ');
      fn_82F668D8(0xffffffff8323fdf4,0x25,0xffffffff8214baf0,5);
      uRam8323fe18 = 0;
      cRam8323fe19 = '\x01';
    }
    uVar2 = fn_82F64268(param_2,0xffffffff8323fdf4);
    if (uVar2 == uVar5) {
      uVar1 = fn_82E21200(param_1,param_2);
      return uVar1;
    }
    iVar7 = fn_8265C9E0(iVar3);
    iVar3 = fn_82F66368(iVar7,iVar3,param_2,uVar5);
    if (iVar3 == 0) {
      *(unsigned char *)(iVar7 + uVar5) = 0;
      while (uVar2 < uVar5) {
        *(unsigned char *)(iVar7 + uVar2) = 0x2e;
        uVar2 = fn_82F64268(iVar7,0xffffffff8323fdf4);
      }
      fn_82E21200(param_1,iVar7);
      fn_8265CA20(iVar7);
      return 1;
    }
  }
  return 0;
}

