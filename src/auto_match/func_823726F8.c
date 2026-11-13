extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_823728C0();
extern int fn_824E6890();
extern int fn_824E6FB0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_68;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B379C;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


void fn_823726F8(unsigned __int64 param_1,double param_2,int param_3)

{
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned __int64 uStack_70;
  int iStack_68;
  unsigned int *puStack_60;
  unsigned char auStack_50 [80];
  
  *(float *)(param_3 + 0x654) = (float)param_2;
  *(unsigned int *)(param_3 + 0x648) = 1;
  *(unsigned int *)(param_3 + 0x64c) = 0;
  uStack_7c = 0;
  ppuStack_80 = (unsigned char **)fn_823728C0;
  uStack_70 = 0x823728c000000000;
  iStack_68 = param_3;
  puVar3 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = &lbl_821B379C;
    fn_82F68CC0(puVar3 + 2,&uStack_70,0x18);
    puStack_60 = puVar3;
    uVar1 = fn_824E6890(*(int *)(param_3 + 0x7e0),
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_3 + 0x7e0) + 0xd54) + 0x20);
    uVar2 = fn_82230110(auStack_50,0xffffffff821b35b4);
    fn_824E6FB0(param_1,uVar1,uVar2);
    return;
  }
  uStack_7c = 0;
  ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_80);
}

