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
extern void fn_8267C498(void *);
extern int fn_8268F7C0(int);
extern int fn_82724448(int);
extern void fn_827A2638(void *, int);
extern void fn_827A2EC8(void *, char *, int);
extern void fn_827A2F40(void *, int);
extern void *fn_827A52B0(int);
extern char lbl_820E975C[];

typedef struct Obj Obj;
typedef struct {
  char pad[0x40];
  char *(*get)(Obj *);
} Vtbl;
struct Obj {
  Vtbl *vt;
  char pad4[0x9c];
  char *a0;      /* 0xa0 */
  char pada4[0x44];
  int e8;        /* 0xe8 */
};

void fn_82725978(Obj *p)
{
  int *r;
  int k;
  char *q;

  if (*(int *)(p->a0 + 0x114) != 0) {
    r = fn_827A52B0(*(int *)(p->a0 + 0x114));
    if (r != 0) {
      r[1]++;
    }
    if (p->e8 != 0 && (k = fn_82724448(p->e8)) != 0) {
      fn_827A2638(r, k);
    }
    fn_827A2EC8(r, lbl_820E975C, -1);
    fn_827A2F40(r, fn_8268F7C0(*(int *)(p->a0 + 0x114)));
    q = p->vt->get(p);
    if (q != 0) {
      *(unsigned int *)(q + 0xb00) |= 0x400;
    }
    if (r != 0) {
      fn_8267C498(r);
    }
  }
}
