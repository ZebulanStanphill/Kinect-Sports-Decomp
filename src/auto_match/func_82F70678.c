typedef struct Ent_82F70678 {
  int key;
  int val;
} Ent_82F70678;
extern Ent_82F70678 lbl_82169498[];

int fn_82F70678(int param_1)
{
  unsigned int i;

  for (i = 0; i < 0x16; i++) {
    if (param_1 == lbl_82169498[i].key) {
      return lbl_82169498[i].val;
    }
  }
  return 0;
}
