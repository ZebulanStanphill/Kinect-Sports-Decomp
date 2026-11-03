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
typedef struct { char *data; int pad[6]; unsigned start; } Src_8279CDC0;
typedef struct { unsigned char pad[8]; unsigned char flags; } B_8279CDC0;
typedef struct { int pad[2]; int m8; int pad2[1]; int m10; } A_8279CDC0;
typedef struct { int pad[5]; char *m14; } R_8279CDC0;
typedef struct {
  A_8279CDC0 *a;
  Src_8279CDC0 *src;
  int pad0[9];
  R_8279CDC0 *mb;
  unsigned pos;
  unsigned len;
  char pad1[0x2f4 - 0x38];
  unsigned char flag;
  char pad2;
  char buf[0x200];
  char pad4[2];
  char *out;
  unsigned outlen;
} S_8279CDC0;
extern unsigned fn_8278FDC8(Src_8279CDC0 *);
extern int fn_82794B88(int);
extern char *fn_8267B890(int, unsigned, int);
extern void *memcpy(void *, const void *, unsigned);

void fn_8279CDC0(S_8279CDC0 *s)
{
  unsigned total;
  unsigned start;
  unsigned char found;
  char *buf;
  char *data;
  unsigned cnt;
  int off;
  int bytes;
  found = s->a->m10 != 0 && (((B_8279CDC0 *)s->a->m10)->flags & 1) != 0;
  s->out = 0;
  s->flag = found;
  if (!found) {
    return;
  }
  total = fn_8278FDC8(s->src);
  start = s->src->start;
  found = s->pos >= start && s->pos <= fn_8278FDC8(s->src) + start;
  if (found) {
    total = fn_8278FDC8(s->src) + s->len;
  }
  if (total < 0x100) {
    buf = s->buf;
  } else {
    buf = fn_8267B890(*(int *)((char *)fn_82794B88(s->a->m8) + 0x1c), (total + 1) * 2, 0);
  }
  data = s->src->data;
  if (found && s->len > 0) {
    off = s->pos - s->src->start;
    bytes = off * 2;
    memcpy(buf, data, bytes);
    memcpy(buf + bytes, s->mb->m14, s->len * 2);
    cnt = fn_8278FDC8(s->src) - off;
    memcpy(buf + (s->len + off) * 2, data + bytes, cnt * 2);
  } else {
    memcpy(buf, data, total * 2);
  }
  *(unsigned short *)(buf + total * 2) = 0;
  s->out = buf;
  s->outlen = total;
}
