typedef struct Iface_823DF138 Iface_823DF138;
typedef struct Vt_823DF138 { int pad; void (*f4)(Iface_823DF138 *); } Vt_823DF138;
struct Iface_823DF138 { Vt_823DF138 *vt; };
typedef struct Slot_823DF138 { int *tab; int pad[3]; int idx; } Slot_823DF138;
typedef struct Hdr_823DF138 { int pad; int x[2]; } Hdr_823DF138;
typedef struct Ctl_823DF138 { char pad[0xd4]; int f; } Ctl_823DF138;
typedef struct Dev_823DF138 { Slot_823DF138 **slots; } Dev_823DF138;
typedef struct S_823DF138 {
  char pad0[8];
  Dev_823DF138 *dev;
  int *pair;
  char pad1[0x41c - 0x10];
  int mode;
  char pad2[0x474 - 0x420];
  float f474;
  char pad3[4];
  float f47c;
  char pad4[0x4b0 - 0x480];
  Ctl_823DF138 *ctl;
  char pad5[4];
  int h4b8;
  char pad6[0x9a0 - 0x4bc];
  int f9a0;
  char pad7[0xa88 - 0x9a4];
  char sub[1];
  char pad8[0xd51 - 0xa89];
  unsigned char f_d51;
  char pad9[0xee0 - 0xd52];
  int fee0;
} S_823DF138;
typedef struct P_823DF138 { char pad[8]; S_823DF138 *s; } P_823DF138;
extern Iface_823DF138 *fn_822ABA88(int, int);
extern void fn_822AF138(int, int);
extern unsigned char fn_82308E08(void *);
extern void fn_82359698(S_823DF138 *, int);
extern int fn_82369160(S_823DF138 *, int);
extern int fn_8236B578(S_823DF138 *);
extern int fn_8236BB40(S_823DF138 *);
extern void fn_823C4238(S_823DF138 *);
extern void fn_823CC298(int, int);
extern void fn_823D1358(S_823DF138 *);
extern void fn_823D16A0(S_823DF138 *);

void fn_823DF138(P_823DF138 *p)
{
  S_823DF138 *s = p->s;
  if (fn_82308E08(s->sub) == 0) {
    if (s->ctl->f == 0) {
      if (s->f9a0 == 0) {
        int m = s->mode;
        if ((m != 2 && m != 8 && m != 9 && m != 6 && m != 7) || s->f_d51 == 0) {
          fn_82359698(s, 2);
        }
      }
      else {
        if (fn_8236BB40(s) != 0) {
          if (s->f47c < s->f474 || fn_82369160(s, s->fee0) == 2) {
            fn_823D1358(s);
          }
          else {
            fn_823D16A0(s);
          }
        }
      }
    }
    else {
      if (fn_8236B578(s) != 0) {
        Slot_823DF138 *sl;
        Iface_823DF138 *o;
        fn_823C4238(s);
        sl = *(Slot_823DF138 **)((char *)s->dev->slots + (s->fee0 == 0) * 4);
        o = fn_822ABA88(sl->tab[sl->idx], 0);
        o->vt->f4(o);
        fn_823CC298(s->h4b8, 0x1a);
      }
      else {
        fn_822AF138(s->pair[0], 5);
        fn_822AF138(s->pair[1], 5);
      }
    }
  }
}
