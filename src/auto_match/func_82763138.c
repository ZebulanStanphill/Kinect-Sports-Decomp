extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_8267B890();
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_826EB5F0();
extern int fn_826EE248();
extern int fn_826EE368();
extern int fn_826EEFE8();
extern int fn_8275EB28();
extern int fn_827603C0();
extern int fn_82762BE0();
extern int fn_82783F98();
extern int fn_827840E8();
extern int fn_827842B8();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_8200571C;
extern float lbl_82021534;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_80;


void fn_82763138(double param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int param_5)

{
  unsigned __int64 uVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  double dVar5;
  double dVar6;
  unsigned int uStack_80;
  unsigned int auStack_7c [3];
  unsigned char auStack_70 [4];
  unsigned char *pbStack_6c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if (param_3[8] == 0) {
    uVar1 = fn_8267B890(lbl_831E7E64,0x3b4,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_826EEFE8(uVar1,lbl_831E7E64);
    }
    auStack_7c[0] = 0x83;
    dVar6 = (double)(float)((double)lbl_8200571C / param_1);
    dVar5 = (double)((float)((double)*(float *)(param_5 + 0x10) * dVar6) * lbl_82021534);
    iVar4 = fn_8267BED0(param_3,0x70,auStack_7c);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_826EE248(dVar6,dVar5);
    }
    param_3[8] = iVar4;
    iVar4 = iVar3 + 8;
    fn_827842B8(iVar4);
    fn_82783F98(dVar5,iVar4);
    *(unsigned char *)(iVar3 + 0x4c) = *(unsigned char *)(param_3 + 9) >> 3 & 1;
    if ((*(unsigned char *)(param_3 + 9) & 0x10) != 0) {
      fn_826EB5F0(param_2,param_3[8],param_3 + 1);
    }
    fn_8275EB28(auStack_70,param_3);
    uStack_80 = 0;
    uVar2 = (**(int (***)())(*param_3 + 0x24))(param_3,&uStack_80);
    dVar6 = (double)lbl_82002C28;
    if (uStack_58 < uStack_54) {
      do {
        if ((*pbStack_6c & 7) == 0) {
          fn_827840E8((double)(float)(dVar5 * dVar6),iVar4);
          fn_826EE368(param_3[8],iVar4,uVar2,uStack_80,0,param_5);
          fn_827842B8(iVar4);
          fn_827603C0(auStack_70);
        }
        else {
          fn_82762BE0(auStack_70,iVar4);
        }
      } while (uStack_58 < uStack_54);
    }
    fn_827840E8((double)(float)(dVar5 * dVar6),iVar4);
    fn_826EE368(param_3[8],iVar4,uVar2,uStack_80,0,param_5);
    fn_8267C498(iVar3);
  }
  return;
}

