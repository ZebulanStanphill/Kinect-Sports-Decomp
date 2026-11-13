extern int *piRam83219598;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_148;
extern unsigned int *auStack_160;
extern int fn_82A381F0();
extern int memcpy();
extern unsigned int uStack_138;
extern unsigned int uStack_150;
extern unsigned int uStack_158;


__int64 fn_82A38DE0(unsigned __int64 param_1)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  int in_r8;
  unsigned int auStack_160 [2];
  unsigned int uStack_158;
  unsigned char *puStack_154;
  unsigned int uStack_150;
  unsigned char auStack_148 [8];
  unsigned char auStack_140 [8];
  unsigned __int64 uStack_138;
  unsigned char auStack_130 [304];

  piVar1 = piRam83219598;
  lVar2 = (**(int (***)())(*piRam83219598 + 0x18))(param_1);
  if (-1 < lVar2) {
    iVar3 = *(int *)(in_r8 + 0x3c);
    memcpy(auStack_130,in_r8 + 0x40,iVar3);
    auStack_130[iVar3] = 0;
    RtlInitAnsiString(auStack_140,auStack_130);
    puStack_154 = auStack_140;
    uStack_158 = (unsigned int)param_1;
    uStack_150 = 0x40;
    lVar2 = (*(int (**)())piVar1[3])(auStack_160,0xffffffff80120089,&uStack_158,auStack_148,0,0,0,1);
    if (-1 < lVar2) {
      iVar3 = fn_82A381F0(piVar1 + 0x14,auStack_160[0],0);
      if ((iVar3 != 0) &&
         (lVar2 = (*(int (**)())piVar1[8])(auStack_160[0],auStack_148,&uStack_138,8,0x14), -1 < lVar2))
      {
        *(unsigned __int64 *)(in_r8 + 0x28) = uStack_138;
      }
      (*(int (**)())piVar1[1])(auStack_160[0]);
    }
  }
  return lVar2;
}
