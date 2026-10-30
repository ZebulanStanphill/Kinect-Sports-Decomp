extern unsigned char fn_8223AAC0(void *);
extern void *fn_82365BD8(void *, void *);
extern int fn_823FD1C8();
extern unsigned int lbl_821AD588;

typedef struct Sp_823FC1E8 { void *first; void *second; } Sp_823FC1E8;
typedef struct Obj_823FC1E8 { void *vt; int f4; int f8; } Obj_823FC1E8;

Obj_823FC1E8 *fn_823FC1E8(Obj_823FC1E8 *param_1, void *param_2, Sp_823FC1E8 *param_3, Sp_823FC1E8 *param_4,
                          void *param_5, Sp_823FC1E8 *param_6)
{
  void *iVar1;
  void *uVar2;
  void *uVar3;
  void *uVar4;
  struct { Sp_823FC1E8 s80; Sp_823FC1E8 s78; Sp_823FC1E8 s70; char auStack_68[8]; char auStack_60[16]; } L;

  param_1->f4 = 1;
  param_1->vt = &lbl_821AD588;
  param_1->f8 = 1;
  if ((char *)param_1 + 0xc != 0) {
    iVar1 = param_6->second;
    uVar2 = param_6->first;
    L.s70.first = 0;
    L.s70.second = 0;
    if (iVar1 != 0) {
      if (fn_8223AAC0(iVar1) != 0) {
        L.s70.second = iVar1;
        L.s70.first = uVar2;
      }
    }
    iVar1 = param_4->second;
    uVar2 = param_4->first;
    L.s78.first = 0;
    L.s78.second = 0;
    if (iVar1 != 0) {
      if (fn_8223AAC0(iVar1) != 0) {
        L.s78.second = iVar1;
        L.s78.first = uVar2;
      }
    }
    iVar1 = param_3->second;
    uVar2 = param_3->first;
    L.s80.first = 0;
    L.s80.second = 0;
    if (iVar1 != 0 && fn_8223AAC0(iVar1) != 0) {
      L.s80.second = iVar1;
      L.s80.first = uVar2;
    }
    fn_823FD1C8((char *)param_1 + 0xc, fn_82365BD8(L.auStack_60, param_2), &L.s80, &L.s78, fn_82365BD8(L.auStack_68, param_5), &L.s70);
  }
  return param_1;
}
