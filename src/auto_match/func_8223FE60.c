typedef struct Buf_8223FE60 { struct BVT_8223FE60 *vt; } Buf_8223FE60;
typedef struct BVT_8223FE60 { int pad[2]; void (*f8)(Buf_8223FE60 *); } BVT_8223FE60;
typedef struct Ios_8223FE60 { char pad[0x14]; unsigned int flags; char pad2[0x38 - 0x18]; int rdbuf; } Ios_8223FE60;
typedef struct Str_8223FE60 { int *vbtab; } Str_8223FE60;
extern void fn_8223FDB8(Str_8223FE60 *);

void fn_8223FE60(Str_8223FE60 **pp)
{
  Str_8223FE60 *s = *pp;
  Ios_8223FE60 *ios;
  int b;
  if ((((Ios_8223FE60 *)((char *)s + s->vbtab[1]))->flags & 2) != 0) {
    fn_8223FDB8(s);
  }
  s = *pp;
  b = ((Ios_8223FE60 *)((char *)s + s->vbtab[1]))->rdbuf;
  if (b != 0) {
    ((Buf_8223FE60 *)b)->vt->f8((Buf_8223FE60 *)b);
  }
}
