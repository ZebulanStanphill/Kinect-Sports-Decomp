extern int fn_825089A0();
extern int fn_8287D6D8();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int lbl_83211894;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8287DA08(int param_1,unsigned __int64 param_2,int param_3,char param_4)

{
  char cVar3;
  int *piVar2;
  unsigned __int64 uVar1;
  unsigned int uStack0000001c;
  int aiStack_30;
  
  uStack0000001c = (unsigned int)param_2;
  cVar3 = fn_828821A0(param_2);
  if ((cVar3 == '\0') && (cVar3 = fn_82882218(param_2), cVar3 == '\0')) {
    fn_8287D6D8(&aiStack_30,param_1 + 0xf0,&stack0x0000001c);
    *(int *)(aiStack_30 + 0x78) = *(int *)(aiStack_30 + 0x78) + 1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    if (param_4 != '\0') {
      *(int *)(aiStack_30 + 0x5c) = *(int *)(aiStack_30 + 0x5c) + 1;
      lbl_83211894 = lbl_83211894 + 1;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    *(int *)(aiStack_30 + 0xe0) = *(int *)(aiStack_30 + 0xe0) + param_3 + 0x2c;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + param_3 + 0x2c;
    piVar2 = (int *)fn_825089A0();
    uVar1 = (**(int (***)())(*piVar2 + 0xc))();
    *(unsigned __int64 *)(aiStack_30 + 200) = uVar1;
    *(unsigned __int64 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}

