extern int fn_82FA5190(unsigned int, unsigned int);
extern unsigned int lbl_831BC768;
typedef struct { char pad[0x3c]; unsigned int f3c; unsigned int f40; unsigned int f44; unsigned int f48; } O_83027208;

void fn_83027208(O_83027208 *param_1)
{
  if (param_1->f3c != 0) {
    fn_82FA5190(lbl_831BC768, param_1->f3c);
    param_1->f3c = 0;
  }
  if (param_1->f44 != 0) {
    fn_82FA5190(lbl_831BC768, param_1->f44);
    param_1->f44 = 0;
  }
  param_1->f40 = 0;
  param_1->f48 = 0;
}
