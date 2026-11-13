extern unsigned int *auStack_30;
extern int fn_82522ED8();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F6328();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_82326810(int param_1)

{
  unsigned int *puVar1;
  double dVar2;
  double dVar3;
  unsigned char auStack_30 [48];
  
  fn_8255F880(auStack_30,param_1 + 0x40);
  puVar1 = (unsigned int *)fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_30);
  dVar3 = (double)*(float *)(param_1 + 0x48);
  dVar2 = (double)fn_827F6328();
  dVar2 = (double)(float)(dVar2 * (double)(float)((double)lbl_821CA460 / dVar3));
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,0);
    fn_82522ED8(puVar1);
  }
  return dVar2;
}

