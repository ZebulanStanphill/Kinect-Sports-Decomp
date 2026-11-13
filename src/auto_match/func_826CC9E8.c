typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8269D300();
extern int fn_826A7720();
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_35;
extern unsigned int uStack_36;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_53;
extern unsigned int uStack_54;
extern unsigned int uStack_55;
extern unsigned int uStack_56;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_826CC9E8(int *param_1,int *param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char cVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned short uStack_58;
  unsigned char uStack_56;
  unsigned char uStack_55;
  unsigned char uStack_54;
  unsigned char uStack_53;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned short uStack_48;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned char uStack_44;
  unsigned char uStack_43;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned short uStack_38;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned char uStack_34;
  unsigned char uStack_33;

  if (*param_2 == 0x40) {
    uVar3 = (**(int (***)())(*param_1 + 0x6c))();
    if (((*param_3 & 1) == 0) && (iVar4 = fn_826A7720(param_2), iVar4 != 0)) {
      uStack_58 = (unsigned short)iVar4;
      stack_pair_60.second = 0;
      uStack_56 = 0;
      stack_pair_60.first = 0x20000;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      uVar3 = (**(int (***)())(*param_1 + 0x6c))(param_1,&stack_pair_60.first);
      if ((uVar3 & 0xff) != 0) {
        *param_3 = *param_3 | 1;
      }
    }
    iVar4 = (**(int (***)())(*param_1 + 0x40))(param_1);
    cVar5 = fn_8269D300(iVar4,param_1);
    if ((cVar5 == '\0') || (bVar1 = true, (*(unsigned short *)(iVar4 + 0xb00) & 1) == 0)) {
      bVar1 = false;
    }
    if (((bVar1) && ((*(short *)(param_2 + 2) == 0xd || (*(short *)(param_2 + 2) == 0x20)))) &&
       ((cVar5 = (**(int (***)())(*param_1 + 0xb8))(param_1), cVar5 != '\0' ||
        ((uVar2 = *(unsigned int *)(iVar4 + 0xb00) >> 0x1a & 3, uVar2 != 3 && (uVar2 == 1)))))) {
      stack_pair_50.second = 0;
      uStack_48 = 0;
      stack_pair_50.first = 0x400;
      uStack_46 = 0;
      uStack_45 = 0xff;
      uStack_44 = 0;
      uStack_43 = 0;
      (**(int (***)())(*param_1 + 0x6c))(param_1,&stack_pair_50.first);
      stack_pair_40.second = 0;
      stack_pair_40.first = 0x800;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_35 = 0xff;
      uStack_34 = 0;
      uStack_33 = 0;
      (**(int (***)())(*param_1 + 0x6c))(param_1,&stack_pair_40.first);
    }
  }
  else {
    uVar3 = (**(int (***)())(*param_1 + 0x6c))();
  }
  return uVar3;
}
