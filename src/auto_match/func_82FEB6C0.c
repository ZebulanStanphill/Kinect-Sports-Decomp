extern char lbl_8326434C[];
extern int fn_82FA5190();
extern int fn_8301A7B8();
extern float lbl_82005328;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


unsigned int fn_82FEB6C0(unsigned int param_1,int param_2,float *param_3,float *param_4)

{
  unsigned int uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  unsigned int uVar4;
  
  RtlEnterCriticalSection(lbl_8326434C);
  puVar5 = (unsigned int *)fn_8301A7B8(lbl_832642EC,param_1);
  if (puVar5 == (unsigned int *)0x0) {
    RtlLeaveCriticalSection(lbl_8326434C);
    return 0xf;
  }
  {
    fVar2 = lbl_82005328;
    *param_3 = (float)*(unsigned char *)((int)puVar5 + param_2 + 0x40) * lbl_82005328;
    *param_4 = (float)*(unsigned char *)((int)puVar5 + param_2 + 0x48) * fVar2;
    uVar1 = puVar5[0x17];
    puVar5[0x17] = (int)uVar1 - 1;
    if ((int)puVar5[0x17] <= 0) {
      uVar3 = lbl_831BC768;
      (*(int (**)())*puVar5)(puVar5,0);
      fn_82FA5190(uVar3,puVar5);
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    uVar4 = 1;
  }
  return uVar4;
}

