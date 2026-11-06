typedef struct Rec_82ABDAA0 {
  int pad[2];
  unsigned int w;
} Rec_82ABDAA0;

unsigned char fn_82ABDAA0(Rec_82ABDAA0 *p)
{
  unsigned int id = p->w >> 7 & 0x7f;
  unsigned char a = id >= 0x15 && id <= 0x18;
  return a || (id >= 0x3f && id <= 0x42) || id == 0x6d || id == 0x6c;
}
