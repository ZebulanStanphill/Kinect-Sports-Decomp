typedef struct Ent_823D2A18 { int val; int pad; int key; } Ent_823D2A18;
extern Ent_823D2A18 lbl_831D47C0[];
int fn_823D2A18(int key)
{
  unsigned i;
  for (i = 0; i < 40; i++) {
    if (key == lbl_831D47C0[i].key) {
      return lbl_831D47C0[i].val;
    }
  }
  return 0;
}
