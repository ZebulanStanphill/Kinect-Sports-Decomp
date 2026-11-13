typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_82695DA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826B32D0();


unsigned char * fn_826B3660(unsigned char *param_1,int param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  
  cVar1 = *param_3;
  if (cVar1 == '\x02') {
    iVar5 = 5;
  }
  else if (cVar1 == '\x05') {
    iVar5 = 3;
  }
  else {
    if ((cVar1 == '\x03') || (bVar2 = false, cVar1 == '\x04')) {
      bVar2 = true;
    }
    if (!bVar2) {
      *param_1 = 0;
      return param_1;
    }
    iVar5 = 4;
  }
  puVar6 = (unsigned int *)(param_2 + 8);
  uVar4 = *(int *)(param_2 + 8) + 0x10;
  *(unsigned int *)(param_2 + 8) = uVar4;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar4) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695DA0(*puVar6,param_3);
  }
  uVar3 = fn_826B32D0(param_2,*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x2a0),
                        (iVar5 + 2) * 4 + *(int *)(param_2 + 0x78),1,
                        (__int64)((int)(*puVar6 - *(int *)(param_2 + 0xc)) >> 4) +
                        ((unsigned __int64)*(unsigned int *)(param_2 + 0x1c) & 0x7ffffff) * 0x20 + -0x20);
  fn_82696330(*puVar6);
  uVar4 = *puVar6;
  *puVar6 = uVar4 - 0x10;
  if (uVar4 - 0x10 < *(unsigned int *)(param_2 + 0xc)) {
    fn_826827F8(puVar6);
  }
  fn_826961B0(param_1,uVar3);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return param_1;
}

