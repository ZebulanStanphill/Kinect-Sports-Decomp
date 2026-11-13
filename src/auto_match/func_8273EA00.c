extern unsigned int *auStack_40;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82713EE8();
extern int fn_827B0A40();
extern unsigned int iStack_48;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82012284;
extern unsigned int uStack_4c;


void fn_8273EA00(__int64 param_1,int param_2,int *param_3)

{
  int iVar1;
  __int64 lVar2;
  int aiStack_60 [4];
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  int *piStack_44;
  unsigned char auStack_40 [16];
  
  if (param_3 != (int *)0x0) {
    auStack_40[0] = 0;
    fn_82681728(aiStack_60,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff82012158);
    fn_82713EE8(param_1 + 0x10,param_2,aiStack_60,auStack_40);
    lVar2 = (unsigned __int64)*(unsigned int *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
    iVar1 = fn_82696958(auStack_40,param_2);
    uStack_4c = 0;
    ppuStack_50 = (unsigned char **)&lbl_82012284;
    iStack_48 = param_2;
    piStack_44 = param_3;
    (**(int (***)())(*param_3 + 4))(param_3);
    (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x20))(iVar1 + 0x10,param_2 + 0x78,&ppuStack_50,0,0);
    (**(int (***)())(*param_3 + 0x1c))(param_3);
    fn_827B0A40(&uStack_4c);
    ppuStack_50 = &lbl_8200C4D4;
    fn_82696330(auStack_40);
  }
  return;
}

