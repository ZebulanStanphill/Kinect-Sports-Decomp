/* file_82AB18E8: functions fn_82AB18E8..fn_82AB3A98, grouped as one unit because they appear
 * to come from one original source file.
 *
 * The game was built with link-time code generation. Once a variadic function
 * that uses va_start has been compiled, every call to it reserves an outgoing
 * parameter area of 8*(n+8) bytes instead of 8*max(n,8), so its callers have a
 * larger frame and cannot tail-call. Those callers only match when the
 * variadic function is defined in the same unit, as it was in the original
 * file (see CONTRIBUTING.md).
 *
 * Compiled as one unit with /O1. Each function's declarations and
 * code sit between its @@ begin/end markers, in address order; km/try.py
 * replaces one region with a candidate to test it in place. */

typedef char *va_list;
typedef struct Printer Printer;
typedef struct PrinterVtbl {
  void (*vprint)(Printer *p, const char *fmt, va_list ap);
} PrinterVtbl;
struct Printer {
  PrinterVtbl *vtbl;
  unsigned char newline;
};
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
struct Obj_82AB2168 { int pad[2]; unsigned int flags; };
struct Obj_82AB21D8 { int pad[2]; unsigned int flags; };

/* @@ end of shared declarations */

/* @@ begin fn_82AB18E8 */
extern void __cdecl __va_start(va_list *, ...);

void fn_82AB18E8(Printer *p, const char *fmt, ...)
{
  va_list ap;
  p->newline = 0;
  __va_start(&ap, fmt);
  p->vtbl->vprint(p, fmt, ap);
}
/* @@ end fn_82AB18E8 */

/* @@ begin fn_82AB1948 */
extern unsigned char lbl_820D5FDC[];
extern unsigned char lbl_820D5FE8[];
extern unsigned char lbl_820D5FF4[];
extern unsigned char lbl_820D6000[];
extern unsigned char lbl_820D600C[];
extern unsigned char lbl_820D6018[];
extern unsigned char lbl_820D6024[];
extern unsigned char lbl_820D602C[];
extern unsigned char lbl_820D6040[];
extern unsigned char lbl_820D6050[];
extern unsigned char lbl_820D6060[];
extern unsigned char lbl_820D6070[];
extern unsigned char lbl_820D607C[];
extern unsigned char lbl_820D6088[];
extern unsigned char lbl_820D6094[];
extern unsigned char lbl_820D60A0[];
extern unsigned char lbl_820D610C[];
extern unsigned char lbl_820D6124[];
extern unsigned char lbl_820D612C[];
extern unsigned char lbl_820D6134[];
extern unsigned char lbl_820D613C[];
extern unsigned int lbl_820D6144;
extern unsigned char lbl_820D614C[];
extern unsigned char lbl_820D6158[];
extern unsigned char lbl_820D6164[];
extern unsigned char lbl_820D6170[];
extern unsigned char lbl_820D6178[];
extern unsigned char lbl_820D6180[];
extern unsigned char lbl_820D6188[];
extern unsigned char lbl_820D61CC[];
extern unsigned int lbl_820D61DC;
extern unsigned int lbl_820D61E4;
extern unsigned char lbl_820D61EC[];
extern unsigned char lbl_820D61F8[];
extern unsigned int lbl_820D6204;
extern unsigned char lbl_820D620C[];
extern unsigned char lbl_820D6218[];
extern unsigned char lbl_820D6220[];
extern unsigned char lbl_820D6228[];
extern unsigned int lbl_820D6230;
extern unsigned char lbl_820D6238[];
extern unsigned char lbl_820D6240[];
extern unsigned char lbl_820D6250[];
extern unsigned char lbl_820D6260[];
extern unsigned int lbl_821C7F20;
extern unsigned int lbl_821C7F28;
extern unsigned int lbl_821CBF70;
extern unsigned int lbl_821CE098;
extern unsigned int lbl_821CE09C;
extern unsigned int lbl_821CE0C4;
extern unsigned int lbl_821CE164;
extern unsigned int lbl_821CE17C;
extern unsigned int lbl_821CE190;
extern unsigned int lbl_821CE1A4;
extern unsigned int lbl_821CE1B0;
extern unsigned char lbl_821CE1B4[];
extern unsigned char lbl_821CE1BC[];
extern unsigned int lbl_821CE1EC;
extern unsigned int lbl_821CE20C;
extern unsigned int lbl_821CE220;
extern unsigned int lbl_821CE248;
extern unsigned int lbl_821CE2AC;
extern unsigned int lbl_821CE2B4;
extern unsigned char lbl_821CE2BC[];
extern unsigned int lbl_821CE2C4;
extern unsigned int lbl_821CE2C8;
extern unsigned char lbl_821CE2CC[];
extern unsigned char lbl_821CE2D4[];
extern unsigned int lbl_821CE2E4;
extern unsigned char lbl_821CE2E8[];
extern unsigned char lbl_821CE2F0[];
extern unsigned int lbl_821CE30C;
extern unsigned int lbl_821CE310;
extern unsigned int lbl_821CE3B0;
extern unsigned char lbl_821CE3C0[];
extern unsigned int lbl_83160640;
extern unsigned int lbl_83160644;
extern unsigned int lbl_83160648;
extern unsigned int lbl_8316064C;
extern unsigned int lbl_83160650;
extern unsigned int lbl_83160654;
extern unsigned int lbl_83160658;
extern unsigned int lbl_8316065C;
extern unsigned int lbl_83160660;
extern unsigned int lbl_83160664;
extern unsigned int lbl_83160668;
extern unsigned int lbl_8316066C;
extern unsigned int lbl_83160670;
extern unsigned int lbl_83160674;
extern unsigned int lbl_83160678;
extern unsigned int lbl_8316067C;
extern unsigned int lbl_83160680;
extern unsigned int lbl_83160684;
extern unsigned int lbl_83160688;
extern unsigned int lbl_8316068C;
extern unsigned int lbl_83160690;
extern unsigned int lbl_83160694;
extern unsigned int lbl_83160698;
extern unsigned int lbl_8316069C;
extern unsigned int lbl_831606A0;
extern unsigned int lbl_831606A4;
extern unsigned int lbl_831606A8;
extern unsigned int lbl_831606AC;
extern unsigned int lbl_831606B0;
extern unsigned int lbl_831606B4;
extern unsigned int lbl_831606B8;
extern unsigned int lbl_831607A8;
extern unsigned int lbl_831607AC;
extern unsigned int lbl_831607B0;
extern unsigned int lbl_831607B4;
extern unsigned int lbl_831607B8;
extern unsigned int lbl_831607BC;
extern unsigned int lbl_831607C0;
extern unsigned int lbl_831607C4;
extern unsigned int lbl_831607C8;
extern unsigned int lbl_831607CC;
extern unsigned int lbl_831607D0;
extern unsigned int lbl_831607D4;
extern unsigned int lbl_831607D8;
extern unsigned int lbl_831607DC;
extern unsigned int lbl_831607E0;
extern unsigned int lbl_831607E4;
extern unsigned int lbl_831607E8;
extern unsigned int lbl_831607EC;
extern unsigned int lbl_831607F0;
extern unsigned int lbl_831607F4;
extern unsigned int lbl_831607F8;
extern unsigned int lbl_831607FC;
extern unsigned int lbl_83160800;
extern unsigned int lbl_83160804;
extern unsigned int lbl_83160808;
extern unsigned int lbl_8316080C;
extern unsigned int lbl_83160810;
extern unsigned int lbl_83160814;
extern unsigned int lbl_83160818;
extern unsigned int lbl_8316081C;
extern unsigned int lbl_83160820;
extern unsigned int lbl_83160824;
extern unsigned int lbl_83160828;
extern unsigned int lbl_8316082C;
extern unsigned int lbl_83160830;
extern unsigned int lbl_83160834;
extern unsigned int lbl_83160838;
extern unsigned int lbl_8316083C;
extern unsigned int lbl_83160840;
extern unsigned int lbl_83160844;
extern unsigned int lbl_83160848;
extern unsigned int lbl_83160850;
extern unsigned int lbl_83160854;
extern unsigned int lbl_83160858;
extern unsigned int lbl_8316085C;
extern unsigned int lbl_83160860;
extern unsigned int lbl_83160864;
extern unsigned int lbl_83160868;
extern unsigned int lbl_8316086C;
extern unsigned int lbl_83160870;
extern unsigned int uRam831606bc;
extern unsigned int uRam831606c0;
extern unsigned int uRam831606c4;
extern unsigned int uRam831606c8;
extern unsigned int uRam831606cc;
extern unsigned int uRam831606d0;
extern unsigned int uRam831606d4;
extern unsigned int uRam831606d8;
extern unsigned int uRam831606dc;
extern unsigned int uRam831606e0;
extern unsigned int uRam831606e4;
extern unsigned int uRam831606e8;
extern unsigned int uRam831606ec;
extern unsigned int uRam831606f0;
extern unsigned int uRam831606f4;
extern unsigned int uRam831606f8;
extern unsigned int uRam831606fc;
extern unsigned int uRam83160700;
extern unsigned int uRam83160704;
extern unsigned int uRam83160708;
extern unsigned int uRam8316070c;
extern unsigned int uRam83160710;
extern unsigned int uRam83160714;
extern unsigned int uRam83160718;
extern unsigned int uRam8316071c;
extern unsigned int uRam83160720;
extern unsigned int uRam83160724;
extern unsigned int uRam83160728;
extern unsigned int uRam8316072c;
extern unsigned int uRam83160730;
extern unsigned int uRam83160734;
extern unsigned int uRam83160738;
extern unsigned int uRam8316073c;
extern unsigned int uRam83160740;
extern unsigned int uRam83160744;
extern unsigned int uRam83160748;
extern unsigned int uRam8316074c;
extern unsigned int uRam83160750;
extern unsigned int uRam83160754;
extern unsigned int uRam83160758;
extern unsigned int uRam8316075c;
extern unsigned int uRam83160760;
extern unsigned int uRam83160764;
extern unsigned int uRam83160768;
extern unsigned int uRam8316076c;
extern unsigned int uRam83160770;
extern unsigned int uRam83160774;
extern unsigned int uRam83160778;
extern unsigned int uRam8316077c;
extern unsigned int uRam83160780;
extern unsigned int uRam83160784;
extern unsigned int uRam83160788;
extern unsigned int uRam8316078c;
extern unsigned int uRam83160790;
extern unsigned int uRam83160794;
extern unsigned int uRam83160798;
extern unsigned int uRam8316079c;
extern unsigned int uRam831607a0;
extern unsigned int uRam831607a4;
extern unsigned int uRam83160874;
extern unsigned int uRam83160878;
extern unsigned int uRam8316087c;
extern unsigned int uRam83160880;
extern unsigned int uRam83160884;
extern unsigned int uRam83160888;
extern unsigned int uRam8316088c;
extern unsigned int uRam83160890;
extern unsigned int uRam83160894;
extern unsigned int uRam83160898;
extern unsigned int uRam8316089c;
extern unsigned int uRam831608a0;
extern unsigned int uRam831608a4;
extern unsigned int uRam831608a8;
extern unsigned int uRam831608ac;
extern unsigned int uRam831608b0;
extern unsigned int uRam831608b4;
extern unsigned int uRam831608b8;
extern unsigned int uRam831608bc;
extern unsigned int uRam831608c0;
extern unsigned int uRam831608c4;
extern unsigned int uRam831608c8;
extern unsigned int uRam831608cc;
extern unsigned int uRam831608d0;
extern unsigned int uRam831608d4;
extern unsigned int uRam831608d8;
extern unsigned int uRam831608dc;
extern unsigned int uRam831608e0;
extern unsigned int uRam831608e4;
extern unsigned int uRam831608e8;
extern unsigned int uRam831608ec;
extern unsigned int uRam831608f0;
extern unsigned int uRam831608f4;
extern unsigned int uRam831608f8;
extern unsigned int uRam831608fc;
extern unsigned int uRam83160900;
extern unsigned int uRam83160904;
extern unsigned int uRam83160908;
extern unsigned int uRam8316090c;
extern unsigned int uRam83160910;
extern unsigned int uRam83160918;
extern unsigned int uRam8316091c;
extern unsigned int uRam83160920;
extern unsigned int uRam83160924;
extern unsigned int uRam83160928;
extern unsigned int uRam8316092c;
extern unsigned int uRam83160930;
extern unsigned int uRam83160934;
extern unsigned int uRam83160938;
extern unsigned int uRam8316093c;
extern unsigned int uRam83160940;
extern unsigned int uRam83160944;
extern unsigned int uRam83160948;
extern unsigned int uRam8316094c;
extern unsigned int uRam83160950;
extern unsigned int uRam83160954;
extern unsigned int uRam83160958;
extern unsigned int uRam8316095c;
extern unsigned int uRam83160960;
extern unsigned int uRam83160964;
extern unsigned int uRam83160968;
extern unsigned int uRam8316096c;
extern unsigned int uRam83160970;
extern unsigned int uRam83160974;
extern unsigned int uRam83160978;
extern unsigned int uRam8316097c;
extern unsigned int uRam83160980;
extern unsigned int uRam83160984;
extern unsigned int uRam83160988;
extern unsigned int uRam8316098c;
extern unsigned int uRam83160990;
extern unsigned int uRam83160994;
extern unsigned int uRam83160998;
extern unsigned int uRam8316099c;
extern unsigned int uRam831609a0;
extern unsigned int uRam831609a4;
extern unsigned int uRam831609a8;
extern unsigned int uRam831609ac;
extern unsigned int uRam831609b0;
extern unsigned int uRam831609b4;
extern unsigned int uRam831609b8;
extern unsigned int uRam831609bc;
extern unsigned int uRam831609c0;
extern unsigned int uRam831609c4;
extern unsigned int uRam831609c8;
extern unsigned int uRam831609cc;
extern unsigned int uRam831609d0;
extern unsigned int uRam831609d4;
extern unsigned int uRam831609d8;
extern unsigned int uRam831609e0;
extern unsigned int uRam831609e4;
extern unsigned int uRam831609e8;
extern unsigned int uRam831609ec;
extern unsigned int uRam831609f0;
extern unsigned int uRam831609f4;
extern unsigned int uRam831609f8;
extern unsigned int uRam831609fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82AB1948(void)

