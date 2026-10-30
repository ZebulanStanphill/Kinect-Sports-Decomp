typedef struct Ios_822446D8 { char pad[0x14]; unsigned int flags; } Ios_822446D8;
typedef struct Strm_822446D8 { int *vbptr; char body[0x9c]; } Strm_822446D8;
typedef struct Ent_822446D8 { char pad[4]; void *f4; char pad8[8]; int f10; char pad14[0x1c]; } Ent_822446D8;
typedef struct Mid_822446D8 { char pad[0x14]; void *f14; } Mid_822446D8;
typedef struct Tgt_822446D8 { char pad[0x3f4]; void *owner; } Tgt_822446D8;
typedef struct Sub_822446D8 { int pad0; Tgt_822446D8 *f4; int f8; } Sub_822446D8;
typedef struct Hold_822446D8 { char pad[0x10]; Sub_822446D8 sub; } Hold_822446D8;
typedef struct Node_822446D8 { char pad[0xd54]; Hold_822446D8 *fd54; } Node_822446D8;
typedef struct Obj_822446D8 { char pad[0x80]; Tgt_822446D8 *f80; } Obj_822446D8;
extern char lbl_832960A0[];
extern int fn_82247000(void);
extern void fn_8223CFC0(Strm_822446D8 *, int, int);
extern void fn_8223FBB0(Strm_822446D8 *, void *);
extern void fn_8223DCC8(Strm_822446D8 *);

unsigned char fn_822446D8(Obj_822446D8 *param_1)
{
  Strm_822446D8 s;
  int e;
  Node_822446D8 *n;
  Hold_822446D8 *h;
  Sub_822446D8 *sb;
  Ios_822446D8 *ios;

  if (param_1->f80 == 0) {
    if (fn_82247000() < 5) {
      e = (int)lbl_832960A0 + 0x28;
      do {
        if (*(int *)(e + 0x10) == 1) {
          e = *(int *)(e + 4);
          goto found;
        }
        e = e + 0x30;
      } while (e < (int)lbl_832960A0 + 0xe8);
      e = 0;
found:
      n = (Node_822446D8 *)e;
      if (n != 0 && (h = n->fd54) != 0 && (sb = &h->sub)->f8 == 0 && sb->f4 != 0) {
        sb->f4->owner = param_1;
        param_1->f80 = sb->f4;
        if (param_1->f80 != 0) {
          fn_8223CFC0(&s, 2, 1);
          ios = (Ios_822446D8 *)((char *)&s + s.vbptr[1]);
          ios->flags = (ios->flags & 0xfffff1ff) | 0x800;
          fn_8223FBB0(&s, param_1->f80);
          fn_8223DCC8(&s);
        }
      }
    }
  }
  return param_1->f80 != 0;
}
