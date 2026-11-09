extern int fn_826EC5D0(char *p);

void fn_826EDEC8(char *base, unsigned n) {
 char *p = base + n * 88 - 88;
 if (n != 0) { unsigned count=n; do { fn_826EC5D0(p); p -= 88; } while (--count != 0); }
}
