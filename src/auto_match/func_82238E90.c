extern void fn_8223B590(void *);
extern void *fn_8265C9E0(unsigned);
extern unsigned lbl_82196A1C;
void *fn_82238E90(void) {
 unsigned *p = fn_8265C9E0(0xe4);
 if (p) { fn_8223B590(p); *p = (unsigned)&lbl_82196A1C; return p; }
 return 0;
}
