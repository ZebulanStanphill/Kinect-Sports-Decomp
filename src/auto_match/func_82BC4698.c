extern void *fn_82B7BD28(void *, int);
extern void *fn_82BC4188(void *, int, void *);
void *fn_82BC4698(int a, char *b) {
 void *owner = *(void **)(b + 0x5ac);
 void **p = fn_82B7BD28(owner, 0x3c4);
 *p = owner;
 if (p + 1) return fn_82BC4188(p + 1, a, b);
 return 0;
}

