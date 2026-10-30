extern "C" int fn_82E2E640(void *, unsigned, void **);
extern "C" bool fn_82E2F4C8(char *p, unsigned i, void **out) { unsigned r; *out = 0; if (i >= *(unsigned *)(p + 0x68)) return 0; r = fn_82E2E640(p, i, out); if ((int)r < 0) *out = 0; return (int)r >= 0; }
