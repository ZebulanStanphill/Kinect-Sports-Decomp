#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_830223C8();
extern int fn_83026420();
extern int fn_830265E0();
extern int fn_83026A78();
extern unsigned int lbl_8217C390;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_a0;


unsigned __int64 fn_8301BEA0(unsigned int *param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uStack_a0;
  int aiStack_94 [5];

  aiStack_94[1] = *(int *)(param_2 + 0xfc);
  puVar7 = param_1 + 0x58;
  iVar1 = *(int *)(aiStack_94[1] + 8);
  uStack_a0 = *(unsigned __int64 *)(*(int *)(iVar1 + 0x6c) + 0x20);
  uVar4 = fn_83026A78(param_2,puVar7,&uStack_a0,iVar1,*(unsigned short *)(param_1 + 1),*param_1);
  if ((int)uVar4 == 1) {
    uVar9 = 2;
    uVar11 = 0;
    puVar8 = (unsigned int *)(param_2 + 0x100);
    piVar10 = (int *)(iVar1 + 0xe8);
    uStack_a0 = CONCAT44(*param_1,(((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF));
    aiStack_94[2] = param_2;
    do {
      if (*piVar10 != -1) {
        puVar5 = (unsigned int *)fn_82FA5060(lbl_831BC770,0x24);
        if (puVar5 == (unsigned int *)0x0) {
          return 2;
        }
        *puVar5 = &lbl_8217C390;
        puVar5[1] = 0;
        iVar6 = fn_83026420(puVar5,piVar10,uVar11,iVar1,&uStack_a0);
        if (iVar6 == 1) {
          *puVar8 = puVar5;
          lVar2 = uVar9 << 2;
          uVar9 = uVar9 + 1 & 0xff;
          *(unsigned int **)((int)aiStack_94 + (int)lVar2 + 4) = puVar5;
        }
        else {
          fn_830265E0(puVar5);
          uVar3 = lbl_831BC770;
          (**(int (***)())*puVar5)(puVar5,0);
          fn_82FA5190(uVar3,puVar5);
        }
      }
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
      piVar10 = piVar10 + 4;
    } while ((uVar11 & 0xffffffff) < 4);
    uVar4 = fn_830223C8(param_2 + 0xc0,puVar7,&uStack_a0);
    if ((int)uVar4 == 1) {
      iVar1 = param_1[0x68];
      uVar11 = uVar9 + 1 & 0xff;
      *(int *)((int)aiStack_94 + (int)(uVar9 << 2) + 4) = param_2 + 0xc0;
      if ((iVar1 != 0) ||
         (uVar4 = fn_830223C8(param_1 + 0x66,puVar7,&uStack_a0), (int)uVar4 == 1)) {
        while (uVar11 = uVar11 + 0xff & 0xff, uVar11 != 0) {
          iVar1 = (int)(uVar11 << 2);
          piVar10 = *(int **)((int)aiStack_94 + iVar1 + 4);
          (**(int (***)())(*piVar10 + 0x1c))(piVar10,*(unsigned int *)((int)aiStack_94 + iVar1));
        }
      }
    }
  }
  return uVar4;
}