{
  lbl_83160640 = &lbl_821CE310;
  lbl_83160644 = &lbl_821CE30C;
  lbl_83160648 = &lbl_821CBF70;
  lbl_8316064C = &lbl_821C7F28;
  lbl_83160650 = &lbl_820D6144;
  lbl_83160654 = lbl_820D613C;
  lbl_83160658 = lbl_820D6134;
  lbl_8316065C = lbl_820D612C;
  lbl_83160660 = lbl_820D6124;
  lbl_83160664 = lbl_821CE2F0;
  lbl_83160668 = lbl_821CE2E8;
  lbl_8316066C = &lbl_821CE2E4;
  lbl_83160670 = &lbl_820D61DC;
  lbl_83160674 = lbl_821CE2D4;
  lbl_83160678 = lbl_821CE2CC;
  lbl_83160688 = &lbl_821CE2B4;
  lbl_8316069C = lbl_820D6240;
  lbl_831606A0 = lbl_820D6188;
  lbl_831606A4 = lbl_820D6180;
  lbl_831606A8 = lbl_820D6178;
  lbl_83160680 = &lbl_821CE2C4;
  lbl_8316068C = &lbl_821CE2AC;
  uRam831606c8 = 2;
  lbl_831606AC = lbl_820D6170;
  lbl_831606B0 = &lbl_821CE248;
  lbl_83160690 = lbl_820D61CC;
  lbl_83160694 = lbl_820D6260;
  lbl_83160698 = lbl_820D6250;
  uRam831606dc = 1;
  uRam831606e0 = 1;
  lbl_8316067C = &lbl_821CE2C8;
  lbl_83160684 = lbl_821CE2BC;
  lbl_831606B4 = &lbl_821CE3B0;
  uRam831606e4 = 3;
  uRam831606e8 = 3;
  uRam831606c0 = 2;
  uRam831606cc = 2;
  uRam83160704 = 1;
  uRam83160708 = 2;
  uRam831606ec = 3;
  uRam831606f0 = 3;
  uRam831606d0 = 2;
  uRam831606d4 = 2;
  uRam831606d8 = 1;
  uRam831606bc = 2;
  uRam831606c4 = 2;
  lbl_831606B8 = 2;
  uRam831606f4 = 2;
  uRam831606f8 = 2;
  uRam831606fc = 3;
  uRam83160700 = 2;
  uRam8316070c = 2;
  uRam83160718 = 2;
  uRam83160724 = 2;
  uRam83160714 = 2;
  lbl_831607A8 = &lbl_821CE220;
  uRam83160720 = 2;
  uRam83160710 = 2;
  uRam8316071c = 2;
  uRam83160730 = 1;
  uRam8316073c = 1;
  uRam83160728 = 2;
  uRam83160748 = 1;
  uRam8316072c = 1;
  uRam83160734 = 1;
  uRam83160754 = 1;
  uRam83160760 = 1;
  uRam8316076c = 1;
  uRam83160778 = 1;
  uRam83160738 = 1;
  uRam83160740 = 1;
  uRam83160744 = 1;
  uRam8316074c = 1;
  uRam83160750 = 1;
  uRam83160758 = 1;
  uRam8316075c = 1;
  uRam83160764 = 1;
  uRam83160768 = 1;
  uRam83160770 = 1;
  uRam83160774 = 1;
  uRam8316077c = 1;
  lbl_831607C4 = lbl_820D6238;
  lbl_831607AC = lbl_820D6164;
  lbl_831607B4 = lbl_820D6158;
  lbl_831607B0 = &lbl_821CE20C;
  lbl_831607BC = &lbl_821CE1EC;
  lbl_831607C0 = &lbl_821C7F20;
  lbl_831607B8 = lbl_820D614C;
  uRam83160784 = 1;
  uRam83160790 = 1;
  uRam8316079c = 1;
  uRam83160780 = 1;
  uRam8316078c = 1;
  uRam83160798 = 1;
  lbl_831607C8 = &lbl_820D6230;
  uRam83160788 = 1;
  uRam83160794 = 1;
  uRam831607a0 = 1;
  lbl_831607CC = lbl_820D6228;
  lbl_831607D0 = lbl_820D6220;
  lbl_831607D4 = lbl_820D6218;
  lbl_831607D8 = lbl_821CE1BC;
  uRam831607a4 = 1;
  lbl_831607DC = lbl_821CE1B4;
  lbl_831607E0 = &lbl_821CE1B0;
  lbl_831607E8 = &lbl_821CE1A4;
  lbl_831607E4 = lbl_820D610C;
  lbl_831607F4 = &lbl_821CE190;
  lbl_831607EC = lbl_820D620C;
  lbl_83160800 = &lbl_821CE17C;
  lbl_831607F0 = &lbl_820D6204;
  lbl_831607F8 = lbl_820D61EC;
  lbl_83160808 = lbl_820D61F8;
  lbl_8316080C = &lbl_821CE164;
  lbl_831607FC = &lbl_820D61E4;
  lbl_83160804 = lbl_821CE3C0;
  lbl_83160850 = lbl_820D6000;
  lbl_83160810 = lbl_820D60A0;
  lbl_83160814 = lbl_820D6094;
  lbl_83160818 = lbl_820D6088;
  lbl_8316081C = lbl_820D607C;
  lbl_83160854 = lbl_820D5FDC;
  lbl_83160868 = &lbl_821CE09C;
  lbl_83160820 = lbl_820D6070;
  lbl_83160824 = lbl_820D6060;
  lbl_83160828 = lbl_820D6050;
  lbl_8316082C = lbl_820D6040;
  lbl_83160830 = lbl_820D602C;
  lbl_83160834 = lbl_820D6188;
  lbl_8316085C = lbl_820D5FF4;
  lbl_83160864 = lbl_820D5FE8;
  lbl_83160870 = 1;
  uRam83160874 = 1;
  uRam83160878 = 1;
  uRam8316087c = 1;
  lbl_8316086C = &lbl_821CE098;
  lbl_83160838 = lbl_820D6180;
  lbl_8316083C = lbl_820D6178;
  uRam83160880 = 1;
  lbl_83160840 = lbl_820D6170;
  lbl_83160844 = lbl_820D6024;
  lbl_83160848 = &lbl_821CE0C4;
  uRam83160898 = 1;
  uRam831608c0 = 1;
  uRam831608d0 = 1;
  uRam831608dc = 1;
  uRam831608e8 = 1;
  uRam8316089c = 1;
  uRam831608f4 = 0;
  uRam831608c4 = 1;
  uRam83160900 = 1;
  uRam8316090c = 1;
  uRam831608d4 = 1;
  uRam83160928 = 2;
  uRam8316092c = 2;
  uRam831608e0 = 1;
  uRam831608ec = 1;
  uRam831608f8 = 1;
  uRam83160904 = 1;
  uRam83160910 = 1;
  uRam83160934 = 1;
  uRam83160894 = 1;
  uRam831608c8 = 1;
  uRam831608cc = 1;
  uRam831608d8 = 1;
  uRam831608e4 = 1;
  uRam831608f0 = 1;
  uRam831608fc = 1;
  uRam83160908 = 1;
  uRam83160918 = 2;
  uRam8316091c = 2;
  uRam831608a0 = 1;
  lbl_83160858 = lbl_820D6018;
  lbl_83160860 = lbl_820D600C;
  uRam83160920 = 2;
  uRam83160924 = 2;
  uRam83160938 = 1;
  uRam83160884 = 1;
  uRam83160888 = 1;
  uRam8316088c = 1;
  uRam83160890 = 1;
  uRam831608a4 = 1;
  uRam831608a8 = 1;
  uRam831608b0 = 1;
  uRam831608ac = 1;
  uRam831608bc = 1;
  uRam831608b4 = 1;
  uRam831608b8 = 1;
  uRam83160930 = 1;
  uRam8316093c = 1;
  uRam83160940 = 1;
  uRam83160944 = 1;
  uRam83160948 = 1;
  uRam8316094c = 1;
  uRam83160950 = 1;
  uRam83160954 = 1;
  uRam83160958 = 1;
  uRam8316095c = 1;
  uRam83160960 = 1;
  uRam83160964 = 1;
  uRam83160968 = 1;
  uRam8316096c = 1;
  uRam83160970 = 1;
  uRam83160978 = 1;
  uRam83160974 = 1;
  uRam83160984 = 1;
  uRam8316097c = 1;
  uRam83160980 = 1;
  uRam83160990 = 1;
  uRam8316098c = 1;
  uRam83160988 = 1;
  uRam83160994 = 1;
  uRam83160998 = 1;
  uRam8316099c = 1;
  uRam831609a0 = 1;
  uRam831609a4 = 1;
  uRam831609a8 = 1;
  uRam831609ac = 1;
  uRam831609b0 = 1;
  uRam831609b4 = 1;
  uRam831609b8 = 1;
  uRam831609bc = 1;
  uRam831609c0 = 1;
  uRam831609c4 = 1;
  uRam831609c8 = 1;
  uRam831609cc = 1;
  uRam831609d0 = 1;
  uRam831609d4 = 1;
  uRam831609d8 = 1;
  uRam831609e8 = 1;
  uRam831609f0 = 1;
  uRam831609e0 = 1;
  uRam831609ec = 1;
  uRam831609f4 = 1;
  uRam831609e4 = 1;
  uRam831609f8 = 1;
  uRam831609fc = 1;
  return;
}
/* @@ end fn_82AB1948 */

