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
extern void fn_8251FA58(void *);
extern void fn_82545950(void *);
extern void fn_82545A90(void *);
extern char lbl_821C1424[];
extern char lbl_821C164C[];

typedef struct {
  void *vtbl;
  int pad4, pad8;
  void *a;
  void *b;
  void *p[12];
} Obj_824E4D90;

void fn_824E4D90(Obj_824E4D90 *o)
{
  o->vtbl = lbl_821C164C;
  if (o->a != 0) {
    fn_82545950(&o->a);
  }
  if (o->b != 0) {
    fn_82545A90(&o->b);
  }
  if (o->p[0] != 0) {
    fn_8251FA58(o->p[0]);
    o->p[0] = 0;
  }
  if (o->p[1] != 0) {
    fn_8251FA58(o->p[1]);
    o->p[1] = 0;
  }
  if (o->p[2] != 0) {
    fn_8251FA58(o->p[2]);
    o->p[2] = 0;
  }
  if (o->p[3] != 0) {
    fn_8251FA58(o->p[3]);
    o->p[3] = 0;
  }
  if (o->p[4] != 0) {
    fn_8251FA58(o->p[4]);
    o->p[4] = 0;
  }
  if (o->p[5] != 0) {
    fn_8251FA58(o->p[5]);
    o->p[5] = 0;
  }
  if (o->p[6] != 0) {
    fn_8251FA58(o->p[6]);
    o->p[6] = 0;
  }
  if (o->p[7] != 0) {
    fn_8251FA58(o->p[7]);
    o->p[7] = 0;
  }
  if (o->p[8] != 0) {
    fn_8251FA58(o->p[8]);
    o->p[8] = 0;
  }
  if (o->p[9] != 0) {
    fn_8251FA58(o->p[9]);
    o->p[9] = 0;
  }
  if (o->p[10] != 0) {
    fn_8251FA58(o->p[10]);
    o->p[10] = 0;
  }
  if (o->p[11] != 0) {
    fn_8251FA58(o->p[11]);
    o->p[11] = 0;
  }
  o->vtbl = lbl_821C1424;
}
