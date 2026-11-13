extern int fn_8267C498();
extern int fn_82715DE8();
extern int fn_82715E48();
extern int fn_82715EA8();
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_63;
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_73;
extern unsigned int uStack_75;
extern unsigned int uStack_76;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_83;
extern unsigned int uStack_85;
extern unsigned int uStack_86;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_93;
extern unsigned int uStack_95;
extern unsigned int uStack_96;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a3;
extern unsigned int uStack_a4;
extern unsigned int uStack_a5;
extern unsigned int uStack_a6;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b3;
extern unsigned int uStack_b4;
extern unsigned int uStack_b5;
extern unsigned int uStack_b6;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c3;
extern unsigned int uStack_c5;
extern unsigned int uStack_c6;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82715F40(unsigned char param_1,int param_2)

{
  unsigned char bVar1;
  int *piVar2;
  int * apiStack_e0;
  struct { unsigned int first; unsigned int second; } stack_pair_d0;

  unsigned short uStack_c8;
  unsigned char uStack_c6;
  unsigned char uStack_c5;
  char cStack_c4;
  unsigned char uStack_c3;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned short uStack_b8;
  unsigned char uStack_b6;
  unsigned char uStack_b5;
  unsigned char uStack_b4;
  unsigned char uStack_b3;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned short uStack_a8;
  unsigned char uStack_a6;
  unsigned char uStack_a5;
  unsigned char uStack_a4;
  unsigned char uStack_a3;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned short uStack_98;
  unsigned char uStack_96;
  unsigned char uStack_95;
  char cStack_94;
  unsigned char uStack_93;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned short uStack_88;
  unsigned char uStack_86;
  unsigned char uStack_85;
  char cStack_84;
  unsigned char uStack_83;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned short uStack_78;
  unsigned char uStack_76;
  unsigned char uStack_75;
  char cStack_74;
  unsigned char uStack_73;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned short uStack_68;
  unsigned char uStack_66;
  unsigned char uStack_65;
  char cStack_64;
  unsigned char uStack_63;
  int *apiStack_60 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned short uStack_48;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned char uStack_44;
  unsigned char uStack_43;

  fn_82715DE8(&apiStack_e0);
  fn_82715E48(apiStack_60,param_2);
  piVar2 = apiStack_e0;
  if ((*(unsigned int *)(param_2 + 0x10) & 1) == 0) goto LAB_827161ac;
  if ((*(unsigned char *)(param_2 + 0x20) & 0x20) == 0) {
    if (apiStack_60[0] == apiStack_e0) {
      if (apiStack_e0 != (int *)0x0) {
        cStack_74 = *(char *)((int)apiStack_e0 + 0x93);
        *(char *)((int)apiStack_e0 + 0x93) = cStack_74 + '\x01';
        uStack_80 = 0x8000;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_76 = 0;
        uStack_73 = 0;
        uStack_75 = param_1;
        (**(int (***)())(*apiStack_e0 + 0xe8))(apiStack_e0,&uStack_80);
      }
      bVar1 = *(unsigned char *)(param_2 + 0x20) | 0x20;
LAB_82716060:
      *(unsigned char *)(param_2 + 0x20) = bVar1;
    }
  }
  else if (apiStack_60[0] != apiStack_e0) {
    if (apiStack_e0 != (int *)0x0) {
      if (*(char *)((int)apiStack_e0 + 0x93) == '\0') {
        cStack_94 = -1;
      }
      else {
        cStack_94 = *(char *)((int)apiStack_e0 + 0x93) + -1;
        *(char *)((int)apiStack_e0 + 0x93) = cStack_94;
      }
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_96 = 0;
      uStack_a0 = 0x10000;
      uStack_93 = 0;
      uStack_95 = param_1;
      (**(int (***)())(*apiStack_e0 + 0xe8))(apiStack_e0,&uStack_a0);
    }
    bVar1 = *(unsigned char *)(param_2 + 0x20) & 0xdf;
    goto LAB_82716060;
  }
  if (apiStack_e0 == (int *)0x0) {
LAB_82716078:
    if ((apiStack_60[0] != (int *)0x0) && (apiStack_60[0] != apiStack_e0)) {
      if (((unsigned int)apiStack_60[0][0x23] >> 0xd & 1) != 0) {
        apiStack_60[0][1] = apiStack_60[0][1] + 1;
        if (apiStack_e0 != (int *)0x0) {
          fn_8267C498(apiStack_e0);
        }
        cStack_c4 = *(char *)((int)apiStack_60[0] + 0x93);
        *(char *)((int)apiStack_60[0] + 0x93) = cStack_c4 + '\x01';
        stack_pair_d0.first = 0x8000;
        stack_pair_d0.second = 0;
        uStack_c8 = 0;
        uStack_c6 = 0;
        uStack_c3 = 0;
        uStack_c5 = param_1;
        (**(int (***)())(*apiStack_60[0] + 0xe8))(apiStack_60[0],&stack_pair_d0.first);
        *(unsigned char *)(param_2 + 0x20) = *(unsigned char *)(param_2 + 0x20) | 0x20;
        piVar2 = apiStack_60[0];
      }
    }
  }
  else if (((unsigned int)apiStack_e0[0x23] >> 0xd & 1) != 0) goto LAB_82716078;
  if (((*(unsigned int *)(param_2 + 0xc) & 1) == 0) && (piVar2 != (int *)0x0)) {
    if ((*(unsigned char *)(param_2 + 0x20) & 0x20) == 0) {
      if (((unsigned int)piVar2[0x23] >> 0xd & 1) == 0) {
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_b0 = 0x1000;
        uStack_a6 = 0;
        uStack_a3 = 0;
        uStack_a4 = 0;
        uStack_a5 = param_1;
        (**(int (***)())(*piVar2 + 0xe8))(piVar2,&uStack_b0);
      }
      fn_8267C498(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      uStack_b8 = 0;
      uStack_b6 = 0;
      uStack_b3 = 0;
      uStack_c0 = 0x800;
      uStack_b4 = 0;
      uStack_bc = 0;
      uStack_b5 = param_1;
      (**(int (***)())(*piVar2 + 0xe8))(piVar2,&uStack_c0);
    }
  }
LAB_827161ac:
  if ((*(unsigned int *)(param_2 + 0x10) & 1) == 0) {
    if (apiStack_60[0] != piVar2) {
      if (piVar2 != (int *)0x0) {
        if (*(char *)((int)piVar2 + 0x93) == '\0') {
          cStack_84 = -1;
        }
        else {
          cStack_84 = *(char *)((int)piVar2 + 0x93) + -1;
          *(char *)((int)piVar2 + 0x93) = cStack_84;
        }
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_86 = 0;
        uStack_90 = 0x4000;
        uStack_83 = 0;
        uStack_85 = param_1;
        (**(int (***)())(*piVar2 + 0xe8))(piVar2,&uStack_90);
      }
      if (apiStack_60[0] != (int *)0x0) {
        apiStack_60[0][1] = apiStack_60[0][1] + 1;
      }
      if (piVar2 != (int *)0x0) {
        fn_8267C498(piVar2);
      }
      if (apiStack_60[0] != (int *)0x0) {
        cStack_64 = *(char *)((int)apiStack_60[0] + 0x93);
        *(char *)((int)apiStack_60[0] + 0x93) = cStack_64 + '\x01';
        stack_pair_70.second = 0;
        uStack_68 = 0;
        uStack_63 = 0;
        stack_pair_70.first = 0x2000;
        uStack_66 = 0;
        uStack_65 = param_1;
        (**(int (***)())(*apiStack_60[0] + 0xe8))(apiStack_60[0],&stack_pair_70.first);
      }
      *(unsigned char *)(param_2 + 0x20) = *(unsigned char *)(param_2 + 0x20) | 0x20;
      piVar2 = apiStack_60[0];
    }
    if ((*(unsigned int *)(param_2 + 0xc) & 1) != 0) {
      if (piVar2 != (int *)0x0) {
        stack_pair_50.second = 0;
        uStack_48 = 0;
        uStack_46 = 0;
        uStack_43 = 0;
        stack_pair_50.first = 0x400;
        uStack_44 = 0;
        uStack_45 = param_1;
        (**(int (***)())(*piVar2 + 0xe8))(piVar2,&stack_pair_50.first);
      }
      *(unsigned char *)(param_2 + 0x20) = *(unsigned char *)(param_2 + 0x20) | 0x20;
    }
  }
  fn_82715EA8(param_2,piVar2);
  if (apiStack_60[0] != (int *)0x0) {
    fn_8267C498(apiStack_60[0]);
  }
  if (piVar2 != (int *)0x0) {
    fn_8267C498(piVar2);
  }
  return;
}