/* @@ begin fn_82AB2168 */
extern void fn_82AB18E8(void *, const char *, ...);
void fn_82AB2168(struct Obj_82AB2168 *o, const char *s)
{
  if (o->flags & 0x10) fn_82AB18E8(o, "%s", "\\cf2 ");
  fn_82AB18E8(o, "%s", s);
  if (o->flags & 0x10) fn_82AB18E8(o, "%s", "\\cf3 ");
}
/* @@ end fn_82AB2168 */

/* @@ begin fn_82AB21D8 */
extern void fn_82AB18E8(void *, const char *, ...);
void fn_82AB21D8(struct Obj_82AB21D8 *o, const char *s)
{
  if (o->flags & 0x10) fn_82AB18E8(o, "%s", "\\cf5 ");
  fn_82AB18E8(o, "%s", s);
  if (o->flags & 0x10) fn_82AB18E8(o, "%s", "\\cf3 ");
}
/* @@ end fn_82AB21D8 */

/* @@ begin fn_82AB2248 */
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);


void fn_82AB2248(undefined8 param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                  int param_7,uint param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = (int)param_2 >> 7 & 1;
  uVar5 = (ulonglong)param_2 & 0x3f;
  fn_82AB18E8(param_1,0xffffffff821aa89c);
  uVar6 = 0xffffffff821ce384;
  if (uVar1 != 0) {
    fn_82AB18E8(param_1,0xffffffff821ce384);
  }
  if ((param_4 != 0) || (bVar3 = true, param_6 == 0)) {
    bVar3 = false;
  }
  iVar7 = (int)uVar5;
  if ((param_3 != 0) || (bVar2 = true, iVar7 == 0x10)) {
    bVar2 = false;
  }
  uVar8 = 0xffffffff821c4da8;
  if (bVar2) {
    fn_82AB18E8(param_1,0xffffffff821aa634);
  }
  else {
    if (param_4 == 0) {
      uVar9 = 0xffffffff821ce348;
    }
    else {
      uVar9 = 0xffffffff821ce344;
    }
    fn_82AB18E8(param_1,0xffffffff821c4da8,uVar9);
  }
  if (bVar3) {
    fn_82AB18E8(param_1,0xffffffff821ce34c);
  }
  if (!bVar2) {
    if (param_4 == 0) {
LAB_82ab2380:
      uVar8 = 0xffffffff821aa66c;
    }
    else if (iVar7 == 0x3e) {
      uVar5 = 0xffffffff82031774;
    }
    else {
      if (iVar7 != 0x3f) goto LAB_82ab2380;
      uVar5 = 0xffffffff82031778;
    }
    fn_82AB18E8(param_1,uVar8,uVar5);
  }
  if ((param_4 == 0) && (param_6 != 0)) {
    fn_82AB18E8(param_1,0xffffffff821ce378);
  }
  if (bVar3) {
    fn_82AB18E8(param_1,0xffffffff821c27b4);
  }
  if (param_4 == 0) {
    if (param_3 == 0xf) goto LAB_82ab25a0;
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    if ((param_3 & 1) != 0) {
      fn_82AB18E8(param_1,0xffffffff821ce358);
    }
    if ((param_3 & 2) != 0) {
      fn_82AB18E8(param_1,0xffffffff821ce35c);
    }
    if ((param_3 & 4) != 0) {
      fn_82AB18E8(param_1,0xffffffff821ce360);
    }
    if ((param_3 & 8) == 0) goto LAB_82ab25a0;
    uVar8 = 0xffffffff821ce364;
  }
  else {
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    uVar8 = 0xffffffff821b597c;
    uVar9 = 0xffffffff821c5500;
    if ((param_3 & 1) == 0) {
      if (((param_8 & 1) == 1) || (uVar4 = uVar8, param_7 == 0)) {
        uVar4 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar4 = uVar9;
      if ((param_8 & 1) == 0) {
        uVar4 = 0xffffffff821ce358;
      }
    }
    fn_82AB18E8(param_1,uVar4);
    if ((param_3 & 2) == 0) {
      if (((param_8 & 2) == 2) || (uVar4 = uVar8, param_7 == 0)) {
        uVar4 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar4 = uVar9;
      if ((param_8 & 2) == 0) {
        uVar4 = 0xffffffff821ce35c;
      }
    }
    fn_82AB18E8(param_1,uVar4);
    if ((param_3 & 4) == 0) {
      if (((param_8 & 4) == 4) || (uVar4 = uVar8, param_7 == 0)) {
        uVar4 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar4 = uVar9;
      if ((param_8 & 4) == 0) {
        uVar4 = 0xffffffff821ce360;
      }
    }
    fn_82AB18E8(param_1,uVar4);
    if ((param_3 & 8) == 0) {
      if (((param_8 & 8) == 8) || (param_7 == 0)) {
        uVar8 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar8 = uVar9;
      if ((param_8 & 8) == 0) {
        uVar8 = 0xffffffff821ce364;
      }
    }
  }
  fn_82AB18E8(param_1,uVar8);
LAB_82ab25a0:
  if (uVar1 == 0) {
    uVar6 = 0xffffffff82196582;
  }
  fn_82AB18E8(param_1,uVar6);
  if (param_5 != 0) {
    fn_82AB18E8(param_1,0xffffffff820d6290);
  }
  return;
}
/* @@ end fn_82AB2248 */

/* @@ begin fn_82AB25E0 */
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern unsigned int lbl_821CE37C;


void fn_82AB25E0(undefined8 param_1,uint param_2,ulonglong param_3,byte param_4,int param_5,
                  int param_6,int param_7,uint param_8)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint in_stack_00000054;
  
  if (((param_2 == 0) && (param_6 != 0)) || ((param_2 == 1 && ((param_3 & 0x80) != 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar4 = (int)param_3 >> 6 & param_2;
  param_4 = param_2 == 0 & param_4;
  if (param_7 != 0) {
    fn_82AB18E8(param_1,0xffffffff821aa634);
  }
  uVar6 = 0xffffffff821ce384;
  if (bVar3) {
    fn_82AB18E8(param_1,0xffffffff821ce384);
  }
  if (((uVar4 & 1) != 0) || (bVar5 = false, param_4 != 0)) {
    bVar5 = true;
  }
  fn_82AB18E8(param_1,0xffffffff821ce318,(-(param_2 != 0) & 0xfU) + 99);
  if (bVar5) {
    fn_82AB18E8(param_1,0xffffffff821ce34c);
  }
  fn_82AB18E8(param_1,0xffffffff821aa66c,
                ((-(ulonglong)(param_2 != 0) & 0xffffffc0) << 0x20 |
                -(ulonglong)(param_2 != 0) & 0xffffff40) + 0xff & param_3);
  uVar9 = 0xffffffff821ce378;
  if ((uVar4 & 1) != 0) {
    fn_82AB18E8(param_1,0xffffffff821ce378);
  }
  if (param_4 != 0) {
    if (param_5 == 0) {
      uVar9 = 0xffffffff821ce374;
    }
    fn_82AB18E8(param_1,uVar9);
  }
  if (bVar5) {
    fn_82AB18E8(param_1,0xffffffff821c27b4);
  }
  uVar1 = ((~(ulonglong)in_stack_00000054 & 0xffffffff) >> 0x1f) +
          (ulonglong)(3 < (ulonglong)in_stack_00000054) & 1;
  if ((param_8 != 0) || (uVar1 != 0)) {
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    uVar4 = param_8 & 3;
    uVar2 = ((int)param_8 >> 6) - 1U & 3;
    uVar8 = ((int)param_8 >> 2) + 1U & 3;
    uVar7 = ((int)param_8 >> 4) - 2U & 3;
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar4]);
    if (((1 < (int)in_stack_00000054) &&
        ((((uVar1 != 0 || (uVar8 != uVar4)) || (uVar7 != uVar4)) || (uVar2 != uVar4)))) &&
       ((fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar8]),
        2 < (int)in_stack_00000054 &&
        ((((uVar1 != 0 || (uVar7 != uVar8)) || (uVar2 != uVar8)) &&
         ((fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar7]),
          3 < (int)in_stack_00000054 && ((uVar1 != 0 || (uVar2 != uVar7)))))))))) {
      fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar2]);
    }
  }
  if (!bVar3) {
    uVar6 = 0xffffffff82196582;
  }
  fn_82AB18E8(param_1,uVar6);
  return;
}
/* @@ end fn_82AB25E0 */

