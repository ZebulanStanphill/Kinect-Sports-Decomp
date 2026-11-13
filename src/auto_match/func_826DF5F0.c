void fn_826DF5F0(char *base, unsigned n) {
 char *p = base + n * 40 - 40;
 if (n != 0) { unsigned count=n; do { (*(int (**)())*(unsigned *)p)(p,0); p -= 40; } while (--count != 0); }
}
