extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_822C7578();


void fn_82333AB0(int param_1,unsigned __int64 param_2,unsigned int *param_3,int param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  char *pcVar4;
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [48];
  
  if ((param_2 & 0xffffffff) != 0) {
    pcVar4 = (char *)(param_1 + 0x40);
    do {
      uVar2 = 0xffffffff821adae0;
      if (param_4 == 0) {
        uVar2 = 0xffffffff821adae8;
      }
      uVar2 = fn_82230110(auStack_60,uVar2);
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar2 = fn_8223DFF0(uVar2,pcVar4,pcVar3 + (-1 - (int)pcVar4));
      fn_82240378(auStack_80,uVar2);
      fn_82230300(auStack_60,1,0);
      uVar2 = fn_822C7578((unsigned __int64)*param_3 + 0x40,auStack_80);
      fn_82230218(uVar2,auStack_80,0,0xffffffffffffffff);
      fn_82230300(auStack_80,1,0);
      param_2 = param_2 - 1;
      pcVar4 = pcVar4 + 0xa0;
    } while (param_2 != 0);
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