/* @@ begin fn_82AB28A0 */
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern unsigned int lbl_821CE37C;
extern unsigned int lbl_821CE390;
extern unsigned int lbl_821CE398;
extern unsigned int lbl_821CE3A0;


void fn_82AB28A0(undefined8 param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (int)param_2 >> 7 & 1;
  if (param_3 != 0) {
    fn_82AB18E8(param_1,0xffffffff821aa634);
  }
  uVar2 = 0xffffffff821ce384;
  if (uVar1 != 0) {
    fn_82AB18E8(param_1,0xffffffff821ce384);
  }
  fn_82AB18E8(param_1,0xffffffff821ce388,param_2 & 0x3f);
  fn_82AB18E8(param_1,0xffffffff821c27b4);
  if (param_4 != 0) {
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE37C)[param_4 & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE390)[(int)param_4 >> 2 & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE398)[(int)param_4 >> 4 & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,(&lbl_821CE3A0)[(int)param_4 >> 6 & 3]);
  }
  if (uVar1 == 0) {
    uVar2 = 0xffffffff82196582;
  }
  fn_82AB18E8(param_1,uVar2);
  return;
}
/* @@ end fn_82AB28A0 */

/* @@ begin fn_82AB29E8 */
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern void fn_82AB2168();
extern void fn_82AB2248();
extern void fn_82AB25E0();
extern void fn_82AB28A0();
extern unsigned int lbl_83160640;
extern unsigned int lbl_831606B8;


