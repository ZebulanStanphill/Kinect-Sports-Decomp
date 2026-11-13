extern unsigned int *auStack_40;
extern int fn_82696330();
extern int fn_826C5FD0();


void fn_826C6070(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned char param_4)

{
  char *pcVar1;
  char cVar2;
  unsigned char bVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_40 [16];
  
  if ((unsigned int)((unsigned int *)*param_3)[4] < 3) {
    return;
  }
  pcVar1 = *(char **)*param_3;
  if (*pcVar1 != 'o') {
    return;
  }
  if (pcVar1[1] != 'n') {
    return;
  }
  auStack_40[0] = 0;
  cVar2 = (**(int (***)())(*(int *)(param_1 + 0x10) + 0x2c))(param_1 + 0x10,param_2,param_3,auStack_40);
  if (cVar2 == '\0') {
    if (param_4 != 0) goto LAB_826c6124;
  }
  else if (param_4 == 0) goto LAB_826c6124;
  uVar4 = (unsigned __int64)param_4;
  bVar3 = fn_826C5FD0(param_2,param_3);
  if (bVar3 != 0) {
    if ((uVar4 & 0xffffffff) == 0) {
      bVar3 = *(unsigned char *)(param_1 + 0x34) | bVar3;
    }
    else {
      bVar3 = *(unsigned char *)(param_1 + 0x34) & ~bVar3;
    }
    *(unsigned char *)(param_1 + 0x34) = bVar3;
  }
LAB_826c6124:
  fn_82696330(auStack_40);
  return;
}

