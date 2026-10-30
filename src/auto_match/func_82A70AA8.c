void *memset(void *, int, unsigned int);
typedef struct Obj {
  int a; int b; unsigned __int64 c; unsigned __int64 d;
  int e, f, g, h, i, j;
} Obj;
typedef struct Raw { unsigned __int64 q[6]; } Raw;
typedef struct E8 { int x, y; } E8;
void fn_82A70AA8(Obj *o)
{
memset(o, 0, sizeof(Raw));
  o->b = 0;
  o->a = 0;
  o->c = 0;
  o->d = 0;
  o->e = 0;
  o->f = 0;
  o->g = 0;
  o->h = 0;
  o->i = 0;
  o->j = 0;
}
