#define true 1
extern int fn_8234F3D8();
extern int fn_82F65390();
extern unsigned int lbl_831CB7D8;


void fn_8234F338(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  unsigned char *puVar5;
  unsigned char **ppuVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  ppuVar6 = &lbl_831CB7D8;
  puVar5 = lbl_831CB7D8;
  while( true ) {
    if (puVar5 == (unsigned char *)0x0) {
      return;
    }
    pcVar2 = *ppuVar6;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = fn_82F65390(param_1,pcVar2,pcVar4 + (-1 - (int)pcVar2));
    if (iVar3 == 0) break;
    ppuVar6 = ppuVar6 + 5;
    puVar5 = *ppuVar6;
  }
  fn_8234F3D8(ppuVar6[3],ppuVar6[4],param_2,param_3,param_4);
  return;
}

