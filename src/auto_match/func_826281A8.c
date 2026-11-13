extern unsigned int *auStack_30;
extern int fn_827D96A0();
extern void *fn_827DDDD8();
extern int fn_827DDFB8();


unsigned __int64 fn_826281A8(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int auStack_30;
  
  puVar3 = *(unsigned int **)(param_1 + 0x34);
  puVar1 = *(unsigned int **)(param_1 + 0x38);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    iVar2 = (*(int (**)())(*param_2 + 4))(param_2,*puVar3);
    if (iVar2 != 0) {
      auStack_30 = fn_827D96A0(*puVar3);
      auStack_30 = auStack_30 & 0xffff;
      if (fn_827DDDD8(param_3,&auStack_30) == 0) {
        fn_827DDFB8(param_3,*puVar3);
      }
    }
  }
  return 0;
}

