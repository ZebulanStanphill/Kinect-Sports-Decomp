double fn_82D39918(int self,int param_2,int param_3)

{
  return (double)((float)*(unsigned short *)
                          ((*(int *)(self + 0x10) * param_3 + param_2) * 2 +
                          *(int *)(self + 0x60)) * *(float *)(self + 0x74) +
                 *(float *)(self + 0x70));
}

