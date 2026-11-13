extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827AEE00();
extern int fn_827AFE68();
extern int fn_82F68B78();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8279A588(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  char in_r7;
  unsigned short uVar4;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned char uStack_2c;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    return;
  }
  if (in_r7 == '\0') {
    return;
  }
  iVar2 = fn_82F68B78();
  if (((*(unsigned short *)(iVar2 + 0x68) & 1) == 0) && ((*(unsigned short *)(iVar2 + 0x68) >> 8 & 1) != 0)) {
    uVar1 = fn_8279C588(*(unsigned int *)(iVar2 + 8));
    piVar3 = (int *)fn_827AEE00(uVar1,0x7ffffffe);
    if (piVar3 == (int *)0x0) {
      uVar4 = 0;
      uStack_3c = 0x7ffffffe;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_38 = 0xff000000;
      uStack_2c = 0x18;
      uStack_34 = 0xffffffff;
      piVar3 = (int *)fn_827AFE68(uVar1,&uStack_50);
    }
    else {
      uVar4 = (unsigned short)(piVar3[1] != 0);
    }
    if ((*piVar3 != *(int *)(iVar2 + 0x18)) || (uVar4 != (*(unsigned short *)(iVar2 + 0x68) >> 3 & 1))) {
      *piVar3 = *(int *)(iVar2 + 0x18);
      piVar3[1] = *(unsigned short *)(iVar2 + 0x68) >> 3 & 1;
      fn_82799C20(*(unsigned int *)(iVar2 + 8),piVar3);
    }
  }
  return;
}

