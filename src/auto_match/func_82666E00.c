/* Unoptimised (/O1 /Og-) code: passes the object's first field to the accessor fn_82F92218
   (returns its argument + 0xc) and discards the result. */
extern void *fn_82F92218(void *p);

typedef struct Holder_82666E00 { void *first; } Holder_82666E00;

void fn_82666E00(Holder_82666E00 *h)
{
  fn_82F92218(h->first);
}
