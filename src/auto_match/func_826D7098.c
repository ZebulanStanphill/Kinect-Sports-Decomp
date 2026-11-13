int strcmp(const char *, const char *);

typedef struct Name_826D7098 {
  int refs;
  int f04;
  char text[1];
} Name_826D7098;

typedef struct Key_826D7098 {
  int f00;
  int f04;
  unsigned int name;
  unsigned int a;
  __int64 c;
  unsigned int b;
  unsigned int d;
} Key_826D7098;

unsigned char fn_826D7098(Key_826D7098 *x, Key_826D7098 *y)
{
  return x->a == y->a && x->b == y->b && x->c == y->c &&
         strcmp(((Name_826D7098 *)(x->name & ~3u))->text, ((Name_826D7098 *)(y->name & ~3u))->text) == 0 &&
         x->d == y->d;
}