void fn_82AB29E8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar3 = false;
  uVar5 = 0;
  if (((*param_2 & 0xf0000) != 0) || (bVar2 = true, (param_2[2] & 0x1f000000) != 0x2000000)) {
    bVar2 = false;
  }
  if (!bVar2) {
    fn_82AB2168(param_1,(&lbl_83160640)[*(byte *)(param_2 + 2) & 0x1f]);
    uVar1 = *param_2;
    fn_82AB2248(param_1,uVar1 & 0x3f,uVar1 >> 0x10 & 0xf,uVar1 >> 0xf & 1,uVar1 >> 0x18 & 1,
                  uVar1 >> 6 & 1,uVar1 >> 0xe & 1,uVar1 >> 0x14 & 0xf);
    fn_82AB18E8(param_1,0xffffffff82196824);
    uVar1 = param_2[1];
    if ((uVar1 & 0x80000000) == 0) {
      if (((uVar1 & 0x40000000) == 0) && ((uVar1 & 0x20000000) != 0)) {
        bVar3 = true;
      }
    }
    if (0 < *(int *)(&lbl_831606B8 + (param_2[2] >> 0x16 & 0x7c))) {
      uVar1 = -((int)param_2[2] >> 0x1f);
      uVar5 = ~uVar1 & 1;
      if ((uVar1 == 0) && (bVar3)) {
        fn_82AB28A0(param_1,*(undefined1 *)((int)param_2 + 9),param_2[1] >> 0x1a & 1,
                      *(undefined1 *)((int)param_2 + 5));
      }
      else {
        uVar1 = param_2[1];
        fn_82AB25E0(param_1,param_2[2] >> 0x1f,*(undefined1 *)((int)param_2 + 9),uVar1 >> 0x1f,
                      uVar1 >> 0x1d & 1,*param_2 >> 7 & 1,uVar1 >> 0x1a & 1,
                      *(undefined1 *)((int)param_2 + 5));
      }
    }
    uVar1 = param_2[2];
    uVar4 = uVar5;
    if (1 < *(int *)(&lbl_831606B8 + (uVar1 >> 0x16 & 0x7c))) {
      if (((uVar1 >> 0x1e & 1) == 0) && (uVar5 == 0)) {
        uVar4 = 2;
      }
      uVar5 = (~(uVar1 >> 0x1e) & 1) + uVar5;
      fn_82AB18E8(param_1,0xffffffff82196824);
      if (((param_2[2] & 0x40000000) == 0) && (bVar3)) {
        fn_82AB28A0(param_1,*(undefined1 *)((int)param_2 + 10),param_2[1] >> 0x19 & 1,
                      *(undefined1 *)((int)param_2 + 6));
      }
      else {
        uVar1 = param_2[1] >> 0x1f;
        if (uVar4 != 2) {
          uVar1 = param_2[1] >> 0x1e;
        }
        fn_82AB25E0(param_1,param_2[2] >> 0x1e & 1,*(undefined1 *)((int)param_2 + 10),uVar1 & 1,
                      param_2[1] >> 0x1d & 1,*param_2 >> 7 & 1,param_2[1] >> 0x19 & 1,
                      *(undefined1 *)((int)param_2 + 6));
      }
    }
    uVar1 = param_2[2];
    if (2 < *(int *)(&lbl_831606B8 + (uVar1 >> 0x16 & 0x7c))) {
      if (((uVar1 >> 0x1d & 1) == 0) && (uVar4 == 0)) {
        uVar4 = 3;
      }
      fn_82AB18E8(param_1,0xffffffff82196824);
      if (((param_2[2] & 0x20000000) == 0) && (bVar3)) {
        fn_82AB28A0(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
      }
      else {
        if ((uVar4 == 3) || ((~(uVar1 >> 0x1d) & 1) + uVar5 != 2)) {
          uVar5 = param_2[1] >> 0x1f;
        }
        else {
          uVar5 = param_2[1] >> 0x1e;
        }
        uVar1 = param_2[1];
        fn_82AB25E0(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar5 & 1,uVar1 >> 0x1d & 1,
                      *param_2 >> 7 & 1,uVar1 >> 0x18 & 1,uVar1 & 0xff);
      }
    }
  }
  return;
}
/* @@ end fn_82AB29E8 */

/* @@ begin fn_82AB2CC0 */
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern void fn_82AB2168();
extern void fn_82AB2248();
extern void fn_82AB25E0();
extern void fn_82AB28A0();
extern unsigned int lbl_831607A8;
extern unsigned int lbl_83160870;


void fn_82AB2CC0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  
  uVar1 = param_2[1];
  bVar5 = false;
  if ((uVar1 & 0x80000000) == 0) {
    if (((uVar1 & 0x40000000) == 0) && ((uVar1 & 0x20000000) != 0)) {
      bVar5 = true;
    }
  }
  fn_82AB2168(param_1,*(undefined4 *)((int)&lbl_831607A8 + (*param_2 >> 0x18 & 0xfc)));
  uVar1 = *param_2;
  uVar4 = uVar1 >> 0xf & 1;
  uVar2 = uVar1 >> 6;
  if (uVar4 == 0) {
    uVar2 = uVar1 >> 0xe;
  }
  uVar3 = uVar1;
  if (uVar4 == 0) {
    uVar3 = uVar1 >> 8;
  }
  fn_82AB2248(param_1,uVar3 & 0x3f,uVar1 >> 0x14 & 0xf,uVar4,uVar1 >> 0x19 & 1,uVar2 & 1,
                uVar1 >> 0xe & 1,uVar1 >> 0x10 & 0xf);
  fn_82AB18E8(param_1,0xffffffff82196824);
  if (0 < *(int *)(&lbl_83160870 + (*param_2 >> 0x18 & 0xfc))) {
    uVar1 = param_2[2];
    if ((int)uVar1 < 0) {
      bVar6 = 1;
    }
    else if ((param_2[2] & 0x40000000) == 0) {
      bVar6 = -((param_2[2] & 0x20000000) != 0) & 3;
    }
    else {
      bVar6 = 2;
    }
    if (((param_2[2] & 0x20000000) == 0) && (bVar5)) {
      fn_82AB28A0(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
    }
    else {
      if ((bVar6 == 3) || ((uVar1 >> 0x1e & 1) + (uVar1 >> 0x1d & 1) + ((int)uVar1 >> 0x1f) != -1))
      {
        uVar1 = param_2[1] >> 0x1f;
      }
      else {
        uVar1 = param_2[1] >> 0x1e;
      }
      uVar2 = param_2[1];
      fn_82AB25E0(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar1 & 1,uVar2 >> 0x1d & 1,
                    *param_2 >> 7 & 1,uVar2 >> 0x18 & 1,uVar2 & 0xff);
    }
  }
  return;
}
/* @@ end fn_82AB2CC0 */

