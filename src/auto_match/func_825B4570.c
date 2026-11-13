extern int fn_82563C38();
extern int fn_82571418();
extern int fn_825A7BE8();
extern int fn_825A7F68();
extern int fn_82D89E30();
extern int fn_82D93128();


void fn_825B4570(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  double dVar2;
  
  fn_82571418(param_1 + 0x2d0,*(unsigned int *)(param_1 + 0xd4),param_2,3,2,0,0);
  iVar1 = fn_82D89E30(*(unsigned int *)(param_1 + 0xd4));
  if (iVar1 == 0) {
    fn_825A7BE8((double)*(float *)(param_1 + 0x3e0),param_1 + 0x180,
                      *(unsigned int *)(param_1 + 0xd4));
    fn_825A7F68(param_1 + 0x180,*(unsigned int *)(param_1 + 0xd4),
                      *(unsigned int *)(param_1 + 0xdc));
  }
  dVar2 = (double)fn_82D93128((unsigned __int64)*(unsigned int *)(param_1 + 0xd4) + 0xe0);
  *(float *)(param_1 + 0xd0) = (float)dVar2;
  fn_82563C38(*(unsigned int *)(param_1 + 0xd4),param_1 + 0xb0,param_1 + 0xc0);
  *(unsigned int *)(param_1 + 0xf0) = 1;
  return;
}

