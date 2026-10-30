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
typedef struct { int first; int second; int third; } Pair_8229EC50;
typedef struct { void *f0; int f4; int f8; int fc; } Obj_8229EC50;
extern void fn_82273C88(Pair_8229EC50 *);
extern void fn_82273CD8(Pair_8229EC50 *, int);
extern void fn_8266F628(void *, int);
extern void fn_8266F640(void *, int);
extern void fn_82672C20(void *, const char *, Pair_8229EC50 *, int);

void fn_8229EC50(Obj_8229EC50 *o, int param_2)
{
  Pair_8229EC50 st;

  if (o->fc == 0) {
    st.first = 0;
    st.second = 0;
    fn_82273CD8(&st, 5);
    st.third = param_2;
    fn_8266F640(o->f0, 0);
    fn_8266F628(o->f0, 0);
    fn_82672C20(o->f0, "_root.mc_replaycaption.displayCaption", &st, 1);
    o->fc = 1;
    fn_82273C88(&st);
  }
}
