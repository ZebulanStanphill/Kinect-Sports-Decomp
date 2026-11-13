extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82522ED8();
extern int fn_82F56878();
extern int fn_82F57B10();
extern int fn_82F57D48();
extern int fn_82F57FD0();
extern int fn_82F58508();
extern unsigned int uStack_40;


unsigned int * fn_82F58670(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned char auStack_60 [4];
  unsigned int *puStack_5c;
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [4];
  unsigned int *puStack_4c;
  unsigned int uStack_40;
  unsigned char auStack_3c [4];
  unsigned int *puStack_38;
  
  puVar4 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x21) == '\0') {
    puVar1 = (unsigned int *)puVar4[1];
    do {
      if ((unsigned int)puVar1[3] < *param_2) {
        puVar2 = (unsigned int *)puVar1[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar4 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (unsigned int)puVar4[3])) {
    fn_82F56878(auStack_50,auStack_60,auStack_60);
    uStack_40 = *param_2;
    fn_82F57D48(auStack_3c,auStack_50);
    uVar3 = fn_82F57FD0(param_1,&uStack_40);
    fn_82F58508(&puStack_5c,param_1,puVar4,uVar3);
    fn_82F57B10(auStack_58,auStack_3c,*puStack_38);
    fn_82522ED8(puStack_38);
    fn_82F57B10(auStack_58,auStack_50,*puStack_4c);
    fn_82522ED8(puStack_4c);
    puVar4 = puStack_5c;
  }
  return puVar4 + 4;
}

