int strcmp(const char *, const char *);

typedef struct Name_827A53E8 {
  int refs;
  int f04;
  char text[1];
} Name_827A53E8;

typedef struct Key_827A53E8 {
  int id;
  unsigned int name;
} Key_827A53E8;

unsigned char fn_827A53E8(Key_827A53E8 *x, Key_827A53E8 *y)
{
  return x->id == y->id &&
         strcmp(((Name_827A53E8 *)(x->name & ~3u))->text, ((Name_827A53E8 *)(y->name & ~3u))->text) == 0;
}
