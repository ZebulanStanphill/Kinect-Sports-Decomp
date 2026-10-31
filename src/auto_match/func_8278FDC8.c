// Built with link-time code generation together with its "ltcg_units" (objects.json):
// n stays in volatile r8 across fn_8278FD18, which LTCG knows leaves it alone.
extern unsigned char fn_8278FD18(void *);
unsigned int fn_8278FDC8(unsigned int *p) {
 unsigned int n = p[1];
 if (n && fn_8278FD18(p)) --n;
 return n;
}
