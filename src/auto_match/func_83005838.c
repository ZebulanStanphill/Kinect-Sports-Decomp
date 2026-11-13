extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


void fn_83005838(double param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  unsigned short *puVar2;
  int iVar3;
  
  iVar3 = param_2[0x11];
  if (iVar3 == 0) {
    puVar2 = (unsigned short *)fn_82FA5060(lbl_831BC768,0xc);
    param_2[0x11] = (int)puVar2;
    if (puVar2 != (unsigned short *)0x0) {
      *puVar2 = 0;
      *(unsigned int *)(puVar2 + 2) = 0;
    }
    iVar3 = param_2[0x11];
    if (iVar3 == 0) {
      return;
    }
  }
  fVar1 = *(float *)(iVar3 + 8);
  *(float *)(iVar3 + 8) = (float)param_1;
  (**(int (***)())(*param_2 + 0x3c))((double)(float)(param_1 - (double)fVar1),param_2,0x1e,param_4,0,0);
  return;
}

