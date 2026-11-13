typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269D300();
extern int fn_826A76D0();
extern int fn_82700248();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;
extern unsigned int uStack_63;
extern unsigned int uStack_64;
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_73;
extern unsigned int uStack_74;
extern unsigned int uStack_75;
extern unsigned int uStack_76;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_83;
extern unsigned int uStack_84;
extern unsigned int uStack_85;
extern unsigned int uStack_86;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_827187F8(int *param_1,int *param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  __int64 lVar6;
  int aiStack_a0;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned short uStack_88;
  unsigned char uStack_86;
  unsigned char uStack_85;
  unsigned char uStack_84;
  unsigned char uStack_83;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned short uStack_78;
  unsigned char uStack_76;
  unsigned char uStack_75;
  unsigned char uStack_74;
  unsigned char uStack_73;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned short uStack_68;
  unsigned char uStack_66;
  unsigned char uStack_65;
  unsigned char uStack_64;
  unsigned char uStack_63;
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar3 = (**(int (***)())(*param_1 + 0x5c))();
  fn_826A76D0(&aiStack_a0,param_2,iVar3 + 0x78);
  piVar4 = (int *)(**(int (***)())(*param_1 + 0x40))(param_1);
  if (*(int *)(aiStack_a0 + 0x10) != 0) {
    auStack_60[0] = 0;
    if ((((*param_2 == 0x40) || (*param_2 == 0x80)) &&
        (cVar5 = (**(int (***)())(param_1[0x1a] + 0x2c))
                           (param_1 + 0x1a,iVar3 + 0x78,&aiStack_a0,auStack_60), cVar5 != '\0')) &&
       (5 < *(unsigned char *)(iVar3 + 0x7c))) {
      cVar5 = fn_8269D300(piVar4,param_1);
      if ((cVar5 == '\0') || (bVar1 = true, (*(unsigned short *)(piVar4 + 0x2c0) & 1) == 0)) {
        bVar1 = false;
      }
      if ((bVar1) && (iVar3 = fn_82700248(piVar4 + 0x28b,4), iVar3 != 0)) {
        iStack_4c = param_2[1];
        iStack_48 = param_2[2];
        iStack_44 = param_2[3];
        *(unsigned int *)(iVar3 + 4) = 2;
        param_1[1] = param_1[1] + 1;
        if (*(int *)(iVar3 + 8) != 0) {
          fn_8267C498();
        }
        *(int **)(iVar3 + 8) = param_1;
        if (*(int *)(iVar3 + 0xc) != 0) {
          fn_8267C498();
        }
        *(unsigned int *)(iVar3 + 0xc) = 0;
        *(unsigned int *)(iVar3 + 0x10) = uStack_50;
        *(int *)(iVar3 + 0x14) = iStack_4c;
        *(int *)(iVar3 + 0x18) = iStack_48;
        *(int *)(iVar3 + 0x1c) = iStack_44;
      }
    }
    fn_82696330(auStack_60);
  }
  if (*param_2 == 0x40) {
    if ((*param_3 & 1) == 0) {
      uStack_88 = *(unsigned short *)(param_2 + 2);
      uStack_86 = *(unsigned char *)((int)param_2 + 10);
      uStack_90 = 0x20000;
      uStack_8c = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      cVar5 = (**(int (***)())(*param_1 + 0xe8))(param_1,&uStack_90);
      if (cVar5 != '\0') {
        *param_3 = *param_3 | 1;
      }
    }
    cVar5 = fn_8269D300(piVar4,param_1);
    if ((cVar5 == '\0') || (bVar1 = true, (*(unsigned short *)(piVar4 + 0x2c0) & 1) == 0)) {
      bVar1 = false;
    }
    if (((bVar1) && ((*(short *)(param_2 + 2) == 0xd || (*(short *)(param_2 + 2) == 0x20)))) &&
       ((cVar5 = (**(int (***)())(*param_1 + 0xb8))(param_1), cVar5 != '\0' ||
        ((uVar2 = (unsigned int)piVar4[0x2c0] >> 0x1a & 3, uVar2 != 3 && (uVar2 == 1)))))) {
      stack_pair_80.second = 0;
      uStack_78 = 0;
      stack_pair_80.first = 0x400;
      uStack_76 = 0;
      uStack_75 = 0xff;
      uStack_74 = 0;
      uStack_73 = 0;
      (**(int (***)())(*param_1 + 0xe8))(param_1,&stack_pair_80.first);
      param_1[1] = param_1[1] + 1;
      (**(int (***)())(*piVar4 + 0x8c))((double)lbl_821AAD20,piVar4);
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_70 = 0x800;
      uStack_66 = 0;
      uStack_65 = 0xff;
      uStack_64 = 0;
      uStack_63 = 0;
      (**(int (***)())(*param_1 + 0xe8))(param_1,&uStack_70);
      fn_8267C498(param_1);
    }
  }
  lVar6 = (unsigned __int64)*(unsigned int *)(aiStack_a0 + 8) - 1;
  *(int *)(aiStack_a0 + 8) = (int)lVar6;
  if (lVar6 == 0) {
    fn_826944C8(aiStack_a0);
  }
  return 1;
}

