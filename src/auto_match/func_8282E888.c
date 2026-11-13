extern char *pcRam8320a79c;
extern char *pcRam8320a7a0;
extern char *pcRam8320a7a4;
extern unsigned int *puRam8320a798;
typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_40;
extern int fn_8282DE20();
extern int fn_8282DE68();
extern int fn_8282DEB8();
extern int fn_8282E0B0();
extern int fn_8282E228();
extern int fn_8282E6B8();


bool fn_8282E888(__int64 param_1)

{
  int iVar2;
  __int64 lVar1;
  int (**pcVar3)();
  unsigned int *puVar4;
  bool bVar5;
  unsigned int auStack_40 [4];
  unsigned int *puStack_30;
  int (**pcStack_2c)();
  int (**pcStack_28)();
  int (**pcStack_24)();

  auStack_40[0] = 0;
  pcVar3 = pcRam8320a7a4;
  puVar4 = puRam8320a798;
  pcStack_2c = pcRam8320a79c;
  pcStack_28 = pcRam8320a7a0;
  if (pcRam8320a79c == (int (**)())0x0) {
    pcVar3 = fn_8282DEB8;
    puVar4 = auStack_40;
    pcStack_2c = fn_8282DE20;
    pcStack_28 = fn_8282DE68;
  }
  puStack_30 = puVar4;
  pcStack_24 = pcVar3;
  iVar2 = (*pcStack_2c)(puVar4,param_1 + 0xb8);
  if (iVar2 == 0) {
    fn_8282E0B0(param_1,&puStack_30);
    fn_8282E228(param_1,&puStack_30);
    fn_8282E6B8(param_1,&puStack_30);
    lVar1 = (*pcVar3)(puVar4);
    bVar5 = lVar1 != 0;
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}
