extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_825200F0();
extern int fn_825BC908();
extern int fn_827D6968();
extern unsigned int lbl_821CAB38;
extern unsigned int lbl_831C03EC;
extern unsigned int lbl_83265A24;


void fn_82568A30(int param_1,unsigned __int64 param_2)

{
  short sVar1;
  char cVar3;
  int iVar2;
  int iVar4;
  unsigned char auStack_50 [80];
  
  iVar2 = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  fn_825200F0(auStack_50);
  cVar3 = fn_827D6968(lbl_83265A24,auStack_50,0xffffffffffffffff);
  if (cVar3 != '\0') {
    iVar2 = fn_8251F720(param_2,1);
    if (iVar2 != 0) {
      sVar1 = *(short *)(iVar2 + 0xc);
      iVar4 = iVar2;
      while (sVar1 != 0) {
        if (*(int (***)())(&lbl_831C03EC + (unsigned int)*(unsigned short *)(iVar4 + 0xc) * 8) != (int (**)())0x0) {
          (**(int (***)())(&lbl_831C03EC + (unsigned int)*(unsigned short *)(iVar4 + 0xc) * 8))(iVar4);
        }
        iVar4 = *(int *)(&lbl_821CAB38 + (unsigned int)*(unsigned short *)(iVar4 + 0xc) * 4) + iVar4;
        sVar1 = *(short *)(iVar4 + 0xc);
      }
    }
    fn_825BC908(iVar2);
  }
  *(int *)(param_1 + 0x70) = iVar2;
  return;
}

