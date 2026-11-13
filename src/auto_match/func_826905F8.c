//BODY
typedef struct TC_826905F8 {
  struct TC_826905F8 *bk;
  struct TC_826905F8 *fd;
  int pad[3];
  struct TC_826905F8 *parent;
  struct TC_826905F8 *child[2];
  unsigned int index;
} TC_826905F8;
typedef struct { unsigned int treemap; TC_826905F8 *treebins[32]; } M_826905F8;

void fn_826905F8(M_826905F8 *M, TC_826905F8 *X)
{
  TC_826905F8 *XP = X->parent;
  TC_826905F8 *R;
  if (X->bk != X) {
    TC_826905F8 *F = X->fd;
    R = X->bk;
    F->bk = R;
    R->fd = F;
  } else {
    TC_826905F8 **RP;
    if (((R = *(RP = &(X->child[1]))) != 0) ||
        ((R = *(RP = &(X->child[0]))) != 0)) {
      TC_826905F8 **CP;
      while ((*(CP = &(R->child[1])) != 0) ||
             (*(CP = &(R->child[0])) != 0)) {
        R = *(RP = CP);
      }
      *RP = 0;
    }
  }
  if (XP != 0) {
    TC_826905F8 **H = &M->treebins[X->index];
    if (X == *H) {
      if ((*H = R) == 0) {
        M->treemap &= ~(1U << X->index);
      }
    } else {
      XP->child[XP->child[0] != X] = R;
    }
    if (R != 0) {
      TC_826905F8 *C0;
      TC_826905F8 *C1;
      R->parent = XP;
      if ((C0 = X->child[0]) != 0) {
        R->child[0] = C0;
        C0->parent = R;
      }
      if ((C1 = X->child[1]) != 0) {
        R->child[1] = C1;
        C1->parent = R;
      }
    }
  }
}
