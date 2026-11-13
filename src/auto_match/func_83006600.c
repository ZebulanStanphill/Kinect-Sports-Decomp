extern int fn_82FA5060();
extern int fn_83004190();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


void fn_83006600(double param_1,int *param_2)

{
  unsigned short *puVar1;
  short *psVar2;
  double dVar3;
  
  psVar2 = (short *)param_2[0x11];
  if (psVar2 == (short *)0x0) {
    if (param_1 == (double)lbl_821AAD20) {
      return;
    }
    puVar1 = (unsigned short *)fn_82FA5060(lbl_831BC768,0xc);
    param_2[0x11] = (int)puVar1;
    if (puVar1 != (unsigned short *)0x0) {
      *puVar1 = 0;
      *(unsigned int *)(puVar1 + 2) = 0;
    }
    psVar2 = (short *)param_2[0x11];
    if (psVar2 == (short *)0x0) {
      return;
    }
  }
  dVar3 = (double)((float)(__int64)*psVar2 * lbl_82186E6C);
  fn_83004190(param_1);
  (**(int (***)())(*param_2 + 0x3c))((double)(float)(param_1 - dVar3),param_2,0x1d,*param_2,0,0);
  return;
}

