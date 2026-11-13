extern char lbl_8320A5DC[];
extern int fn_8281B4E0(void);
extern void fn_82822510(void *list, int (*fn)(void), unsigned arg, void *out);
typedef struct VT { char p[0x18]; void (*f18)(void *, unsigned, void *); } VT;
typedef struct Obj { char p[0xc]; unsigned flags; VT *vt; char q[0x78-0x14]; unsigned off; } Obj;
typedef struct Ent { char p[0x10]; unsigned char b[4]; unsigned pad; unsigned w[4]; } Ent;

int fn_8281BBB0(unsigned key, unsigned char *out)
{
  Obj *o;
  Ent *e; unsigned k;
  fn_82822510(lbl_8320A5DC, fn_8281B4E0, key, &o);
  if (o != 0) {
    k = key; if (o->flags & 4) k = key - o->off;
    e = 0;
    o->vt->f18(o, k, &e);
    if (e != 0) {
      out[0] = e->b[0]; out[1] = e->b[1]; out[2]=e->b[2]; out[3]=e->b[3];
      *(unsigned*)(out+4) = e->w[0];
      *(unsigned*)(out+8) = e->w[1];
      *(unsigned*)(out+12) = e->w[2];
      *(unsigned*)(out+16) = e->w[3];
      return 1;
    }
  }
  return 0;
}
