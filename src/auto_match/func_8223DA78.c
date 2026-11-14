/* The 64-bit constant -1 at 0x82167FA0 is the "no position" value of a stream position. */
extern unsigned __int64 lbl_82167FA0;

typedef struct Pos_8223DA78 {
  unsigned __int64 offset;
  unsigned __int64 position;
  unsigned int state;
} Pos_8223DA78;

void fn_8223DA78(Pos_8223DA78 *pos)
{
  pos->position = 0;
  pos->state = 0;
  pos->offset = lbl_82167FA0;
}
