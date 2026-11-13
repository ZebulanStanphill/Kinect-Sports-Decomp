extern int fn_82809CB8();
extern int fn_82809E58();
extern int fn_8284D780();
extern int fn_828509F0();
extern int fn_82850DB8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8284F6F8(int param_1,int *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  __int64 lStack_38;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != -1) {
    fn_8284D780(*(unsigned int *)(param_1 + 4),&uStack_40);
    fn_828509F0(uStack_40,piVar1[0xe],&uStack_3c);
    dVar2 = (double)fn_82809CB8((double)(float)param_2[0x32]);
    lStack_38 = (__int64)(int)dVar2;
    dVar3 = (double)fn_82809CB8((double)(float)param_2[0x33]);
    lStack_38 = (__int64)(int)dVar3;
    dVar4 = (double)fn_82809E58((double)(float)param_2[0x34]);
    lStack_38 = (__int64)(int)dVar4;
    dVar5 = (double)fn_82809E58((double)(float)param_2[0x35]);
    lStack_38 = (__int64)(int)dVar5;
    fn_82850DB8(uStack_3c,(int)dVar2,(int)dVar3,(int)dVar4,(int)dVar5,*(unsigned int *)(param_1 + 8))
    ;
  }
  return;
}

