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
extern int fn_82250A18();
extern float *fn_82292AE8();
extern int fn_82512B70(void *);
extern int fn_825132E0(void *);
extern float lbl_821CC160;
extern unsigned int lbl_8219793C;
extern unsigned int lbl_832975B0;

typedef struct Obj_82246368 {
  void *vt;
  char pad[0x48 - 4];
  void *f48;
} Obj_82246368;

void fn_82246368(Obj_82246368 *param_1)
{
  float *pf;
  unsigned iVar1;

  param_1->vt = &lbl_8219793C;
  pf = fn_82292AE8();
  if (pf[0x5c / 4] == lbl_821CC160) {
    pf[0x5c / 4] = 100.0f;
  }
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  *(unsigned char *)(iVar1 + 4) = 0;
  if (param_1->f48 != 0) {
    fn_82512B70(param_1->f48);
    param_1->f48 = 0;
  }
  fn_825132E0(param_1);
}
