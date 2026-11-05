typedef int (*code)();
void fn_82758500(char *base, unsigned n) {
 char *p = base + n * 24 - 24;
 if (n != 0) { unsigned count=n; do { (*(code *)*(unsigned *)p)(p,0); p -= 24; } while (--count != 0); }
}
