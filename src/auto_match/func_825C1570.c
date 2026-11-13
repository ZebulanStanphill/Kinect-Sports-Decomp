extern int fn_82535F50();
extern int fn_825529B0();
extern int fn_82552AD8();
extern int fn_82552B50();
extern float lbl_82005748;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D464C;
extern unsigned int stack0x00000020;


void fn_825C1570(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)ltcg_pool_0_0f;
  if (dVar4 < (double)*(float *)(param_2 + 0x54)) {
    dVar3 = -(double)(float)((double)lbl_831D464C * param_1 - (double)*(float *)(param_2 + 0x54));
    *(float *)(param_2 + 0x54) = (float)dVar3;
    if (dVar3 <= dVar4) {
      param_4 = 1;
    }
    else if (*(int *)(param_2 + 100) != 0) {
      puVar2 = (unsigned int *)(param_2 + 0x58);
      iVar1 = fn_825529B0(puVar2);
      if (iVar1 != 0) {
        fn_82535F50(*puVar2,&stack0x00000020);
        fn_82552AD8((double)(*(float *)(param_2 + 0x54) * lbl_82005748),puVar2,
                          0xffffffff821c8e40);
      }
    }
  }
  if ((param_4 != 0) && (*(int *)(param_2 + 100) != 0)) {
    iVar1 = fn_825529B0(param_2 + 0x58);
    if (iVar1 != 0) {
      fn_82552B50(param_2 + 0x58,1);
    }
    *(float *)(param_2 + 0x54) = (float)dVar4;
    *(unsigned int *)(param_2 + 100) = 0;
  }
  return;
}

