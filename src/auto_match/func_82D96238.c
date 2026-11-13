extern int fn_82CE4040();


typedef struct O { char pad[0x14]; unsigned s[2]; } O;
void fn_82D96238(O *o)
{
  int i;
  for (i = 0; i < 2; i++) {
    if (o->s[i] == 0) {
      unsigned u = o->s[1] ^ o->s[0] ^ o->s[i];
      if (u != 0) {
        int t = *(int *)(u + 8);
        if (t != 0) {
          o->s[i] = *(unsigned *)(t + 0x24);
          fn_82CE4040(o->s[i]);
        }
      }
    }
  }
}
