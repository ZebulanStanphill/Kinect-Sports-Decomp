int strcmp(const char *, const char *);

typedef struct Name_8278ACC8 {
  int refs;
  int f04;
  char text[1];
} Name_8278ACC8;

typedef struct Info_8278ACC8 {
  char pad0[0x10];
  unsigned int name;
} Info_8278ACC8;

typedef struct Key_8278ACC8 {
  int f00;
  int f04;
  unsigned int a;
  unsigned int b;
  unsigned int c;
  Info_8278ACC8 *info;
} Key_8278ACC8;

unsigned char fn_8278ACC8(Key_8278ACC8 *x, Key_8278ACC8 *y)
{
  return x->a == y->a && x->b == y->b && x->c == y->c &&
         strcmp(((Name_8278ACC8 *)(x->info->name & ~3u))->text, ((Name_8278ACC8 *)(y->info->name & ~3u))->text) == 0;
}
