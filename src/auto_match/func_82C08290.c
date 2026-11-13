typedef struct Ent_82C08290 { char c; char pad[0x1f]; int f20; char pad1[0x38 - 0x24]; int f38; int f3c; int f40; int f44; int f48; int f4c; } Ent_82C08290;
typedef struct Self_82C08290 { int pad0; struct Sub_82C08290 *sub; int f8; char pad[0x220 - 0xc]; int f220; char pad1[0x238 - 0x224]; int f238; int f23c; char pad2[0x260 - 0x240]; int f260; } Self_82C08290;
typedef struct Sub_82C08290 { char pad[0x78]; int f78; int f7c; } Sub_82C08290;
typedef struct Loc_82C08290 { Ent_82C08290 *ent; unsigned h; int *info; int *node; } Loc_82C08290;
typedef struct Sel_82C08290 { unsigned char c; int v; } Sel_82C08290;
typedef struct Stk_82C08290 { Loc_82C08290 L; Sel_82C08290 sel; char *args[3]; int pad[3]; char buf[0x30]; } Stk_82C08290;
extern int fn_82C10F40(int, char, void *);
extern int fn_82C11160(int);
extern void fn_82C10EC0(int, char);
extern int fn_82C10E58(int, char, void *);
extern int fn_82C11FF8(int, void *);
extern int fn_82C10950(int, int, void *);
extern int fn_82C12520(int, void *, int, int, int, int, void *, void *);
extern int fn_82C10630(int, void *, void *, void *);
extern int fn_82C07E78(void *, int, void *);
extern int fn_82C107F8(int, int, int, void *);
extern void fn_82C07F20(void);

int fn_82C08290(Self_82C08290 *self, char param_2, int param_3)
{
  int hr;
  Stk_82C08290 S;

  S.L.h = 0;
  S.L.node = 0;
  S.L.ent = 0;
  hr = fn_82C10F40(self->sub->f7c, param_2, &S.L.info);
  if (hr >= 0) {
    hr = fn_82C10F40(self->f238, param_2, &S.L.ent);
    if ((unsigned)hr == 0x80500016u || hr >= 0) {
      if (S.L.ent != 0) {
        fn_82C10F40(self->f23c, param_2, &S.L.h);
        if (S.L.h != 0) {
          hr = fn_82C11160(S.L.h);
          if (hr < 0) goto fail;
          S.L.h = 0;
          fn_82C10EC0(self->f23c, param_2);
        }
        fn_82C10EC0(self->f238, param_2);
        S.L.ent = 0;
      }
      hr = fn_82C10E58(self->f238, param_2, &S.L.ent);
      if (hr >= 0) {
        S.L.ent->c = param_2;
        S.L.ent->f20 = S.L.info[1];
        hr = fn_82C11FF8(self->f260, &S.L.h);
        if (hr >= 0) {
          if (param_3 != 0) {
            S.args[1] = 0;
            S.args[0] = "WMFDecodeX86";
            S.args[2] = "passthru";
            if (S.L.info[1] == 1) {
              S.args[1] = "-acodec";
            } else if (S.L.info[1] == 2) {
              S.args[1] = "-vcodec";
            }
            hr = fn_82C10950(self->f260, 3, S.args);
            if (hr < 0) goto fail;
          }
          hr = fn_82C12520(S.L.h, S.L.info, self->f220, self->sub->f78, self->f8, self->f260, &S.L.ent->f40, &S.L.ent->f44);
          if (hr >= 0 && (hr = fn_82C10630(self->f260, fn_82C07F20, S.L.ent, &S.L.ent->f3c)) >= 0) {
            S.L.ent->f48 = (int)self;
            S.L.ent->f38 = 1;
            S.L.ent->f4c = 0;
            hr = fn_82C07E78(S.L.info, S.L.ent->f3c, S.buf);
            if (hr >= 0 && (hr = fn_82C107F8(self->f260, S.L.ent->f40, 0x80000, S.buf)) >= 0 &&
                (hr = fn_82C10E58(self->f23c, param_2, &S.L.node)) >= 0) {
              *S.L.node = S.L.h;
              S.sel.v = S.L.h;
              S.sel.c = param_2;
              hr = fn_82C107F8(self->f260, 4, 0x20050, &S.sel);
              if (hr >= 0) return hr;
            }
          }
        }
      }
    }
  }
fail:
  if (S.L.h != 0) fn_82C10EC0(self->f23c, param_2);
  return hr;
}
