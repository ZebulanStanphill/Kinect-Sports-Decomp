/* Corresponds to zlib 1.1.4 inftrees.c inflate_trees_fixed (open-source zlib), in D3DX's
   copy. lbl_82056E58 is inffixed.h's fixed_td; fixed_tl (512 entries) ends where it starts,
   but the game's symbols do not split fixed_tl out, so it is reached as lbl_82056E58 - 512. */
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
