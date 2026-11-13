extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827AEE00();
extern int fn_827AFE68();
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


void fn_827A2CF8(int param_1)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned short uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned char uStack_2c;
  
  if (((*(unsigned short *)(param_1 + 0x68) & 1) == 0) && ((*(unsigned short *)(param_1 + 0x68) >> 8 & 1) != 0)) {
    uVar1 = fn_8279C588(*(unsigned int *)(param_1 + 8));
    piVar2 = (int *)fn_827AEE00(uVar1,0x7ffffffe);
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
      uStack_3c = 0x7ffffffe;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      stack_pair_50.first = 0;
      stack_pair_50.second = 0;
      uStack_48 = 0;
      uStack_38 = 0xff000000;
      uStack_2c = 0x18;
      uStack_34 = 0xffffffff;
      piVar2 = (int *)fn_827AFE68(uVar1,&stack_pair_50.first);
    }
    else {
      uVar3 = (unsigned short)(piVar2[1] != 0);
    }
    if ((*piVar2 != *(int *)(param_1 + 0x18)) || (uVar3 != (*(unsigned short *)(param_1 + 0x68) >> 3 & 1)))
    {
      *piVar2 = *(int *)(param_1 + 0x18);
      piVar2[1] = *(unsigned short *)(param_1 + 0x68) >> 3 & 1;
      fn_82799C20(*(unsigned int *)(param_1 + 8),piVar2);
    }
  }
  return;
}

