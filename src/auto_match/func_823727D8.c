extern unsigned int *auStack_60;
extern float fRam831d1b88;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_823728C0();
extern int fn_824E6890();
extern int fn_824E6FB0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_78;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B379C;
extern unsigned int lbl_831D1B8C;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


void fn_823727D8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  double dVar5;
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  unsigned __int64 uStack_80;
  int iStack_78;
  unsigned int *puStack_70;
  unsigned char auStack_60 [96];
  
  uVar1 = lbl_831D1B8C;
  uStack_8c = 0;
  *(unsigned int *)(param_1 + 0x648) = 1;
  ppuStack_90 = (unsigned char **)fn_823728C0;
  *(unsigned int *)(param_1 + 0x654) = uVar1;
  *(unsigned int *)(param_1 + 0x64c) = 0;
  uStack_80 = 0x823728c000000000;
  iStack_78 = param_1;
  puVar4 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = &lbl_821B379C;
    fn_82F68CC0(puVar4 + 2,&uStack_80,0x18);
    puStack_70 = puVar4;
    uVar2 = fn_824E6890(*(int *)(param_1 + 0x7e0),
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x7e0) + 0xd54) + 0x20);
    dVar5 = (double)fRam831d1b88;
    uVar3 = fn_82230110(auStack_60,0xffffffff821b35c4);
    fn_824E6FB0(dVar5,uVar2,uVar3);
    return;
  }
  uStack_8c = 0;
  ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_90);
}

