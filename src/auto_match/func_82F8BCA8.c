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
extern int fn_82F8A9B0(void *);
extern int fn_82F8BB40(void *);
extern void *fn_827D3AA8(void *, unsigned int, unsigned int);
extern void fn_827D3AB0(void *, void *);
extern char *lbl_82018A44[];

typedef struct ZStream_82F8BCA8 {
  int pad0[6];
  char *msg;
  struct DState_82F8BCA8 *state;
  void *(*zalloc)(void *, unsigned int, unsigned int);
  void (*zfree)(void *, void *);
  void *opaque;
} ZStream_82F8BCA8;

typedef struct DState_82F8BCA8 {
  ZStream_82F8BCA8 *strm;
  int status;
  unsigned char *pending_buf;
  unsigned int pending_buf_size;
  int pad10[2];
  int wrap;
  void *gzhead;
  int pad20;
  unsigned char method;
  unsigned char pad25[3];
  int pad28;
  unsigned int w_size;
  unsigned int w_bits;
  unsigned int w_mask;
  unsigned char *window;
  int pad3c;
  unsigned short *prev;
  unsigned short *head;
  int pad48;
  unsigned int hash_size;
  unsigned int hash_bits;
  unsigned int hash_mask;
  unsigned int hash_shift;
  int pad5c[(0x84 - 0x5c) / 4];
  int level;
  int strategy;
  int pad8c[(0x1698 - 0x8c) / 4];
  unsigned char *l_buf;
  unsigned int lit_bufsize;
  int pad16a0;
  unsigned short *d_buf;
  int pad16a8[(0x16c0 - 0x16a8) / 4];
} DState_82F8BCA8;

int fn_82F8BCA8(ZStream_82F8BCA8 *strm, int level, int method, int windowBits, int memLevel,
                int strategy, const char *version, unsigned int stream_size)
{
  DState_82F8BCA8 *s;
  int wrap = 1;
  unsigned short *overlay;

  if (version == 0 || version[0] != '1' || stream_size != 0x38) {
    return -6;
  }
  if (strm == 0) {
    return -2;
  }
  strm->msg = 0;
  if (strm->zalloc == 0) {
    strm->opaque = 0;
    strm->zalloc = fn_827D3AA8;
  }
  if (strm->zfree == 0) {
    strm->zfree = fn_827D3AB0;
  }
  if (level == -1) {
    level = 6;
  }
  if (windowBits < 0) {
    wrap = 0;
    windowBits = -windowBits;
  } else if (windowBits > 15) {
    wrap = 2;
    windowBits -= 16;
  }
  if (memLevel < 1 || memLevel > 9 || method != 8 || windowBits < 8 || windowBits > 15 ||
      level < 0 || level > 9 || strategy < 0 || strategy > 4) {
    return -2;
  }
  if (windowBits == 8) {
    windowBits = 9;
  }
  s = (DState_82F8BCA8 *)strm->zalloc(strm->opaque, 1, 0x16c0);
  if (s == 0) {
    return -4;
  }
  strm->state = s;
  s->strm = strm;
  s->wrap = wrap;
  s->gzhead = 0;
  s->w_bits = windowBits;
  s->hash_bits = memLevel + 7;
  s->hash_size = 1 << s->hash_bits;
  s->w_size = 1 << windowBits;
  s->w_mask = s->w_size - 1;
  s->hash_mask = s->hash_size - 1;
  s->hash_shift = (s->hash_bits + 2) / 3;
  s->window = (unsigned char *)strm->zalloc(strm->opaque, s->w_size, 2);
  s->prev = (unsigned short *)strm->zalloc(strm->opaque, s->w_size, 2);
  s->head = (unsigned short *)strm->zalloc(strm->opaque, s->hash_size, 2);
  s->lit_bufsize = 1 << (memLevel + 6);
  overlay = (unsigned short *)strm->zalloc(strm->opaque, s->lit_bufsize, 4);
  s->pending_buf = (unsigned char *)overlay;
  s->pending_buf_size = s->lit_bufsize * 4;
  if (s->window == 0 || s->prev == 0 || s->head == 0 || s->pending_buf == 0) {
    s->status = 666;
    strm->msg = lbl_82018A44[6];
    fn_82F8A9B0(strm);
    return -4;
  }
  s->level = level;
  s->strategy = strategy;
  s->d_buf = overlay + s->lit_bufsize / 2;
  s->l_buf = s->pending_buf + 3 * s->lit_bufsize;
  s->method = (unsigned char)method;
  return fn_82F8BB40(strm);
}
