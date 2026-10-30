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
extern unsigned int lbl_8323A960;
extern unsigned int lbl_8323A964;
extern unsigned int KeTlsGetValue();
extern int KeTlsSetValue();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

typedef struct VT_82CE4338 {
  void (*f0)(void *, int);
} VT_82CE4338;

typedef struct Obj_82CE4338 {
  VT_82CE4338 *vt;
  short a;
  short rc;
} Obj_82CE4338;

typedef struct Lock_82CE4338 {
  int pad[2];
  int enabled;
  int count;
  int pad10[2];
  char cs[1];
} Lock_82CE4338;

void fn_82CE4338(char *p, int n, int stride)
{
  Lock_82CE4338 *l = (Lock_82CE4338 *)lbl_8323A960;
  if (l->enabled == 0 || KeTlsGetValue(lbl_8323A964) == 0x23df4554) {
    if (n > 0) {
      int i = n;
      do {
        Obj_82CE4338 *o = *(Obj_82CE4338 **)p;
        if (o->a != 0) {
          o->rc = o->rc - 1;
          if (o->rc == 0) o->vt->f0(o, 1);
        }
        i--;
        p += stride;
      } while (i != 0);
    }
  } else {
    if (KeTlsGetValue(lbl_8323A964) == 0x23df4554) {
      l->count = l->count + 1;
    } else {
      RtlEnterCriticalSection(l->cs);
      l->count = 1;
      KeTlsSetValue(lbl_8323A964, 0x23df4554);
    }
    if (n > 0) {
      int i = n;
      do {
        Obj_82CE4338 *o = *(Obj_82CE4338 **)p;
        if (o->a != 0) {
          o->rc = o->rc - 1;
          if (o->rc == 0) o->vt->f0(o, 1);
        }
        i--;
        p += stride;
      } while (i != 0);
    }
    l->count = l->count - 1;
    if (l->count <= 0) {
      KeTlsSetValue(lbl_8323A964, 0);
      RtlLeaveCriticalSection(l->cs);
    }
  }
}
