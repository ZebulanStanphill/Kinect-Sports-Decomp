extern int fn_830177C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


double fn_83005C68(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = lbl_821AAD20;
  if (*(int *)(param_1 + 0x44) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x44) + 8);
  }
  dVar3 = (double)fVar1;
  if ((*(unsigned int *)(param_1 + 0x40) >> 0x1e & 1) != 0) {
    dVar2 = (double)fn_830177C8(lbl_832642FC,param_1,0x1e,param_2);
    return (double)(float)(dVar2 + dVar3);
  }
  return dVar3;
}

