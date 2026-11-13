extern unsigned int *auStack_48;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8265CA20();
extern int fn_8288C2E0();
extern int fn_8288E4B0();
extern int fn_828B22F0();
extern int fn_828C8F90();
extern int fn_828C92E8();
extern int fn_828C9BD0();
extern int fn_828C9C30();
extern int fn_828C9CF0();
extern int fn_828CA708();
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


unsigned int * fn_828CA8B8(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned char auStack_a0 [4];
  unsigned int * apuStack_9c;
  unsigned char auStack_90 [4];
  unsigned int *puStack_8c;
  unsigned int auStack_80 [4];
  unsigned __int64 uStack_70;
  unsigned int uStack_68;
  unsigned int auStack_60 [2];
  unsigned char auStack_58 [4];
  unsigned int *puStack_54;
  unsigned int auStack_48;
  unsigned __int64 uStack_38;
  unsigned int uStack_30;

  puVar5 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x49) == '\0') {
    puVar1 = (unsigned int *)puVar5[1];
    do {
      if ((unsigned int)puVar1[4] < *param_2) {
        puVar2 = (unsigned int *)puVar1[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x49) == '\0');
  }
  if ((puVar5 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (unsigned int)puVar5[4])) {
    uVar3 = *param_2;
    fn_828C92E8(auStack_90,auStack_a0,auStack_a0);
    fn_8288C2E0(auStack_80,auStack_a0);
    auStack_60[0] = uVar3;
    fn_828C92E8(auStack_58,auStack_a0,auStack_a0);
    fn_828C9C30(auStack_58,auStack_90);
    fn_828C9BD0(&auStack_48,auStack_80);
    uStack_38 = uStack_70;
    uStack_30 = uStack_68;
    lVar4 = fn_828C8F90(param_1);
    if (lVar4 + 0x10 != 0) {
      fn_828C9CF0(lVar4 + 0x10,auStack_60);
    }
    fn_828CA708(&apuStack_9c,param_1,puVar5,lVar4);
    fn_828B22F0(&auStack_48);
    fn_8265CA20(auStack_48);
    fn_8288E4B0(&apuStack_9c,auStack_58,*puStack_54);
    fn_8265CA20(puStack_54);
    fn_828B22F0(auStack_80);
    fn_8265CA20(auStack_80[0]);
    fn_8288E4B0(&apuStack_9c,auStack_90,*puStack_8c);
    fn_8265CA20(puStack_8c);
    puVar5 = apuStack_9c;
  }
  return puVar5 + 6;
}
