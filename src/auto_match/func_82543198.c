extern int fn_82543308();
extern int fn_82543440();
extern int fn_82543628();
extern int fn_82543940();
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637FF0();
extern int fn_82639F78();


void fn_82543198(unsigned int *param_1,unsigned __int64 param_2,int *param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = (unsigned __int64)*param_1;
  uVar3 = (unsigned __int64)*(unsigned int *)(*param_1 + 0x3244);
  uVar1 = (unsigned __int64)*(unsigned int *)param_3[3];
  if (uVar3 != 0) {
    fn_8262FE50(uVar3);
  }
  if (uVar3 != (uVar1 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82631578(uVar2);
  }
  if (uVar3 != 0) {
    fn_8262FEC8(uVar3);
  }
  if (param_1[0xb] != param_3[6]) {
    fn_82543440(param_1,param_2);
    param_1[0xb] = param_3[6];
  }
  if ((unsigned int *)param_1[9] != (unsigned int *)param_3[4]) {
    if (param_4 == 3) {
      fn_82637FF0(*param_1,*(unsigned int *)param_3[4]);
    }
    param_1[9] = param_3[4];
  }
  if (param_1[10] != param_3[5]) {
    fn_82543628(param_1,param_2);
    param_1[10] = param_3[5];
  }
  uVar2 = (unsigned __int64)*param_1;
  uVar3 = (unsigned __int64)*(unsigned int *)(*param_1 + 0x3248);
  uVar1 = (unsigned __int64)*(unsigned int *)param_3[2];
  if (uVar3 != 0) {
    fn_8262FE50(uVar3);
  }
  if (uVar3 != (uVar1 & 0xffffffff)) {
    fn_82631920(uVar2);
  }
  if (uVar3 != 0) {
    fn_8262FEC8(uVar3);
  }
  if (param_1[5] != param_3[1]) {
    fn_82543308(param_1,param_2);
    param_1[5] = param_3[1];
  }
  param_1[6] = 0xffffffff;
  fn_82639F78(*param_1,0,*(unsigned int *)*param_3,0,((unsigned int *)*param_3)[1],1);
  fn_82543940(param_1,param_3[7]);
  return;
}

