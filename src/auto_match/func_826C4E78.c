extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82682A48();
extern int fn_82696330();
extern int fn_826AA220();
extern int fn_826AABD0();
extern int fn_826B0AD8();
extern int fn_826B35F0();
extern int fn_826EA050();


void fn_826C4E78(int *param_1)

{
  unsigned iVar1;
  unsigned int uVar2;
  unsigned char cVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned char auStack_40 [12];
  unsigned char auStack_30 [12];
  
  piVar4=(unsigned)param_1[8] ? (int *)(param_1[8]+16):0;
  if (piVar4 != (int *)0x0) {
    cVar3 = (*(int (**)())(*piVar4 + 0x3c))(piVar4);
    if (cVar3 != '\0') {
      fn_82682A48(piVar4 + -4);
    }
  }
  if ((*(unsigned char *)(*param_1 + 0x66) != '\x02') || ((*(unsigned short *)(*param_1 + 100) & 2) == 0)) {
    auStack_40[0] = 0;
    fn_826B35F0(param_1[1],(unsigned __int64)*(unsigned int *)(param_1[1] + 0x78) + 0xf4,auStack_40);
    fn_82696330(auStack_40);
  }
  if ((*(unsigned char *)(*param_1 + 0x66) != '\x02') || ((*(unsigned short *)(*param_1 + 100) & 0x20) == 0)) {
    auStack_30[0] = 0;
    fn_826B35F0(param_1[1],(unsigned __int64)*(unsigned int *)(param_1[1] + 0x78) + 0xf8,auStack_30);
    fn_82696330(auStack_30);
  }
  if (param_1[9] != 0) {
    fn_826EA050(param_1[9]);
  }
  fn_826B0AD8((unsigned __int64)(unsigned int)param_1[1] + 200,param_1[10]);
  if (*(unsigned char *)(*param_1 + 0x66) == '\x02') {
    fn_826AA220(param_1[1] + 0x68,
                      (unsigned __int64)*(unsigned int *)(param_1[1] + 0x6c) -
                      (unsigned __int64)*(unsigned char *)(*param_1 + 0x67));
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    puVar5 = (unsigned int *)(iVar1 + 0x80);
    if (**(unsigned **)(iVar1 + 0x80) != 0) {
      fn_826824B0(**(unsigned **)(iVar1+0x80));
    }
    uVar2 = *puVar5;
    *puVar5 = uVar2 - 4;
    if (uVar2 - 4 < puVar5[1]) {
      fn_826AABD0(puVar5);
    }
  }
  return;
}

