extern "C" int fn_82E44C70(void *, unsigned, void **);
extern "C" bool fn_82E44F90(char *p, unsigned i, void **out) { unsigned r; *out = 0; if (i >= *(unsigned *)(p + 0x68)) return 0; r = fn_82E44C70(p, i, out); if ((int)r < 0) *out = 0; return (int)r >= 0; }
