extern void *memcpy(void *, const void *, unsigned int);
extern int abs(int);
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4E220();
extern int fn_82E4F2B8();
extern int fn_82EDE100();
extern int fn_82EDE770();
extern int fn_82EDE890();
extern int fn_82EDF308();
extern int fn_82EDF9F8();
extern int fn_82EDFFC0();

typedef struct Src { int p0; int w; int h; short p0c; unsigned short bpp; unsigned int kind; } Src;
typedef struct Q { int a; int b; int c; int d; } Q;

void fn_82E4FB68(int *param_1, Src *param_2, Src *param_3, int *param_4, Q param_5, int param_7)
{
  int uVar1;
  unsigned int pa;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;

  if (param_1 != 0) {
    if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
      *param_1 = 1;
    }
    else {
      *param_4 = 0;
      pa = fn_8265C940(0x428,0x248c8000);
      *param_4 = pa;
      if (pa == 0) {
        *param_1 = 2;
      }
      else {
        param_4[1] = 0;
        pa = fn_8265C940(0x428,0x248c8000);
        param_4[1] = pa;
        if (pa == 0) {
          *param_1 = 2;
          fn_8265C990(*param_4,0x248c8000);
          *param_4 = 0;
        }
        else {
          uVar3 = 0x28;
          if ((param_2->kind == 0) && (param_2->bpp == 8)) {
            uVar3 = 0x428;
          }
          else if (param_2->kind == 3) {
            uVar3 = 0x34;
          }
          memcpy((void *)*param_4,param_2,uVar3);
          uVar3 = 0x28;
          if ((param_3->kind == 0) && (param_3->bpp == 8)) {
            uVar3 = 0x428;
          }
          else if (param_3->kind == 3) {
            uVar3 = 0x34;
          }
          memcpy((void *)param_4[1],param_3,uVar3);
          param_4[0xe35] = 0;
          piVar4 = param_4 + 0xe41;
          fn_82EDFFC0(piVar4,&param_5);
          param_4[0xe20] = 0;
          param_4[0xe4f] = param_7 == 4 ? 2 : param_7;
          param_4[0xe53] = 0;
          param_4[0xe54] = 0;
          *param_1 = 0;
          if ((((*piVar4 == 0) && (param_4[0xe42] == 0)) && (param_4[0xe43] == 0)) &&
             (param_4[0xe44] == 0)) {
            param_4[0xe43] = param_2->w;
            param_4[0xe44] = abs(param_2->h);
          }
          if ((piVar4[2] - *piVar4 == param_2->w) &&
             (piVar4[3] - piVar4[1] == abs(param_2->h))) {
            param_4[0xe45] = 0;
          }
          else {
            param_4[0xe45] = 1;
          }
          if ((param_2->kind == 0) || (param_2->kind == 3)) {
            fn_82EDE100(param_4);
            iVar2 = fn_82EDE770(*param_4,param_4);
            *param_1 = iVar2;
            if (iVar2 != 0) {
              return;
            }
          }
          iVar2 = fn_82E4E220(param_4);
          *param_1 = iVar2;
          if (iVar2 == 0) {
            iVar2 = fn_82EDE890(param_4);
            *param_1 = iVar2;
            if (iVar2 == 0) {
              fn_82EDF9F8(param_4);
              iVar2 = fn_82E4F2B8(param_4);
              *param_1 = iVar2;
              if (iVar2 == 0) {
                fn_82EDF308(param_4);
              }
            }
          }
        }
      }
    }
  }
}
