typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


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
