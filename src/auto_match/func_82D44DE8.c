unsigned fn_82D44DE8(char *p) {
 if (*(int *)(p+0x60)) return 0;
 if (*(int *)(p+0x6c)) return 1u << *(unsigned *)(p+0xc);
 if (*(int *)(p+0x78)) { unsigned n=*(unsigned *)(p+0xc); return ((1u << (32-n))-1) << n; }
 return ~0u;
}