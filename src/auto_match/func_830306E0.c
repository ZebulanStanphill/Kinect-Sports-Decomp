#define true 1
extern int fn_83031460();
extern unsigned int uStack_18;


unsigned __int64 fn_830306E0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uStack_18;
  
  puVar1 = *(unsigned int **)(param_1 + 0xe4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
LAB_83030714:
      uStack_18 = uStack_18 & 0x7ffffff;
      iVar3 = fn_83031460((unsigned int *)(param_1 + 0xe4),param_2,(unsigned __int64)param_3 << 0x20,
                                (unsigned __int64)uStack_18 << 0x20);
      uVar2 = 2;
      if (iVar3 != 0) {
        uVar2 = 1;
      }
      return uVar2;
    }
    if (puVar1[1] == param_2) {
      if (puVar1 + 2 != (unsigned int *)0x0) {
        puVar1[2] = param_3;
        return 1;
      }
      goto LAB_83030714;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

