int strcmp(const char *, const char *);
typedef struct Name_8278B348 {
  int refs;
  int f04;
  char text[1];
} Name_8278B348;

typedef struct Key_8278B348 {
  int f00;
  unsigned int a;
  unsigned int c;
  unsigned int name;
  float value;
  unsigned int b;
  unsigned int d;
} Key_8278B348;

unsigned char fn_8278B348(Key_8278B348 *x, Key_8278B348 *y)
{
  return x->a == y->a && x->b == y->b && x->c == y->c &&
         strcmp(((Name_8278B348 *)(x->name & ~3u))->text, ((Name_8278B348 *)(y->name & ~3u))->text) == 0 &&
         x->value == y->value && x->d == y->d;
}
