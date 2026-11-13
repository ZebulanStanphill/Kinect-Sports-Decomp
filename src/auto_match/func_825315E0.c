extern int fn_82530740();
extern int fn_82530800();
extern int fn_82639EA8();
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296B8C;
extern unsigned int lbl_83296B94;
extern unsigned int lbl_83296B98;
extern unsigned int lbl_83296BBC;
extern unsigned int uRam83296b90;
extern unsigned int uRam83296b9c;
extern unsigned int uRam83296ba0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825315E0(unsigned __int64 param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = lbl_83296AE0;
  if (lbl_83296BBC != 0) {
    lbl_83296B8C = *(unsigned int *)(lbl_83296AE0 + 0xb4);
    uRam83296b90 = *(unsigned int *)(lbl_83296AE0 + 0xb8);
    lbl_83296B94 = *(unsigned int *)(lbl_83296AE0 + 0xbc);
    lbl_83296B98 = *(unsigned int *)(lbl_83296AE0 + 0xc0);
    uRam83296b9c = *(unsigned int *)(lbl_83296AE0 + 0xc4);
    uRam83296ba0 = *(unsigned int *)(lbl_83296AE0 + 200);
    dVar2 = (double)fn_82530740();
    dVar3 = (double)fn_82530800();
    if ((param_1 & 0xffffffff) != 0) {
      fn_82639EA8(param_1,0xffffffff83296b8c);
      iVar1 = lbl_83296AE0;
    }
    *(float *)(iVar1 + 0xac) = (float)(dVar2 / dVar3);
    lbl_83296BBC = 0;
  }
  return;
}

