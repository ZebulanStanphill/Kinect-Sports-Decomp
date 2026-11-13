extern unsigned int *auStack_78;
extern unsigned int *auStack_88;
extern unsigned int fStack_94;
extern int fn_8285DA18();
extern int fn_82862A00();
extern int fn_82862A08();
extern int fn_82862A18();
extern int fn_82862A20();
extern int fn_82862ED8();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201F840;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


unsigned __int64 fn_8285DB68(double param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  int iVar2;
  float *in_r7;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned int uStack_9c;
  struct { unsigned int first; float second; } stack_pair_98;

  unsigned char auStack_88 [16];
  unsigned char auStack_78 [24];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  uStack_9c = 0;
  stack_pair_98.first = 0;
  uVar3 = 0;
  stack_pair_98.second = lbl_8200133C;
  dVar4 = (double)fn_82862A18();
  if (param_1 <= dVar4) {
    fn_82862A00(param_3,&uStack_9c);
    fn_82862A08(param_3,&stack_pair_98.first);
    uVar5 = fn_82862A20(param_3);
    uVar6 = fn_82862A18(param_3);
    iVar2 = fn_82862ED8(uVar6,uVar5,param_2,uStack_9c);
    fVar1 = lbl_8201F840;
    if ((iVar2 == -1) || (iVar2 == 1)) {
      uVar3 = 3;
      if (iVar2 == -1) {
        uVar3 = 2;
      }
      dVar4 = (double)fn_82862A18(param_3);
      in_r7[1] = -stack_pair_98.second;
      *in_r7 = stack_pair_98.second;
      uStack_5c = lbl_821AAD20;
      uStack_58 = lbl_82002AE0;
      dVar7 = (double)lbl_8201DCB8;
      uStack_60 = lbl_821AAD20;
      in_r7[4] = fVar1;
      in_r7[2] = -stack_pair_98.second;
      in_r7[3] = stack_pair_98.second;
      uStack_54 = uStack_58;
      uStack_50 = uStack_5c;
      uStack_4c = uStack_58;
      in_r7[5] = (float)(dVar4 + dVar7);
      fn_8285DA18(uStack_9c,auStack_78,auStack_88,in_r7,&uStack_60);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

