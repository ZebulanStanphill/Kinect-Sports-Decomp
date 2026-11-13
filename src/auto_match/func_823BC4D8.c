extern unsigned int *auStack_40;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823BC978();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int lbl_821B5EA4;
extern unsigned int uStack_30;
extern unsigned int uStack_61;


unsigned int fn_823BC4D8(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  unsigned char *puVar5;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned char auStack_78 [4];
  int iStack_74;
  unsigned char auStack_70 [4];
  int iStack_6c;
  unsigned char uStack_61;
  unsigned char **ppuStack_60;
  unsigned char auStack_5c [12];
  unsigned char ***pppuStack_50;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  
  fn_82365BD8(auStack_70);
  fn_82365BD8(auStack_78,auStack_70);
  fn_82365BD8(auStack_80,auStack_78);
  ppuStack_60 = &lbl_821B5EA4;
  fn_82365BD8(auStack_5c,auStack_80);
  pppuStack_50 = &ppuStack_60;
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  puVar1 = *(unsigned int **)(param_1 + 0x24);
  uVar2 = *puVar1;
  if (pppuStack_50 == (unsigned char ***)0x0) {
    uStack_30 = 0;
  }
  else {
    puVar5 = auStack_40;
    if (pppuStack_50 != &ppuStack_60) {
      puVar5 = (unsigned char *)0x0;
    }
    uStack_30 = (*(int (**)())**pppuStack_50)(pppuStack_50,puVar5);
  }
  piVar4 = (int *)fn_823BC978(auStack_80,uVar2,puVar1,auStack_40);
  iVar3 = *piVar4;
  if (pppuStack_50 != (unsigned char ***)0x0) {
    (*(int (**)())(*pppuStack_50)[3])
              (pppuStack_50,
               (int)(auStack_5c + -(int)pppuStack_50 + -4) -
               (int)(&uStack_61 +
                    (unsigned int)(auStack_5c + -(int)pppuStack_50 + -4 == (unsigned char *)0x0) +
                    -(int)pppuStack_50));
  }
  return *(unsigned int *)(iVar3 + 0xc);
}

