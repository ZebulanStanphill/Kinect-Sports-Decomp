extern void fn_8223B688(void *, void *);
unsigned *fn_82662F08(unsigned *self, unsigned *other) {
 *self = *other;
 fn_8223B688(self+1, other+1);
 return self;
}
