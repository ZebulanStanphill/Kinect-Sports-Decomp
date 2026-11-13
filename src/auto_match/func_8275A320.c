extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268CC00();
extern int fn_82759498();
extern int fn_82759838();
extern unsigned int lbl_831E7E64;


void fn_8275A320(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  unsigned char *puVar2;
  
  iVar1 = *(unsigned int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_82759498(iVar1);
    fn_8267BE38(iVar1);
  }
  puVar2 = (unsigned char *)fn_8267B890(lbl_831E7E64,0x28,0);
  if (puVar2 != (unsigned char *)0x0) {
    *(unsigned int *)(puVar2 + 8) = 0;
    *(unsigned int *)(puVar2 + 0xc) = 0;
    fn_8268CC00(puVar2 + 0x10);
    *puVar2 = 0;
    fn_82759838(puVar2,param_2);
  }
  else {
    puVar2 = (unsigned char *)0x0;
  }
  *(unsigned char **)(param_1 + 0xc) = puVar2;
  return;
}

