typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826824B0();
extern int fn_826961B0();
extern int fn_826B32D0();


unsigned char * fn_826AE338(unsigned char *param_1,int param_2,unsigned __int64 param_3)

{
  char cVar1;
  unsigned int uVar2;
  bool bVar3;
  __int64 lVar4;
  int iVar5;
  char *pcVar6;
  unsigned __int64 uVar7;
  
  pcVar6 = (char *)0x0;
  lVar4 = (__int64)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc) >> 4);
  uVar7 = ((unsigned __int64)*(unsigned int *)(param_2 + 0x1c) - 1 & 0x7ffffff) * 0x20 + lVar4;
  if ((param_3 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
    uVar2 = (int)uVar7 - (int)param_3;
    pcVar6 = (char *)(*(int *)((uVar2 >> 3 & 0x1ffffffc) + *(int *)(param_2 + 0x18)) +
                     (uVar2 & 0x1f) * 0x10);
  }
  cVar1 = *pcVar6;
  if (cVar1 == '\x02') {
    iVar5 = 5;
  }
  else if (cVar1 == '\x05') {
    iVar5 = 3;
  }
  else {
    if ((cVar1 == '\x03') || (bVar3 = false, cVar1 == '\x04')) {
      bVar3 = true;
    }
    if (!bVar3) {
      *param_1 = 0;
      return param_1;
    }
    iVar5 = 4;
  }
  uVar7 = fn_826B32D0(param_2,*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x2a0),
                            (iVar5 + 2) * 4 + *(int *)(param_2 + 0x78),1,
                            (((unsigned __int64)*(unsigned int *)(param_2 + 0x1c) & 0x7ffffff) * 0x20 + lVar4 +
                            -0x20) - param_3);
  fn_826961B0(param_1,uVar7);
  if ((uVar7 & 0xffffffff) != 0) {
    fn_826824B0(uVar7);
  }
  return param_1;
}