/* @@ begin fn_82AB2E60 */
extern int fn_82A99B70();


void fn_82AB2E60(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar1 = 0xffffffff821cc86c;
    }
    else {
      uVar1 = 0xffffffff821ce7a4;
    }
    fn_82A99B70(param_1,uVar1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}
/* @@ end fn_82AB2E60 */

/* @@ begin fn_82AB2EC0 */
extern int fn_82AB14E0();
extern void fn_82AB1948();


void fn_82AB2EC0(int param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar4;
  ulonglong uVar3;
  uint uVar5;
  int iVar6;
  
  bVar2 = true;
  fn_82AB1948();
  iVar6 = -1;
  uVar5 = 0xffffffff;
  do {
    uVar5 = uVar5 + 1;
    if (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) == iVar6) {
      return;
    }
    iVar4 = fn_82AB14E0(param_2,0x2d,4);
    switch(iVar4 + -1) {
    case 0:
    case 1:
      iVar4 = fn_82AB14E0(param_2,1,0xc);
      if (iVar6 == -1) {
        iVar6 = iVar4;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      bVar2 = false;
      break;
    case 6:
    case 7:
    case 8:
    case 10:
      uVar3 = fn_82AB14E0(param_2,1,0xd);
      uVar1 = (uint)((uVar3 & 0xffffffff) >> 3) & 0x1ffffffc;
      *(uint *)(uVar1 + param_1 + 0x10) =
           1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1 + 0x10);
    }
    param_2 = param_2 + 6;
  } while (bVar2);
  return;
}
/* @@ end fn_82AB2EC0 */

/* @@ begin fn_82AB2FA8 */
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern void fn_82AB2168();
extern void fn_82AB25E0();
extern void fn_82AB2E60();
extern unsigned char lbl_83160630[];
extern unsigned int lbl_83160AC8;
extern unsigned int lbl_83160AD8;
extern unsigned int lbl_83160AE8;
extern unsigned int lbl_83160AF8;
extern unsigned int lbl_83160B18;
extern unsigned int lbl_83160B38;
extern unsigned int lbl_83160B48;
extern unsigned int lbl_83160B58;
extern unsigned int lbl_83160B68;
extern unsigned int lbl_83160C5C;


void fn_82AB2FA8(int param_1,uint *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((param_2[1] & 0x80000000) == 0x80000000) {
    if ((param_2[2] & 0x80000000) == 0) {
      uVar2 = 0xffffffff820d6594;
    }
    else {
      uVar2 = 0xffffffff820d6598;
    }
    fn_82AB18E8(param_1,0xffffffff820d3c58,uVar2);
  }
  uVar4 = *param_2 & 0x1f;
  if (uVar4 == 0) {
    fn_82AB2168(param_1,0xffffffff821ce400);
    fn_82AB18E8(param_1,0xffffffff821aa89c);
    if ((*param_2 & 0x40000) == 0) {
      uVar2 = 0xffffffff821ce3dc;
    }
    else {
      uVar2 = 0xffffffff821ce3d0;
    }
    fn_82AB18E8(param_1,uVar2,*param_2 >> 0xc & 0x3f);
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 3 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 6 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 9 & 7]);
    fn_82AB18E8(param_1,0xffffffff82196824);
    fn_82AB25E0(param_1,1,*param_2 >> 4 & 0x80 | *param_2 >> 5 & 0x3f,0,0,0,0,0);
    fn_82AB18E8(param_1,0xffffffff821ce414,lbl_83160630[*param_2 >> 0x1e]);
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      fn_82AB18E8(param_1,0xffffffff820d63a8,*param_2 >> 0x14 & 0x1f,
                    *(undefined4 *)((int)&lbl_83160C5C + (*param_2 >> 0x17 & 0xc)));
    }
    fn_82AB18E8(param_1,0xffffffff82196fac);
    uVar2 = 0xffffffff821c4da8;
    if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
      fn_82AB18E8(param_1,0xffffffff821c4da8,0xffffffff821ce838);
    }
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      fn_82AB2E60(param_1);
      fn_82AB18E8(param_1,0xffffffff821ce3e0);
      fn_82AB18E8(param_1,0xffffffff820d638c,param_2[2] & 0xff,param_2[2] >> 8 & 0x7fffff);
      fn_82AB18E8(param_1,0xffffffff820d637c,
                    (&lbl_83160B68)[*(ushort *)(param_2 + 1) & 0x3f]);
    }
    fn_82AB2E60(param_1);
    fn_82AB18E8(param_1,0xffffffff821ce3e0);
    uVar5 = 0xffffffff821c7f38;
    if ((param_2[1] & 0x1000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6370,0xffffffff821c7f38);
    }
    fn_82AB18E8(param_1,0xffffffff820d6364);
    if ((param_2[1] & 0x2000) == 0) {
      uVar1 = 0xffffffff820d6334;
    }
    else {
      uVar1 = 0xffffffff820d634c;
    }
    fn_82AB18E8(param_1,uVar1);
    fn_82AB18E8(param_1,0xffffffff82196824);
    fn_82AB2E60(param_1);
    fn_82AB18E8(param_1,0xffffffff821ce3e0);
    fn_82AB18E8(param_1,0xffffffff820d6328);
    if ((param_2[1] & 0x8000) == 0) {
      uVar5 = 0xffffffff821c7f40;
    }
    fn_82AB18E8(param_1,uVar5);
    if ((param_2[1] & 0x3f000000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6318);
    }
    if ((param_3 != 0) && ((*(uint *)(param_1 + 8) & 2) == 0)) {
      fn_82AB18E8(param_1,0xffffffff82196fac);
      fn_82AB2E60(param_1);
      fn_82AB18E8(param_1,0xffffffff821ce3e0);
      if ((param_2[1] & 0x40000000) == 0) {
        fn_82AB18E8(param_1,0xffffffff820d62f4,(*param_2 >> 0x1b & 7) + 1);
      }
      else {
        fn_82AB18E8(param_1,0xffffffff820d62e4);
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      return;
    }
    uVar3 = 0xffffffff821ce828;
  }
  else {
    if ((uVar4 == 0) ||
       ((4 < uVar4 && ((uVar4 < 0x10 || ((0x13 < uVar4 && ((uVar4 < 0x18 || (0x1b < uVar4))))))))))
    {
      fn_82AB18E8(param_1,0xffffffff820d63b4);
      return;
    }
    uVar2 = 0xffffffff821ce4e8;
    switch(uVar4) {
    case 1:
      uVar2 = 0xffffffff820d658c;
      break;
    case 2:
      uVar2 = 0xffffffff820d657c;
      break;
    case 3:
      uVar2 = 0xffffffff820d656c;
      break;
    case 4:
      uVar2 = 0xffffffff820d6558;
      break;
    case 0x10:
      uVar2 = 0xffffffff820d6540;
      break;
    case 0x11:
      uVar2 = 0xffffffff820d6530;
      break;
    case 0x12:
      uVar2 = 0xffffffff820d6524;
      break;
    case 0x13:
      uVar2 = 0xffffffff820d6518;
      break;
    case 0x18:
      uVar2 = 0xffffffff821ce508;
      break;
    case 0x19:
      uVar2 = 0xffffffff821ce514;
      break;
    case 0x1a:
      uVar2 = 0xffffffff821ce524;
      break;
    case 0x1b:
      uVar2 = 0xffffffff820d6504;
    }
    fn_82AB2168(param_1,uVar2);
    fn_82AB18E8(param_1,0xffffffff821aa89c);
    if ((*param_2 & 0x40000) == 0) {
      uVar2 = 0xffffffff821ce3dc;
    }
    else {
      uVar2 = 0xffffffff821ce3d0;
    }
    fn_82AB18E8(param_1,uVar2,*param_2 >> 0xc & 0x3f);
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 3 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 6 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 9 & 7]);
    fn_82AB18E8(param_1,0xffffffff82196824);
    fn_82AB25E0(param_1,1,*param_2 >> 4 & 0x80 | *param_2 >> 5 & 0x3f,0,0,0,0,0);
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[*param_2 >> 0x1a & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[*param_2 >> 0x1c & 3]);
    if ((*param_2 & 0x1f) != 0x12) {
      fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[*param_2 >> 0x1e]);
    }
    fn_82AB18E8(param_1,0xffffffff820d64fc,*param_2 >> 0x14 & 0x1f);
    if ((*param_2 & 0x2000000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d64d8);
    }
    uVar4 = param_2[1] >> 0xc & 3;
    if (uVar4 != 3) {
      fn_82AB18E8(param_1,0xffffffff820d64c8,(&lbl_83160AC8)[uVar4]);
    }
    uVar4 = param_2[1] >> 0xe & 3;
    if (uVar4 != 3) {
      fn_82AB18E8(param_1,0xffffffff820d64b8,(&lbl_83160AD8)[uVar4]);
    }
    if ((*(ushort *)(param_2 + 1) & 3) != 3) {
      fn_82AB18E8(param_1,0xffffffff820d64a8,(&lbl_83160AE8)[*(ushort *)(param_2 + 1) & 3]
                   );
    }
    uVar4 = param_2[1] >> 0x12 & 7;
    if (uVar4 != 7) {
      fn_82AB18E8(param_1,0xffffffff820d6494,(&lbl_83160AF8)[uVar4]);
    }
    uVar4 = param_2[1] >> 0x15 & 7;
    if (uVar4 != 7) {
      fn_82AB18E8(param_1,0xffffffff821ce420,(&lbl_83160B18)[uVar4]);
    }
    if ((*(byte *)(param_2 + 1) & 3) != 3) {
      fn_82AB18E8(param_1,0xffffffff820d6480,(&lbl_83160B38)[*(byte *)(param_2 + 1) & 3]);
    }
    uVar4 = param_2[1] >> 0x1a & 3;
    if (uVar4 != 3) {
      fn_82AB18E8(param_1,0xffffffff820d646c,(&lbl_83160B48)[uVar4]);
    }
    if ((param_2[1] >> 0x1c & 1) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6458);
    }
    if ((param_2[1] >> 0x1d & 3) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6444,
                    (&lbl_83160B58)[param_2[1] >> 0x1d & 3]);
    }
    if ((param_2[2] & 1) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6428);
    }
    if ((param_2[2] & 2) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d640c);
    }
    if ((param_2[2] >> 2 & 0x7f) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d63fc);
    }
    if ((param_2[2] & 0x1f0000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d63ec);
    }
    if ((param_2[2] >> 0x15 & 0x1f) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d63dc);
    }
    uVar3 = (ulonglong)(param_2[2] >> 0x1a) & 0x1f;
    if ((param_2[2] >> 0x1a & 0x1f) == 0) {
      return;
    }
    uVar2 = 0xffffffff820d63cc;
  }
  fn_82AB18E8(param_1,uVar2,uVar3);
  return;
}
/* @@ end fn_82AB2FA8 */

