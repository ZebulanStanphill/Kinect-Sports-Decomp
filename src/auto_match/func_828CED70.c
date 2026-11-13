extern unsigned int *auStack_34;
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_8265CA20();
extern int fn_828A6130();
extern int fn_828CCC38();
extern int fn_828CCD48();
extern int fn_828CE118();
extern int fn_828CE6D8();
extern int fn_828CEAD0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned int * fn_828CED70(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned char auStack_70 [4];
  unsigned int *puStack_6c;
  unsigned char auStack_68 [8];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_58 [4];
  unsigned int *puStack_54;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char auStack_34 [4];
  unsigned int *puStack_30;
  
  puVar5 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x29) == '\0') {
    puVar1 = (unsigned int *)puVar5[1];
    do {
      if ((unsigned int)puVar1[3] < *param_2) {
        puVar2 = (unsigned int *)puVar1[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar5 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (unsigned int)puVar5[3])) {
    uVar3 = *param_2;
    uStack_60 = 0;
    uStack_5c = 0;
    fn_828CCD48(auStack_58,auStack_70,auStack_70);
    uStack_3c = uStack_60;
    uStack_38 = uStack_5c;
    uStack_40 = uVar3;
    fn_828CCD48(auStack_34,auStack_70,auStack_70);
    fn_828CE118(auStack_34,auStack_58);
    lVar4 = fn_828CCC38(param_1);
    fn_828CE6D8(param_1 + 0xd,lVar4 + 0xc,&uStack_40);
    fn_828CEAD0(&puStack_6c,param_1,puVar5,lVar4);
    fn_828A6130(auStack_68,auStack_34,*puStack_30);
    fn_8265CA20(puStack_30);
    fn_828A6130(auStack_68,auStack_58,*puStack_54);
    fn_8265CA20(puStack_54);
    puVar5 = puStack_6c;
  }
  return puVar5 + 4;
}

