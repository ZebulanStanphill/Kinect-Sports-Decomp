#define true 1
extern int fn_82CFBBF0();


unsigned __int64 fn_82D001D8(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  uVar5 = 0;
  cVar2 = *param_2;
  pcVar1 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = pcVar1 + 1;
    uVar5 = ((uVar5 & 0x7ffffff) * 0x20 - uVar5) + (__int64)cVar2;
    cVar2 = *pcVar1;
  }
  uVar6 = (unsigned __int64)(unsigned int)param_1[2];
  iVar4 = *param_1;
  uVar7 = uVar5 & 0x7fffffff & uVar6;
  uVar3 = *(unsigned int *)((int)(uVar7 << 2) + iVar4);
  while( true ) {
    if (uVar3 == 0xffffffff) {
      return uVar6 + 1;
    }
    if (((unsigned __int64)uVar3 == (uVar5 & 0x7fffffff)) &&
       (iVar4 = fn_82CFBBF0(param_2,*(unsigned int *)
                                      ((int)((uVar6 + uVar7 + 1 & 0xffffffff) << 2) + iVar4)),
       iVar4 == 0)) break;
    uVar6 = (unsigned __int64)(unsigned int)param_1[2];
    iVar4 = *param_1;
    uVar7 = uVar7 + 1 & uVar6;
    uVar3 = *(unsigned int *)((int)(uVar7 << 2) + iVar4);
  }
  return uVar7;
}

