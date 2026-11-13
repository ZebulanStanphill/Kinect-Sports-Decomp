extern void fn_82AB1538(int a, int b, int c, int d);
extern int lbl_820E2FB8[];

typedef struct { char pad[0xc]; int pos; char pad2[0x28]; int count; } S;

void fn_82BA90B8(S *p)
{
  fn_82AB1538(p->pos, 0x2d, 4, lbl_820E2FB8[15]);
  p->pos += 6;
  p->count++;
}
