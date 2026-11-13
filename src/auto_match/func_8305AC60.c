#define _uStack00000040 ((*(unsigned __int64*)&uStack00000040))
extern int fn_8305A5E8();
extern int fn_8305A6A0();
extern int fn_8305A7A8();
extern int fn_8305A9D0();
extern int fn_8305B970();
extern int fn_8305B9A0();
extern int fn_8305BB28();
extern int fn_8305BE58();
extern unsigned int lbl_8207F700;
extern unsigned int lbl_8217E370;
extern unsigned int uStack00000020;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


void fn_8305AC60(int *param_1,unsigned __int64 param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uStack00000020;
  double dStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned int uStack00000040;
  
  dVar5 = param_3 - lbl_8207F700;
  if (param_3 - lbl_8207F700 < lbl_8217E370) {
    dVar5 = lbl_8217E370;
  }
  uStack00000020 = param_2;
  dStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  _uStack00000040 = param_6;
  fn_8305A5E8(param_2,dVar5,*param_1);
  fn_8305A5E8(param_2,dVar5,*param_1);
  fn_8305B9A0(dVar5,uStack00000030,(unsigned __int64)*(unsigned int *)(*param_1 + 8) + 0x142c,600);
  puVar1 = (unsigned int *)*param_1;
  iVar3 = fn_8305B970((double)*puVar1,puVar1 + 3);
  dVar5 = (double)fn_8305BE58((double)(__int64)iVar3);
  uVar2 = uStack00000040;
  iVar3 = *param_1;
  *(float *)(puVar1[2] + 0x34) = (float)dVar5;
  uVar6 = uStack00000038;
  fn_8305A6A0(uStack00000038,iVar3);
  fn_8305A7A8(uVar6,*param_1,uVar2);
  puVar1 = (unsigned int *)*param_1;
  iVar4 = fn_8305BB28((double)*puVar1,puVar1 + 3);
  iVar3 = *param_1;
  *(float *)(puVar1[2] + 0x2c) = (float)(__int64)(iVar4 + 1);
  fn_8305A9D0(iVar3);
  return;
}

