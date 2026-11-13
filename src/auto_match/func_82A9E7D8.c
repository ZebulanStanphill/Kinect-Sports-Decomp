typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_150;
extern int fn_82A1E658();
extern int fn_82A29DE8();
extern int fn_82A9CCC8();
extern int fn_82F672D8();
extern int fn_8306C278();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;


unsigned __int64 fn_82A9E7D8(int param_1,char *param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned char auStack_150 [259];
  unsigned char uStack_4d;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  bVar3 = param_2 != (char *)0x0;
  pcVar6 = param_2;
  if (bVar3) {
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x103 < pcVar6 + (-1 - (int)param_2)) {
      return 0xffffffff80004005;
    }
  }
  else {
    param_2 = "";
  }
  pcVar6 = *(char **)(param_1 + 4);
  pcVar5 = pcVar6 + *(int *)(param_1 + 8) * 0x114;
  do {
    pcVar8 = pcVar6;
    pcVar7 = param_2;
    if (pcVar5 <= pcVar6) {
      uStack_4c = *(unsigned int *)(param_1 + 8);
      fn_82F672D8(auStack_150,param_2,0x104);
      uStack_4d = 0;
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      if ((bVar3) && (uVar4 = fn_82A29DE8(param_2,0,1,0,3,0x80,0), (int)uVar4 != -1)) {
        fn_8306C278(uVar4,0,0,&uStack_48);
        fn_82A1E658(uVar4);
      }
      fn_82A9CCC8(param_1 + 4,auStack_150,(unsigned int *)(param_1 + 0x90));
      if (-1 < *(int *)(param_1 + 0x90)) {
        *param_3 = uStack_4c;
      }
      return (unsigned __int64)*(unsigned int *)(param_1 + 0x90);
    }
    do {
      cVar1 = *pcVar8;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      *param_3 = *(unsigned int *)(pcVar6 + 0x104);
      return 0;
    }
    pcVar6 = pcVar6 + 0x114;
  } while( true );
}