/* @@ begin fn_82AB3890 */
extern int fn_82AB15D0();
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern void fn_82AB29E8();
extern void fn_82AB2CC0();
extern void fn_82AB2E60();
extern void fn_82AB2FA8();
extern unsigned int lbl_831606B8;


void fn_82AB3890(int param_1,undefined8 param_2,uint *param_3,longlong param_4,uint param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((int)param_4 != 0) {
    do {
      uVar1 = param_5 & 1;
      uVar2 = param_6 & 1;
      param_6 = (int)param_6 >> 1;
      param_5 = (int)param_5 >> 2;
      if (uVar1 == 1) {
        fn_82AB2E60(param_1);
        fn_82AB18E8(param_1,0xffffffff821ce66c);
        fn_82AB2FA8(param_1,param_3,uVar2);
      }
      else {
        if (1 < (param_3[1] >> 0x1b & 3)) {
          uVar4 = 0xffffffff820d6598;
          if ((param_3[1] >> 0x1b & 1) != 1) {
            uVar4 = 0xffffffff820d6594;
          }
          fn_82AB18E8(param_1,0xffffffff820d33c8,uVar4);
        }
        if (((*param_3 & 0xf0000) != 0) || (bVar3 = true, (param_3[2] & 0x1f000000) != 0x2000000)) {
          bVar3 = false;
        }
        if (!bVar3) {
          fn_82AB2E60(param_1);
          fn_82AB18E8(param_1,0xffffffff821ce66c);
          fn_82AB29E8(param_1,param_3);
        }
        uVar1 = *param_3;
        if (*(int *)(&lbl_831606B8 + (*(byte *)(param_3 + 2) & 0x1f) * 4) < 3) {
          if ((((uVar1 & 0xf00000) != 0) || ((uVar1 & 0xfc000000) != 0x14000000)) ||
             (bVar3 = true, (uVar1 & 0x3f00) == 0x1000)) {
            bVar3 = false;
          }
          if (!bVar3) {
            fn_82AB2E60(param_1);
            if (((*param_3 & 0xf0000) != 0) ||
               (bVar3 = true, (param_3[2] & 0x1f000000) != 0x2000000)) {
              bVar3 = false;
            }
            uVar4 = 0xffffffff821ce784;
            if (bVar3) {
              uVar4 = 0xffffffff821ce66c;
            }
            fn_82AB18E8(param_1,uVar4);
            fn_82AB2CC0(param_1,param_3);
          }
        }
        else if ((uVar1 & 0xf00000) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820d65a0,0x47f);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 3;
    } while (param_4 != 0);
  }
  *(uint **)(param_1 + 0xc) = param_3;
  return;
}
/* @@ end fn_82AB3890 */

/* @@ begin fn_82AB3A98 */
extern int fn_82AB14E0();
extern void fn_82AB18E8(Printer *p, const char *fmt, ...);
extern void fn_82AB1948();
extern void fn_82AB2E60();
extern void fn_82AB2EC0();
extern void fn_82AB3890();
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int lbl_820D660C;
extern unsigned int lbl_820D6740;
extern unsigned int lbl_82196824;
extern unsigned int lbl_821AA89C;
extern unsigned int lbl_821CE3A8;
extern unsigned int lbl_821CE700;
extern unsigned int lbl_821CE704;
extern unsigned int lbl_83160C68;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;


undefined4 fn_82AB3A98(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  bool bVar2;
  int iVar8;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar9;
  undefined8 uVar7;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uStack0000001c;
  uint uStack00000024;
  bool bStack_13f;
  uint uStack_13c;
  uint uStack_134;
  int iStack_128;
  int iStack_124;
  undefined *puStack_118;
  char *pcStack_100;
  char *pcStack_b4;
  char *pcStack_ac;

  *(uint *)(param_1 + 8) = param_4;
  uStack0000001c = (uint)param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  uStack00000024 = (uint)param_3;
  bStack_13f = true;
  uStack_13c = 0;
  uStack_134 = ~param_4 & 1;
  fn_82AB1948();
  iStack_128 = -1;
  iStack_124 = -1;
  fn_82AB2EC0(param_1,param_2,param_3);
  pcStack_ac = ", cond =%d";
  puStack_118 = &lbl_821CE700;
  pcStack_100 = "true";
  pcStack_b4 = "cexecp_end";
LAB_82ab3d00:
  uVar13 = (ulonglong)uStack0000001c;
  uVar12 = 0xffffffff;
LAB_82ab3d10:
  uVar12 = uVar12 + 1;
  if (((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0) == iStack_128)
  goto LAB_82ab3f48;
  iVar8 = fn_82AB14E0(uVar13,0x2d,4);
  bVar2 = true;
  if (bStack_13f) {
    fn_82AB2E60(param_1);
    if ((1 << (uStack_13c & 0x1f) & *(uint *)(((uStack_13c >> 5) + 4) * 4 + param_1)) != 0) {
      fn_82AB18E8(param_1,&lbl_820D660C,
                    (longlong)((int)uStack_13c >> 1) +
                    (ulonglong)((int)uStack_13c < 0 && (uStack_13c & 1) != 0),
                    (ulonglong)uStack_13c +
                    ((longlong)((int)uStack_13c >> 1) +
                     (ulonglong)((int)uStack_13c < 0 && (uStack_13c & 1) != 0) & 0x7fffffff) * -2);
      fn_82AB2E60(param_1);
    }
  }
  switch(iVar8) {
  case 0:
    if ((bStack_13f) && ((*(uint *)(param_1 + 8) & 4) != 0)) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      puVar1 = &lbl_821CE3A8;
code_r0x82ab3e08:
      fn_82AB18E8(param_1,puVar1);
    }
    break;
  case 1:
    goto code_r0x82ab3e40;
  case 2:
    if ((bStack_13f) && ((*(uint *)(param_1 + 8) & 4) != 0)) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,"exec_end ");
    }
    goto code_r0x82ab3e40;
  case 3:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = "cexec";
code_r0x82ab3f98:
      fn_82AB18E8(param_1,pcVar10);
    }
    goto code_r0x82ab3fa0;
  case 4:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = "cexec_end";
      goto code_r0x82ab3f98;
    }
    goto code_r0x82ab3fa0;
  case 5:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = "cexecp";
      goto code_r0x82ab3f98;
    }
    goto code_r0x82ab3fa0;
  case 6:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = pcStack_b4;
      goto code_r0x82ab3f98;
    }
