typedef struct Str32 { char b[32]; } Str32;
typedef struct Rec { char pad[8]; char name[0x40]; char data[0x68]; } Rec;
typedef struct Obj_824E6B70 { char pad[0x2f0]; char map[4]; int end; } Obj;
extern void fn_82230110(Str32 *, const char *);
extern void fn_82230300(Str32 *, int, int);
extern int *fn_824E75B8(void *, void *, Str32 *);
extern void *fn_824E7430(void *, Str32 *);
extern void *memcpy(void *, const void *, unsigned);

void fn_824E6B70(Obj *o, Rec *r)
{
  Str32 a, b;
  char it[16];
  int *p;
  int end;
  unsigned char eq;
  if (r != 0) {
    fn_82230110(&a, r->name);
    end = o->end;
    p = fn_824E75B8(it, o->map, &a);
    eq = *p == end;
    fn_82230300(&a, 1, 0);
    if (eq) {
      fn_82230110(&b, r->name);
      { char *src = r->data; void *x = fn_824E7430(o->map, &b);
      memcpy(x, src, 0x68); }
      fn_82230300(&b, 1, 0);
    }
  }
}
