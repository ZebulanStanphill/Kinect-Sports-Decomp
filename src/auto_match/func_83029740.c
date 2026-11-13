extern unsigned int *auStack_70;
extern int fn_82FF9C88();
extern int fn_83007AE8();
extern int fn_830292B0();
extern int fn_83029400();
extern int fn_830295A8();
extern unsigned int iStack_4c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_48;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


unsigned __int64
fn_83029740(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  float *pfVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned short *puStack0000001c;
  unsigned int uStack00000024;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_4c;
  unsigned int uStack_48;
  
  uVar3 = *(unsigned int *)(param_2 + 4);
  puStack0000001c = (unsigned short *)(param_2 + 8);
  uVar6 = 1;
  uVar5 = 0;
  uStack00000024 = param_3;
  if (uVar3 != 0) {
    do {
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      uVar1 = *puStack0000001c;
      uVar2 = puStack0000001c[1];
      pfVar4 = (float *)(puStack0000001c + 2);
      puStack0000001c = puStack0000001c + 4;
      dVar7 = (double)*pfVar4;
      uVar6 = fn_82FF9C88(&stack0x0000001c,&stack0x00000024,auStack_70);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      if (iStack_4c == 0) {
        uVar6 = fn_830292B0();
      }
      else {
        uVar6 = fn_83029400(param_1,uStack_68,uStack_6c,iStack_4c,uStack_48,uVar1,uVar2);
      }
      fn_830295A8(dVar7,param_1,uStack_68);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    if ((int)uVar6 != 1) {
      return uVar6;
    }
  }
  uVar6 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,param_5);
  if (((param_5 & 0xff) == 0) && ((int)uVar6 == 1)) {
    *(unsigned short *)(param_1 + 0x84) = *puStack0000001c;
    *(unsigned short *)(param_1 + 0x80) = puStack0000001c[1];
    *(unsigned short *)(param_1 + 0x82) = puStack0000001c[2];
  }
  return uVar6;
}

