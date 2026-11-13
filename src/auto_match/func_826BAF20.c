extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_826B3420();
extern int fn_82734110();
extern int fn_8273E508();
extern unsigned int iStack_3c;
extern unsigned int iStack_54;


void fn_826BAF20(int param_1,unsigned __int64 param_2,int param_3)

{
  __int64 lVar1;
  int *piVar2;
  unsigned char auStack_60 [8];
  int (**pcStack_58)();
  int iStack_54;
  int *piStack_50;
  int (***ppcStack_4c)();
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  piVar2 = (int *)(param_1 + 0x30);
  param_1 = param_1 + 0x280;
  lVar1 = fn_8273E508(param_1,piVar2);
  if ((-(unsigned __int64)(lVar1 != 0) & lVar1 + 4U) == 0) {
    ppcStack_4c = &pcStack_58;
    pcStack_58 = fn_82734110;
    iStack_54 = 0;
    piStack_50 = piVar2;
    fn_826B3420(param_1,param_1,&piStack_50,*(unsigned int *)(*piVar2 + 0xc));
    if (iStack_54 != 0) {
      fn_826824B0();
    }
    iStack_3c = *piVar2;
    auStack_60[0] = 0;
    auStack_40[0] = 0xb;
    *(int *)(iStack_3c + 8) = *(int *)(iStack_3c + 8) + 1;
    (**(int (***)())(*(int *)(param_3 + 0x10) + 0x28))
              (param_3 + 0x10,param_2,piVar2,auStack_40,auStack_60);
    fn_82696330(auStack_40);
  }
  return;
}

