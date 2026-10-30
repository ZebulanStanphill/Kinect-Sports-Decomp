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
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_8223B8C8(void *);
extern void fn_8223B930(void *);
extern void fn_82240DB8(void *, int);
extern void *fn_8265C9E0(unsigned int);
extern void fn_8288B300(void *, int);
extern char lbl_82196AAC[];
extern char lbl_821970C0[];
extern char lbl_821AD588[];

unsigned int *fn_822387E0(unsigned int *param_1)
{
  unsigned int *o;
  unsigned int *vb;

  o = (unsigned int *)fn_8265C9E0(0x1d0);
  if (o != 0) {
    o[1] = 1;
    *o = (unsigned int)lbl_821AD588;
    o[2] = 1;
    vb = o + 3;
    if (vb != 0) {
      fn_8288B300(vb, 1);
      *vb = (unsigned int)lbl_82196AAC;
      fn_8223B930(vb + 0xd);
      fn_8223B8C8(vb + 0x27);
      fn_8223B930(vb + 0x41);
      fn_82240DB8(vb + 0x5b, 2);
      vb[0x5d] = 0;
      *(unsigned char *)(vb + 0x5e) = 0;
      vb[0x5b] = (unsigned int)lbl_821970C0;
    }
  } else {
    o = 0;
  }
  vb = o + 3;
  *param_1 = 0;
  param_1[1] = 0;
  if (o != 0) {
    if (fn_8223AAC0(o) != 0) {
      if (param_1[1] != 0) {
        fn_822315A0((void *)param_1[1]);
      }
      param_1[1] = (unsigned int)o;
      *param_1 = (unsigned int)vb;
    }
    fn_822315A0(o);
  }
  return param_1;
}
