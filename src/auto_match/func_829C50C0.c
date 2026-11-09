/* Corresponds to zlib 1.1.4 inftrees.c inflate_trees_fixed (open-source zlib), in D3DX's
   copy. lbl_82056E58 is inffixed.h's fixed_td and d3dx_fixed_tl (512 entries) ends where it
   starts. Both tables are static in inftrees.c, so the original builds fixed_tl's address
   from fixed_td's (subi 0x1000) with no relocation of its own; naming d3dx_fixed_tl here
   would give it one, so it is reached as lbl_82056E58 - 512. */
typedef struct inflate_huft_s { unsigned char exop; unsigned char bits; unsigned short pad; unsigned int base; } inflate_huft;
extern inflate_huft lbl_82056E58[];

int d3dx_inflate_trees_fixed(unsigned int *bl, unsigned int *bd, inflate_huft **tl, inflate_huft **td)
{
  *bl = 9;
  *bd = 5;
  *tl = lbl_82056E58 - 512;
  *td = lbl_82056E58;
  return 0;
}
