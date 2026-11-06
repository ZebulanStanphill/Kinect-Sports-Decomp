typedef struct Tok_82E0ECC8 { char pad[0xc]; unsigned char a; unsigned char b; } Tok_82E0ECC8;
extern unsigned int fn_82CFD5B0(Tok_82E0ECC8 *t);
extern void *fn_82CFD5A8(Tok_82E0ECC8 *t);
extern void *fn_82CEAC20(void *v);
extern int fn_82CFBBF0(void *a, void *b);
extern int fn_82E181D8(void *ctx, Tok_82E0ECC8 *x, Tok_82E0ECC8 *y);
extern char lbl_8323AB38[];

int fn_82E0ECC8(void *ctx, Tok_82E0ECC8 *x, Tok_82E0ECC8 *y)
{
  unsigned char a = x->a;
  unsigned char b = y->a;
  unsigned char sameA = a == b || (a == 0x1a && b == 0x16);
  unsigned char pairA = a == 0x1d && b == 0x21;
  unsigned char specA = a == 0x1c && b == 0x14 && y->b == 0x19 && fn_82CFD5B0(y) != 0 &&
      fn_82CFBBF0(fn_82CEAC20(lbl_8323AB38), fn_82CEAC20(fn_82CFD5A8(y))) == 0;
  unsigned char sameB = x->b == y->b || (x->b == 0x1d && y->b == 0x21);
  unsigned char specB = x->b == 0x1c && y->b == 0x14 && fn_82CFD5B0(y) != 0 &&
      fn_82CFBBF0(fn_82CEAC20(lbl_8323AB38), fn_82CEAC20(fn_82CFD5A8(y))) == 0;
  if (fn_82E181D8(ctx, x, y) != 0 || pairA || specA || (sameA && (sameB || specB))) {
    return 1;
  }
  return 0;
}
