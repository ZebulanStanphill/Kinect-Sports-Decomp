extern unsigned int *auStack_5c;
extern int fn_82820EF8();
extern int fn_82826AB0();
extern int fn_8282D0E0();
extern unsigned int iStack00000014;
extern unsigned int iStack_60;
extern unsigned int stack0x00000014;


void fn_82826F80(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack00000014;
  int iStack_60;
  unsigned char auStack_5c [92];
  
  iVar7 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iStack_60 = 0;
  iVar4 = -1;
  iVar5 = 0;
  iStack00000014 = param_1;
  if ((*(unsigned char *)(param_1 + 0x134) & 8) == 0) {
    fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),4,&stack0x00000014);
  }
  if (*(int *)(iStack00000014 + 0x38) != 0) {
    uVar3 = 0;
    iVar6 = -0xc;
    iVar2 = iStack00000014;
    do {
      if (iVar5 == 0) {
        iVar6 = iVar6 + 0xc;
        puVar1 = (unsigned int *)(*(int *)(iVar2 + 0xfc) + iVar6);
        iVar4 = iVar4 + 1;
        iVar5 = puVar1[2];
        fn_82826AB0(iVar2,*puVar1,&iStack_60,auStack_5c);
        iVar2 = iStack00000014;
      }
      iVar5 = iVar5 + -1;
      if ((param_2 == *(int *)(iVar7 + *(int *)(iVar2 + 0x100))) &&
         (param_3 == *(int *)(iVar6 + *(int *)(iVar2 + 0xfc)))) {
        *param_5 = *(unsigned int *)(iVar4 * 0xc + *(int *)(iVar2 + 0xfc) + 4);
        *param_4 = *(unsigned int *)(*(int *)(uVar3 * 4 + *(int *)(iVar2 + 0x100)) + iStack_60);
        fn_82820EF8(param_4,4);
        return;
      }
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar3 < *(unsigned int *)(iVar2 + 0x38));
  }
  return;
}

