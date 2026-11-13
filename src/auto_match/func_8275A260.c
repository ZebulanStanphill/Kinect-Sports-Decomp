typedef struct { unsigned __int64 lo, hi; } V16_8275A260;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268CC00();
extern int fn_82759498();
extern int fn_82759838();
extern unsigned int lbl_831E7E64;


int fn_8275A260(int param_1,int param_2)

{
  unsigned iVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  
  *(unsigned short *)(param_1 + 4) = *(unsigned short *)(param_2 + 4);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  {unsigned short *d=(unsigned short *)(param_1+16);*d=*(unsigned short *)(param_2+16);}
  iVar1 = *(unsigned *)(param_1 + 0xc);
  {float *d=(float *)(param_1+20);*d=*(float *)(param_2+20);}
  if (iVar1 != 0) {
    fn_82759498(iVar1);
    fn_8267BE38(iVar1);
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(unsigned *)(param_2 + 0xc) != 0) {
    puVar3 = (unsigned char *)fn_8267B890(lbl_831E7E64,0x28,0);
    if (puVar3 != 0) {
      uVar2 = *(unsigned int *)(param_2 + 0xc);
      *(unsigned int *)(puVar3 + 8) = 0;
      *(unsigned int *)(puVar3 + 0xc) = 0;
      fn_8268CC00(puVar3 + 0x10);
      *puVar3 = 0;
      fn_82759838(puVar3,uVar2);
    }else puVar3=0;
    *(unsigned char **)(param_1 + 0xc) = puVar3;
  }
  return param_1;
}