code_r0x82ab3fa0:
    bVar2 = false;
    break;
  case 7:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,0xffffffff821ce69c);
      fn_82AB18E8(param_1,0xffffffff821aa89c);
      uVar9 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff820d6288,
                    (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0),
                    uVar9 & 1);
      uVar7 = fn_82AB14E0(uVar13,0xe,3);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved = 0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x11,5);
      fn_82AB18E8(param_1,0xffffffff820d65fc,uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x16,0x16);
      if ((int)uVar7 != 0) {
        pcVar10 = ", *** reserved2=0x%x";
        goto code_r0x82ab40b8;
      }
code_r0x82ab40c4:
      iVar8 = fn_82AB14E0(uVar13,0x2c,1);
      pcVar10 = ", addressing=0x%x";
      if (iVar8 != 0) goto LAB_82ab40e4;
    }
    break;
  case 8:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,0xffffffff820d66a8);
      fn_82AB18E8(param_1,0xffffffff821aa89c);
      uVar9 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff820d6288,
                    (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0),
                    uVar9 & 1);
      uVar7 = fn_82AB14E0(uVar13,0xe,3);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved =0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x11,5);
      fn_82AB18E8(param_1,0xffffffff820d65fc,uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x16,1);
      fn_82AB18E8(param_1,", pred_break=0x%x ",uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x17,0xc);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,",*** reserved2=0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x23,2);
      fn_82AB18E8(param_1,", pred_vector=0x%x",uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x25,6);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved3=0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x2b,1);
      pcVar10 = pcStack_ac;
code_r0x82ab40b8:
      fn_82AB18E8(param_1,pcVar10,uVar7);
      goto code_r0x82ab40c4;
    }
    break;
  case 9:
    if (bStack_13f) {
      uVar6 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,"ccall");
      iVar8 = (int)uVar6;
      fn_82AB18E8(param_1," (target = %d.%d)",
                    (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (uVar6 & 1) != 0),
                    uVar6 + ((longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (uVar6 & 1) != 0) &
                            0x7fffffff) * -2);
    }
    break;
  case 10:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      puVar1 = puStack_118;
      goto code_r0x82ab3e08;
    }
    break;
  case 0xb:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      iVar8 = fn_82AB14E0(uVar13,0xe,1);
      if (iVar8 == 0) {
        fn_82AB18E8(param_1,&lbl_820D6740);
        fn_82AB18E8(param_1,0xffffffff821aa89c);
        uVar7 = fn_82AB14E0(uVar13,0x23,8);
        fn_82AB18E8(param_1,0xffffffff821ce690,uVar7);
        iVar8 = fn_82AB14E0(uVar13,0x2b,1);
        pcVar10 = pcStack_100;
        if (iVar8 == 0) {
          pcVar10 = "false";
        }
        fn_82AB18E8(param_1," == %s",pcVar10);
        puVar11 = &lbl_82196824;
      }
      else {
        fn_82AB18E8(param_1,&lbl_821CE704);
        puVar11 = &lbl_821AA89C;
      }
      fn_82AB18E8(param_1,puVar11);
      uVar9 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff820d6288,
                    (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0),
                    uVar9 & 1);
      uVar7 = fn_82AB14E0(uVar13,0xf,0x13);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved=0x%x",uVar7);
      }
      if ((*(uint *)(param_1 + 8) & 4) != 0) {
        uVar7 = fn_82AB14E0(uVar13,0x22,1);
        fn_82AB18E8(param_1,", fw_only=0x%x",uVar7);
      }
      iVar8 = fn_82AB14E0(uVar13,0x2c,1);
      if (iVar8 != 0) {
        pcVar10 = "addressing = 0x%x ";
        goto LAB_82ab40e4;
      }
    }
    break;
  case 0xc:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,0xffffffff821ce738);
      fn_82AB18E8(param_1,0xffffffff821aa89c);
      iVar8 = fn_82AB14E0(uVar13,0x2a,2);
      fn_82AB18E8(param_1,0xffffffff821c4da8,
                    (&lbl_83160C68)[(*(uint *)(param_1 + 8) >> 3 & 1) + iVar8 * 2]);
      if (iVar8 == 3) {
        uVar7 = fn_82AB14E0(uVar13,1,3);
        fn_82AB18E8(param_1,", size=%d",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x2c,1);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** debug=%d",uVar7);
      }
      iVar8 = fn_82AB14E0(uVar13,4,0x26);
      if (iVar8 != 0) {
        pcVar10 = ", *** reserved=%d";
        goto LAB_82ab40e4;
      }
    }
    break;
  default:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,"unknown cf opcode");
      pcVar10 = " = 0x%x ";
LAB_82ab40e4:
      fn_82AB18E8(param_1,pcVar10,iVar8);
    }
  }
  goto LAB_82ab3f30;
code_r0x82ab3e40:
  lVar3 = fn_82AB14E0(uVar13,1,0xc);
  iVar8 = (int)lVar3;
  if (iStack_128 == -1) {
    iStack_128 = iVar8;
  }
  lVar4 = fn_82AB14E0(uVar13,0xd,4);
  uVar7 = fn_82AB14E0(uVar13,0x11,0xc);
  uVar5 = fn_82AB14E0(uVar13,0x1d,6);
  fn_82AB14E0(uVar13,0x23,9);
  fn_82AB14E0(uVar13,0x2c,1);
  if ((uStack_134 != 0) && (iStack_124 < iVar8)) {
    fn_82AB3890(param_1,lVar3,lVar3 * 0xc + (ulonglong)uStack0000001c,lVar4,uVar7,uVar5);
    iStack_124 = (int)lVar4 + iVar8 + -1;
  }
  if ((bStack_13f) && ((ulonglong)uStack00000024 < ((lVar4 + lVar3) * 3 & 0xffffffffU))) {
    fn_82AB18E8(param_1,"Length and code parse disagree. Length = %d parse = %d\n");
  }
LAB_82ab3f30:
  uStack_13c = uStack_13c + 1;
  uVar13 = uVar13 + 6;
  if (!bVar2) goto LAB_82ab3f48;
  goto LAB_82ab3d10;
LAB_82ab3f48:
  bVar2 = uStack_134 == 0;
  bStack_13f = bStack_13f == false;
  uStack_134 = (uint)bVar2;
  if (!bVar2) {
    fn_82AB2E60(param_1);
    return *(undefined4 *)(param_1 + 0xc);
  }
  goto LAB_82ab3d00;
}
/* @@ end fn_82AB3A98 */
