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


//BODY
typedef struct err_829ACEA8 {
  void (*error_exit)(void *);
  void (*emit_message)(void *, int);
  void (*output_message)(void *);
  void (*format_message)(void *, char *);
  void (*reset_error_mgr)(void *);
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
} err_829ACEA8;

typedef struct cinfo_829ACEA8 {
  err_829ACEA8 *err;
  char pad[0x11c - 4];
  int saw_JFIF_marker;
  unsigned char JFIF_major_version;
  unsigned char JFIF_minor_version;
  unsigned char density_unit;
  unsigned char pad2;
  unsigned short X_density;
  unsigned short Y_density;
} cinfo_829ACEA8;

#define GETJOCTET(x) (x)
#define TRACEMS1(c, lvl, code, p1) \
  ((c)->err->msg_code = (code), (c)->err->msg_parm.i[0] = (p1), (*(c)->err->emit_message)((void *)(c), (lvl)))
#define TRACEMS2(c, lvl, code, p1, p2) \
  ((c)->err->msg_code = (code), (c)->err->msg_parm.i[0] = (p1), (c)->err->msg_parm.i[1] = (p2), (*(c)->err->emit_message)((void *)(c), (lvl)))
#define TRACEMS5(c, lvl, code, p1, p2, p3, p4, p5) \
  do { int *_mp = (c)->err->msg_parm.i; \
    _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); _mp[4] = (p5); \
    (c)->err->msg_code = (code); \
    (*(c)->err->emit_message)((void *)(c), (lvl)); } while (0)
#define WARNMS2(c, code, p1, p2) \
  ((c)->err->msg_code = (code), (c)->err->msg_parm.i[0] = (p1), (c)->err->msg_parm.i[1] = (p2), (*(c)->err->emit_message)((void *)(c), -1))

void fn_829ACEA8(cinfo_829ACEA8 *cinfo, unsigned char *data, unsigned int datalen, int remaining)
{
  int totallen = (int)datalen + remaining;

  if (datalen >= 14 &&
      GETJOCTET(data[0]) == 0x4A &&
      GETJOCTET(data[1]) == 0x46 &&
      GETJOCTET(data[2]) == 0x49 &&
      GETJOCTET(data[3]) == 0x46 &&
      GETJOCTET(data[4]) == 0) {
    cinfo->saw_JFIF_marker = 1;
    cinfo->JFIF_major_version = GETJOCTET(data[5]);
    cinfo->JFIF_minor_version = GETJOCTET(data[6]);
    cinfo->density_unit = GETJOCTET(data[7]);
    cinfo->X_density = (GETJOCTET(data[8]) << 8) + GETJOCTET(data[9]);
    cinfo->Y_density = (GETJOCTET(data[10]) << 8) + GETJOCTET(data[11]);
    if (cinfo->JFIF_major_version != 1)
      WARNMS2(cinfo, 0x77, cinfo->JFIF_major_version, cinfo->JFIF_minor_version);
    TRACEMS5(cinfo, 1, 0x57, cinfo->JFIF_major_version, cinfo->JFIF_minor_version, cinfo->X_density, cinfo->Y_density, cinfo->density_unit);
    if (GETJOCTET(data[12]) | GETJOCTET(data[13]))
      TRACEMS2(cinfo, 1, 0x5a, GETJOCTET(data[12]), GETJOCTET(data[13]));
    totallen -= 14;
    if (totallen != ((int)GETJOCTET(data[12]) * (int)GETJOCTET(data[13]) * (int)3))
      TRACEMS1(cinfo, 1, 0x58, (int)totallen);
  } else if (datalen >= 6 &&
      GETJOCTET(data[0]) == 0x4A &&
      GETJOCTET(data[1]) == 0x46 &&
      GETJOCTET(data[2]) == 0x58 &&
      GETJOCTET(data[3]) == 0x58 &&
      GETJOCTET(data[4]) == 0) {
    switch (GETJOCTET(data[5])) {
    case 0x10:
      TRACEMS1(cinfo, 1, 0x6c, (int)totallen);
      break;
    case 0x11:
      TRACEMS1(cinfo, 1, 0x6d, (int)totallen);
      break;
    case 0x13:
      TRACEMS1(cinfo, 1, 0x6e, (int)totallen);
      break;
    default:
      TRACEMS2(cinfo, 1, 0x59, GETJOCTET(data[5]), (int)totallen);
      break;
    }
  } else {
    TRACEMS1(cinfo, 1, 0x4d, (int)totallen);
  }
}
