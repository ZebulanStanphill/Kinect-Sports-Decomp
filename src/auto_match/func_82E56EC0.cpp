extern "C" int fn_82E56BD0(void *, unsigned, void **);
extern "C" bool fn_82E56EC0(char *p, unsigned i, void **out) { unsigned r; *out = 0; if (i >= *(unsigned *)(p + 0x68)) return 0; r = fn_82E56BD0(p, i, out); if ((int)r < 0) *out = 0; return (int)r >= 0; }
