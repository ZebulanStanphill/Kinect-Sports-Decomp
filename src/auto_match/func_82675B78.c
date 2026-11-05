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
extern int fn_825486B8(void *);
extern void fn_8262FE50(void *);
extern void fn_8267A538(void *, int);

typedef struct Obj_82675B78 Obj_82675B78;
typedef struct { int pad[0xd8 / 4]; unsigned int f_d8; } Sub_82675B78;
typedef struct VT_82675B78 {
  int pad[0x44 / 4];
  void (*f44)(Obj_82675B78 *);
} VT_82675B78;
struct Obj_82675B78 {
  VT_82675B78 *vt;
  int pad4[6];
  Sub_82675B78 *sub;
  int pad20[2];
  void *p28;
  int pad2c;
  int f30;
};

int fn_82675B78(Obj_82675B78 *o, void *p)
{
  if (o->sub == 0 || o->sub->f_d8 == 0) {
    return 0;
  }
  o->vt->f44(o);
  if (p != 0) {
    o->p28 = p;
    if (fn_825486B8(p) != 0) {
      o->f30 = 1;
    } else {
      fn_8262FE50(p);
    }
  }
  fn_8267A538(o, 0);
  return 1;
}
