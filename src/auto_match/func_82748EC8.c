typedef struct Val_82748EC8 { unsigned char tag; char pad[15]; } Val_82748EC8;
typedef struct Mat_82748EC8 { float f[8]; } Mat_82748EC8;
typedef struct Vt_82748EC8 { void *s[2]; int (*type)(void *); } Vt_82748EC8;
typedef struct Node_82748EC8 { char pad[0x10]; Vt_82748EC8 *vt; } Node_82748EC8;
typedef struct Self_82748EC8 { char pad0[8]; unsigned int p8; char pad1[0x18 - 0xc]; int f18; int count; } Self_82748EC8;
extern void *fn_826957D0();
extern Node_82748EC8 *fn_82696958();
extern unsigned char fn_82695468();
extern void fn_826954C0();
extern void fn_8268D5D8();
extern void fn_8268D758();
extern void fn_82748DE8();
extern double fn_826972E0();
extern void fn_82696330();

void fn_82748EC8(Self_82748EC8 *self)
{
  if (self->count > 0) {
    int f18 = self->f18;
    void *sub = fn_826957D0(self, 0);
    char *node = (char *)fn_82696958(sub, f18);
    if (node != 0) {
      if (fn_82695468(self, 0x12) == 0) {
        fn_826954C0(self, "ColorTransform", 0, 0);
      } else {
        char *dst;
        if (self->p8 != 0) {
          dst = (char *)self->p8 - 0x10;
        } else {
          dst = 0;
        }
        if ((*(int (**)(void *))(*(int *)(node + 0x10) + 8))(node + 0x10) == 0x12) {
          fn_8268D5D8(dst + 0x30, node + 0x30);
        } else {
          Mat_82748EC8 m;
          Val_82748EC8 v[8];
          int i;
          for (i = 0; i < 8; i++) {
            v[i].tag = 0;
          }
          fn_82748DE8(self->f18, node, v);
          fn_8268D758(&m);
          m.f[0] = (float)fn_826972E0(&v[0], self->f18);
          m.f[2] = (float)fn_826972E0(&v[1], self->f18);
          m.f[4] = (float)fn_826972E0(&v[2], self->f18);
          m.f[6] = (float)fn_826972E0(&v[3], self->f18);
          m.f[1] = (float)fn_826972E0(&v[4], self->f18);
          m.f[3] = (float)fn_826972E0(&v[5], self->f18);
          m.f[5] = (float)fn_826972E0(&v[6], self->f18);
          m.f[7] = (float)fn_826972E0(&v[7], self->f18);
          fn_8268D5D8(dst + 0x30, &m);
          {
            Val_82748EC8 *p = v + 8;
            int k = 7;
            do {
              p--;
              fn_82696330(p);
            } while (--k >= 0);
          }
        }
      }
    }
  }
}
