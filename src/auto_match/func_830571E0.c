typedef struct Provider Provider;
typedef struct { void *f[16]; } Vtbl;
struct Provider { Vtbl *vt; };
extern void fn_82F6E7A8(const char *msg);
extern Provider **fn_83057138(void);

void fn_830571E0(void *p)
{
  Provider **pp = fn_83057138();
  if (*pp == 0) {
    fn_82F6E7A8("Error: NULL memory provider, MemoryAllocator::SetCurrentMemoryProvider() must be called at launch\n");
  }
  ((void (*)(Provider *, void *))(*pp)->vt->f[2])(*pp, p);
}
