extern int fn_82587C30();
extern unsigned int lbl_821954B0;
extern unsigned int lbl_82195658;
extern unsigned int lbl_821CA460;


int fn_825B7128(double param_1,double param_2,double param_3,int param_4)

{
  unsigned __int64 *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = &lbl_821954B0;
  dVar3 = (double)lbl_821CA460;
  dVar2 = (double)fn_82587C30((double)(float)((double)(__int64)param_4 * lbl_82195658),
                               (double)(float)(dVar3 / param_1));
  dVar3 = dVar2 * (double)(float)(param_3 * (double)*(float *)((int)puVar1 + 0x1a4)) +
          (double)(float)((double)(float)(param_2 - dVar3) * (double)*(float *)((int)puVar1 + 0x1a4)
                         );
  dVar2 = (double)puVar1[0xd];
  if ((dVar3 < (double)puVar1[0xd]) || (dVar2 = (double)puVar1[0x36], (double)puVar1[0x36] < dVar3))
  {
    dVar3 = dVar2;
  }
  return (int)dVar3;
}

