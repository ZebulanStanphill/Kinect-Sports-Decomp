#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_826F0610();
extern unsigned int iStack_30;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


void fn_826F14C8(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char *pcStack_50;
  unsigned int uStack_4c;
  struct { int first; int second; } stack_pair_48;

  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned int uStack_38;
  int iStack_30;
  char **ppcStack_2c;
  unsigned int *puStack_28;
  
  uVar3 = param_2[1];
  pcStack_50 = (char *)*param_2;
  uStack_4c = 0;
  if (uVar3 != 0) {
    do {
      if ((pcStack_50[uStack_4c] == '\0') || (pcStack_50[uStack_4c] == ':')) break;
      uStack_4c = uStack_4c + 1;
    } while (uStack_4c < uVar3);
  }
  if ((pcStack_50 != (char *)0x0) && (uStack_4c != 0)) {
    if ((*pcStack_50 == 's') && (pcStack_50[1] == 'w')) {
      uVar4 = uStack_4c + 1;
      if (uVar3 < uStack_4c + 1) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 - uVar4;
      pcStack_50 = pcStack_50 + uVar4;
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          if ((pcStack_50[uVar4] == '\0') || (pcStack_50[uVar4] == ':')) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      *(unsigned __int64 *)(param_1 + 0x10) = CONCAT44(pcStack_50,uVar4);
      if ((*(unsigned char *)(param_1 + 0xc) & 0x80) == 0) {
        uVar4 = *(int *)(param_1 + 0x14) + 1;
        if (uVar3 < *(int *)(param_1 + 0x14) + 1U) {
          uVar4 = uVar3;
        }
        uVar5 = 0;
        if (uVar3 != uVar4) {
          do {
            cVar1 = (pcStack_50 + uVar4)[uVar5];
            if ((cVar1 == '\0') || (cVar1 == ':')) break;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3 - uVar4);
        }
        *(unsigned __int64 *)(param_1 + 0x10) = CONCAT44(pcStack_50 + uVar4,uVar5);
      }
      *(unsigned char *)(param_1 + 0xc) = *(unsigned char *)(param_1 + 0xc) | 0x40;
    }
    else {
      iStack_30 = *(int *)(param_1 + 4);
      if (*(int *)(iStack_30 + 0x14) != 0) {
        ppcStack_2c = &pcStack_50;
        uStack_3c = 1;
        puStack_28 = &uStack_40;
        uStack_40 = (unsigned int)(*(unsigned char *)(param_1 + 0xc) >> 7);
        uStack_38 = 0;
        piVar2 = (int *)(**(int (***)())(**(int **)(iStack_30 + 0x14) + 4))
                                  (*(int **)(iStack_30 + 0x14),&iStack_30);
        if (piVar2 != (int *)0x0) {
          uVar3 = param_2[1];
          uVar4 = uStack_4c + 1;
          if (uVar3 < uStack_4c + 1) {
            uVar4 = uVar3;
          }
          stack_pair_48.second = uVar3 - uVar4;
          stack_pair_48.first = *param_2 + uVar4;
          if (stack_pair_48.second != 0) {
            (**(int (***)())(*piVar2 + 8))(piVar2,&stack_pair_48.first);
          }
          fn_826F0610(*(unsigned int *)(param_1 + 4),param_1,piVar2,1);
        }
      }
    }
  }
  return;
}

