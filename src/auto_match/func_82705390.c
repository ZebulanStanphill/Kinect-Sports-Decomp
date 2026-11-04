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
extern int fn_82682D30(int, int, void *, unsigned);
extern __int64 fn_82693410(void);
extern int fn_82696330(void *);
extern int fn_826C7870(int, int, void *, int, int);
extern int fn_82700C78(int, int, void *, void *, int, int);
extern void *fn_82704A98(int, int);
typedef struct Obj Obj;
typedef struct { char pad[0x5c]; int (*f5c)(Obj *); } VT;
struct Obj { VT *vt; };
int fn_82705390(int param_1, int param_2, unsigned param_3, int param_4, int param_5)
{
  __int64 lVar1, lVar2;
  void *p;
  int uVar3;
  char auStack_50[16];
  if (*(unsigned *)(param_1 + 0x68) != 0) {
    lVar1 = fn_82693410();
    auStack_50[0] = 0;
    { int *cnt = (int *)(param_1 + 0xb88); *cnt = *cnt + 1; }
    if (*(unsigned *)(param_1 + 0xa00) == 0 || (p = fn_82704A98(param_1, param_2)) == 0) {
      uVar3 = fn_826C7870(*(int *)(param_1 + 0x68), param_2, auStack_50, param_4, param_5);
    } else {
      uVar3 = fn_82700C78(param_1, param_2, p, auStack_50, param_4, param_5);
    }
    if ((uVar3 & 0xff) != 0 && param_3 != 0) {
      Obj *o = *(Obj **)(param_1 + 0x68);
      fn_82682D30(param_1, o->vt->f5c(o), auStack_50, param_3);
    }
    fn_82696330(auStack_50);
    lVar2 = fn_82693410();
    { __int64 d = lVar2 - lVar1; *(__int64 *)(param_1 + 0xb58) = *(__int64 *)(param_1 + 0xb58) + d; }
    return uVar3;
  }
  return 0;
}
