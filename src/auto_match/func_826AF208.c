// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
typedef struct { unsigned top; unsigned limit; } Stack_826AF208;
typedef struct {
  char pad0[8];
  Stack_826AF208 stk;
  char pad1[0x64];
  int f74;
  char pad2[0x4e];
  unsigned char flagsC6;
} Rec_826AF208;
typedef struct {
  Rec_826AF208 *rec;
  int pad4;
  unsigned char *code;
  int pad0c;
  int f10;
  unsigned pos;
  int off;
  char pad1c[8];
  char sub[0x12];
  unsigned char flags36;
} Obj_826AF208;
struct Ob_826AF208;
typedef struct { void *pad[10]; unsigned (*f28)(struct Ob_826AF208 *); } Vt_826AF208;
typedef struct Ob_826AF208 { Vt_826AF208 *vt; } Ob_826AF208;
typedef struct { char pad[0x9c]; Ob_826AF208 *f9c; } Cls_826AF208;
typedef struct { char pad[0xc]; unsigned end; } Sect_826AF208;
typedef struct { char pad[8]; Sect_826AF208 *sect; } Ctx_826AF208;

extern Cls_826AF208 *fn_826BD928(int);
extern unsigned fn_826C6748(Cls_826AF208 *);
extern unsigned char fn_826AA010(Ctx_826AF208 *, Rec_826AF208 *, unsigned, int, unsigned *);
extern void fn_826ABE30(void *, const char *, ...);
extern void fn_82696330(unsigned);
extern void fn_826827F8(Stack_826AF208 *);

void fn_826AF208(Obj_826AF208 *o, Ctx_826AF208 *ctx, int op)
{
  Cls_826AF208 *mc;
  unsigned count;
  unsigned n;
  unsigned char ok;
  unsigned char *p;
  unsigned char *c;
  unsigned char b;
  unsigned lim, total, pos, i, end, start;

  count = 0;
  if ((o->rec->flagsC6 & 0x40) == 0)
    mc = fn_826BD928(o->rec->f74 + 0x68);
  else
    mc = 0;
  if (op == 0x8a) {
    ok = 1;
    p = o->code + o->off;
    count = (p[4] << 8) | p[3];
    n = p[5];
  } else {
    Stack_826AF208 *s;
    ok = fn_826AA010(ctx, o->rec, o->rec->stk.top, 0, &count);
    s = &o->rec->stk;
    n = o->code[o->off + 3];
    fn_82696330(s->top);
    s->top -= 0x10;
    if (s->top < s->limit)
      fn_826827F8(s);
  }
  if (mc != 0 && ok) {
    lim = mc->f9c->vt->f28(mc->f9c);
    if (lim != 0 && count >= lim)
      count = lim - 1;
    total = fn_826C6748(mc);
    if (count >= total) {
      i = 0;
      start = o->pos;
      pos = start;
      end = ctx->sect->end;
      if (n != 0) {
        do {
          if (pos >= end) goto fail;
          c = o->code;
          b = c[pos];
          pos++;
          if (b & 0x80)
            pos = ((c[pos + 1] << 8) | c[pos]) + pos + 2;
          i++;
        } while (i < n);
      }
      if (pos >= end) {
fail:
        if (o->flags36 & 0x80)
          fn_826ABE30(o->sub, "Error: WaitForFrame branch to offset %d - this section only runs to %d\n", start, o->f10);
      } else {
        o->pos = pos;
      }
    }
  }
}
