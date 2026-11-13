extern unsigned int *auStack_30;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82359C18();
extern int fn_82F565A0();
extern int fn_82F57B98();
extern unsigned int uStack_58;
extern unsigned int uStack_70;


unsigned int * fn_82F57BF0(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned int uStack_70;
  unsigned char auStack_68 [16];
  unsigned int uStack_58;
  unsigned int auStack_50 [2];
  unsigned char auStack_48 [24];
  unsigned char auStack_30 [24];
  
  puVar3 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x49) == '\0') {
    puVar1 = (unsigned int *)puVar3[1];
    do {
      if ((unsigned int)puVar1[4] < *param_2) {
        puVar2 = (unsigned int *)puVar1[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x49) == '\0');
  }
  if ((puVar3 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (unsigned int)puVar3[4])) {
    auStack_50[0] = *param_2;
    uStack_70 = 0;
    uStack_58 = 0;
    fn_82F565A0(auStack_48,auStack_80);
    fn_82F565A0(auStack_30,auStack_68);
    puVar3 = (unsigned int *)fn_82F57B98(auStack_90,param_1,puVar3,auStack_50);
    puVar3 = (unsigned int *)*puVar3;
    fn_82359C18(auStack_30);
    fn_82359C18(auStack_48);
    fn_82359C18(auStack_68);
    fn_82359C18(auStack_80);
  }
  return puVar3 + 6;
}

