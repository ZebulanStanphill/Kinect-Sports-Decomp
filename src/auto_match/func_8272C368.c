struct Obj_8272C368;
typedef struct { char pad[0x1ac]; void (*f1ac)(struct Obj_8272C368 *, char *, unsigned char, int); } Vt_8272C368;
typedef struct Obj_8272C368 {
  Vt_8272C368 *vt;
  char pad[0xc8 - 4];
  unsigned short flags;
} Obj_8272C368;

extern int fn_8267BE38(void *);
extern char *fn_8267BED0(Obj_8272C368 *, unsigned, int);
extern unsigned fn_826BCDE8(void *);
extern int fn_826BD620(char *, void *, int);

void fn_8272C368(Obj_8272C368 *o, void *str, unsigned char flag)
{
  char local[0x100];
  unsigned w = o->flags;
  unsigned char cur = (w >> 1) & 1;
  unsigned n;
  char *buf;

  if (flag == 0 || cur != 0) {
    if (flag != 0 || cur == 0)
      goto skip;
    w = w & 0xfffd;
  } else {
    w = w | 2;
  }
  o->flags = w;
skip:
  n = fn_826BCDE8(str);
  if (n < 0x100)
    buf = local;
  else
    buf = fn_8267BED0(o, n * 5 + 1, 0);
  fn_826BD620(buf, str, -1);
  o->vt->f1ac(o, buf, flag, 1);
  if (n >= 0x100)
    fn_8267BE38(buf);
}
