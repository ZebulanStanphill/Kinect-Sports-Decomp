extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_826E4D70();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_826F3D68(unsigned __int64 param_1,unsigned int param_2,int *param_3,int param_4,unsigned __int64 param_5)

{
  int *piVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char uStack_34;
  
  uStack_48 = *(unsigned int *)(param_4 + 0x20);
  uStack_44 = *(unsigned int *)(param_4 + 0xc);
  uStack_40 = *(unsigned int *)(param_4 + 0x24);
  uStack_3c = *(unsigned int *)(param_4 + 0x2c);
  uStack_60 = 1;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_54 = 1;
  uStack_4c = 0;
  if ((*(char *)(param_4 + 0x44) != '\0') || (uStack_34 = 0, *(int *)(param_4 + 0x18) != 0)) {
    uStack_34 = 1;
  }
  uStack_38 = (unsigned int)param_5;
  piVar1 = *(int **)(*(int *)(param_4 + 8) + 0x10);
  if ((piVar1 != (int *)0x0) &&
     (uStack_50 = param_2, lVar2 = (**(int (***)())(*piVar1 + 4))(piVar1,&uStack_60), lVar2 != 0)) {
    uVar3 = fn_8267B890(param_5,0x1c,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_826E4D70(uVar3,lVar2,1);
    }
    if ((uVar3 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      fn_8267C4C8(uVar3);
      if (*param_3 != 0) {
        fn_82687270();
      }
      *param_3 = (int)uVar3;
      fn_82687270(uVar3);
      uVar4 = 1;
    }
    fn_8267C498(lVar2);
    return uVar4;
  }
  return 0;
}

