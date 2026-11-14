typedef unsigned char bool;

extern int fn_8289F160();
extern int lbl_83212A00[];

bool fn_82881320(unsigned int param_1)
{
  unsigned int key;
  int it;

  key = param_1;
  fn_8289F160(&it, lbl_83212A00, &key);
  return it != lbl_83212A00[1];
}
