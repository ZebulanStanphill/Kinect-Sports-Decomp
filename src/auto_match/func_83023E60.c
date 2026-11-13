#define true 1
extern unsigned int *auStack_88;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEC150();
extern int fn_82FEC160();
extern int fn_830137C8();
extern int fn_83025208();
extern int fn_83025248();
extern int fn_830252F0();
extern int fn_83025300();
extern int fn_8303B290();
extern unsigned int iStack_80;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_83023E60(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  char cVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  int *piVar13;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char auStack_88 [5];
  char cStack_83;
  int iStack_80;
  int *piStack_7c;
  char cStack_74;
  
  uVar12 = 1;
  uVar10 = 0;
  piVar11 = (int *)(param_1 + 0x24);
  do {
    piVar13 = piVar11 + -2;
    fn_83025208(0xffffffff832645b0,uVar10,&iStack_80);
    piVar1 = (int *)*piVar11;
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
      uVar3 = lbl_831BC770;
      puVar2 = (unsigned int *)piVar11[1];
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,0);
        fn_82FA5190(uVar3,puVar2);
        piVar11[1] = 0;
      }
      *piVar11 = 0;
    }
    *piVar13 = -1;
    if (piVar11[-1] != 0) {
      fn_830252F0(0xffffffff832645b0);
      fn_82FEC150();
      (**(int (***)())(*(int *)piVar11[-1] + 0x10))((int *)piVar11[-1],0xffffffff831bc7fc);
      piVar11[-1] = 0;
      fn_82FEC160();
    }
    if (iStack_80 != -1) {
      uVar12 = fn_830137C8(0xffffffff831bc7fc,iStack_80,piVar11);
      if ((int)uVar12 != 1) {
        return uVar12;
      }
      uVar4 = (**(int (***)())(*piStack_7c + 8))(piStack_7c,0xffffffff831bc7fc);
      piVar11[-1] = (int)uVar4;
      if ((uVar4 & 0xffffffff) == 0) {
        uVar12 = 2;
      }
      else {
        uVar12 = fn_83025300(0xffffffff832645b0,uVar4,uVar10);
        if ((int)uVar12 == 1) {
          uVar8 = 0;
          for (uVar9 = *(unsigned int *)(param_1 + 0x84); uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
            uVar8 = uVar8 + 1;
          }
          uStack_90 = 48000;
          uStack_8c = (uVar8 & 7) << 5 | *(unsigned int *)(param_1 + 0x84) << 0xe | 0x2003;
          *piVar13 = iStack_80;
          uVar4 = fn_82FA5060(lbl_831BC770,0x10);
          if ((uVar4 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_8303B290(uVar4,param_1);
          }
          uVar12 = 2;
          piVar11[1] = iVar5;
          if (iVar5 != 0) {
            *(unsigned char *)(piVar11 + 2) = cStack_74 << 7 | *(unsigned char *)(piVar11 + 2) & 0x7f;
            uVar12 = (**(int (***)())(*(int *)*piVar11 + 0xc))((int *)*piVar11,auStack_88);
            if (cStack_83 == '\0') {
              if ((int)uVar12 == 1) {
                lVar7 = (unsigned __int64)(unsigned int)piVar11[1] + 4;
                if ((unsigned __int64)(unsigned int)piVar11[1] == 0) {
                  lVar7 = 0;
                }
                uVar12 = (**(int (***)())(*(int *)*piVar11 + 0x14))
                                   ((int *)*piVar11,0xffffffff831bc7fc,lVar7,piVar11[-1],&uStack_90)
                ;
                if (((int)uVar12 == 1) &&
                   (uVar12 = (**(int (***)())(*(int *)*piVar11 + 8))(), (int)uVar12 == 1))
                goto LAB_83024170;
              }
            }
            else {
              uVar12 = 2;
            }
          }
        }
      }
      piVar1 = (int *)*piVar11;
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
        *piVar11 = 0;
      }
      uVar3 = lbl_831BC770;
      puVar2 = (unsigned int *)piVar11[1];
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,0);
        fn_82FA5190(uVar3,puVar2);
        piVar11[1] = 0;
      }
      *piVar13 = -1;
      if (piVar11[-1] != 0) {
        fn_830252F0(0xffffffff832645b0);
        fn_82FEC150();
        (**(int (***)())(*(int *)piVar11[-1] + 0x10))((int *)piVar11[-1],0xffffffff831bc7fc);
        piVar11[-1] = 0;
        fn_82FEC160();
      }
    }
LAB_83024170:
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 5;
    if (3 < (uVar10 & 0xffffffff)) {
      cVar6 = fn_83025248(0xffffffff832645b0);
      *(unsigned char *)(param_1 + 0x6c) = cVar6 << 7 | *(unsigned char *)(param_1 + 0x6c) & 0x7f;
      return uVar12;
    }
  } while( true );
}

