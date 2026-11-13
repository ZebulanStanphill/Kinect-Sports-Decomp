#define true 1
extern int fn_83031460();


unsigned __int64 fn_830308E8(int param_1,int param_2,unsigned __int64 *param_3)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0xe4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
LAB_8303091c:
      iVar3 = fn_83031460((unsigned int *)(param_1 + 0xe4),param_2,*param_3,
                                (unsigned __int64)*(unsigned int *)(param_3 + 1) << 0x20);
      uVar2 = 2;
      if (iVar3 != 0) {
        uVar2 = 1;
      }
      return uVar2;
    }
    if (puVar1[1] == param_2) {
      if (puVar1 + 2 != (unsigned int *)0x0) {
        puVar1[2] = *(unsigned int *)param_3;
        puVar1[3] = *(unsigned int *)((int)param_3 + 4);
        puVar1[4] = *(unsigned int *)(param_3 + 1);
        return 1;
      }
      goto LAB_8303091c;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

