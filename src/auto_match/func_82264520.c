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
extern unsigned char *fn_82250A18(void);
extern unsigned char *fn_8225F670(void);
extern int fn_8225FD88(int);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern int fn_82E1CB08(const char *, int, int);
extern int fn_82E1CB40(const char *, unsigned char);
extern int fn_82E1CB88(const char *, int);
extern int fn_82E1CCA8(void);
extern int fn_82E1CD08(void);
extern int lbl_83265A58[];
extern unsigned char lbl_832760AA;
extern unsigned char lbl_832760AB;
extern int lbl_832760B8;
extern int lbl_832760BC;
extern int lbl_83276584;
extern unsigned char *lbl_832975B0;

void fn_82264520(int param_1, int param_2, int param_3, int param_4)
{
  int counter;
  unsigned char *p;

  counter = lbl_83276584;
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0xf, 1) == 0 && fn_82E1CAD0(0xf) != 0) {
      fn_82E1CD08();
      fn_82E1CB88("MatchCounter", counter);
      fn_82E1CB88("PartyMode", param_1);
      fn_82E1CB08("Difficulty", fn_8225FD88(param_2), 0);
      fn_82E1CB88("Player0IsHuman", param_3);
      fn_82E1CB88("Player1IsHuman", param_4);
      p = lbl_832975B0 != 0 ? lbl_832975B0 : fn_82250A18();
      fn_82E1CB40("IsLiveGame", p[4]);
      fn_82E1CCA8();
    }
  }
  lbl_832760B8 = lbl_83265A58[0x1a8];
  lbl_832760BC = lbl_83265A58[0x1a9];
  lbl_832760AA = 1;
  lbl_832760AB = 0;
}
