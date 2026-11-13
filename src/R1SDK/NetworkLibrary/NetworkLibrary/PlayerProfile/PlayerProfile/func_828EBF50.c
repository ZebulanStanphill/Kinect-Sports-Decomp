extern unsigned int *auStack_80;
extern int fn_825089A0();
extern int fn_8251C390();
extern int fn_828EAFD8();
extern int fn_828EB1E8();
extern int fn_828EB278();
extern int fn_828EB7C8();
extern int fn_829E53B0();
extern unsigned int iStack_8c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_90;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_828EBF50(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_90;
  int iStack_8c;
  unsigned char auStack_80 [24];
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned int uStack_50;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  fn_8251C390(auStack_80,0xffffffff82027528,0x4d4);
  piVar3 = (int *)fn_825089A0();
  iVar4 = (**(int (***)())(*piVar3 + 0x3c))(piVar3,1,0,param_2,0,0,uStack_68,uStack_60);
  uVar1 = fn_828EB278();
  uStack_90 = *(unsigned int *)(iVar4 + 0x54);
  iStack_8c = iVar4;
  uVar2 = fn_828EB1E8(uVar1,&uStack_90);
  fn_828EAFD8(&uStack_90,uVar1,uVar2,0);
  uVar1 = fn_828EB7C8();
  uStack_90 = *(unsigned int *)(iVar4 + 0x54);
  iStack_8c = iVar4;
  uVar2 = fn_828EB1E8(uVar1,&uStack_90);
  fn_828EAFD8(&uStack_90,uVar1,uVar2,0);
  fn_829E53B0(auStack_80);
  return iVar4;
}

