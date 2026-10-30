extern void *fn_82B7BD28(void *, int);
extern void *fn_82BC36D0(void *, int, void *);
void *fn_82BC4428(int a, char *b) {
 void *owner = *(void **)(b + 0x5ac);
 void **p = fn_82B7BD28(owner, 0x3c4);
 *p = owner;
 if (p + 1) return fn_82BC36D0(p + 1, a, b);
 return 0;
}

