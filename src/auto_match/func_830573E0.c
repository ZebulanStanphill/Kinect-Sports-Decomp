typedef struct Prov Prov;
typedef void (*Fn)(Prov *, int, int, int);
typedef struct { Fn f[8]; } ProvVt;
struct Prov { ProvVt *vt; };
extern Prov **fn_83057138(void);
extern void fn_82F6E7A8(const char *msg);

void fn_830573E0(int a, int b, int c)
{
  Prov **pp = fn_83057138();
  if (*pp == 0) {
    fn_82F6E7A8("Error: NULL memory provider, MemoryAllocator::SetCurrentMemoryProvider() must be called at launch\n");
  }
  (*pp)->vt->f[3](*pp, a, b, c);
}
