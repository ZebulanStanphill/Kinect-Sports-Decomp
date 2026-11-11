extern void *memset(void *dst, int value, unsigned size);
void fn_8284F8F8(void *unused, void *unused2, char *a, char *b) {
    memset(*(void **)(b + 0x1c), 0, *(unsigned *)(a + 0x94));
}
