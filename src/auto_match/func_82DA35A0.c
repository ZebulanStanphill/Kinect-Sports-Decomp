struct Cb;
typedef struct CbVT { void *s[3]; void (*f0c)(struct Cb *, void *); } CbVT;
typedef struct Cb { CbVT *vt; } Cb;
typedef struct PVec { Cb **data; int size; } PVec;
typedef struct Item { char pad[0x38]; PVec v; } Item;
typedef struct IVec { Item **data; int size; } IVec;
typedef struct Mgr { char pad[0x28]; IVec items; char pad2[0x1d0 - 0x30]; char sub[1]; } Mgr;
typedef struct Host { int p0; int p4; int p8; Mgr *mgr; } Host;

void fn_82DA35A0(Host *param_1)
{
  Mgr *m = param_1->mgr;
  IVec *iv = &m->items;
  int i;
  int j;
  i = 0;
  if (0 < iv->size) {
    int off1 = 0;
    do {
      Item *it = *(Item **)((char *)iv->data + off1);
      PVec *pv = &it->v;
      j = 0;
      if (0 < pv->size) {
        int off2 = 0;
        do {
          Cb *cb = *(Cb **)((char *)pv->data + off2);
          cb->vt->f0c(cb, param_1->mgr->sub);
          j = j + 1;
          off2 = off2 + 4;
        } while (j < pv->size);
      }
      i = i + 1;
      off1 = off1 + 4;
    } while (i < iv->size);
  }
}
