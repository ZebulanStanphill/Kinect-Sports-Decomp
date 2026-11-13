typedef struct Thing { int x0, x4, x8, xc; void *x10; } Thing;
extern unsigned __int64 fn_82CEA748(void *map, unsigned __int64 key, unsigned __int64 def);
extern Thing *fn_82CE5410(void);
extern void fn_82CEA650(void *map, void *alloc, unsigned __int64 key, unsigned __int64 val);
extern void fn_82CEAB20(void *map, unsigned __int64 key);

int fn_82DC9B80(char *self, int a, int b)
{
    unsigned __int64 ua = (unsigned __int64)a;
    unsigned __int64 ub = (unsigned __int64)b;
    unsigned __int64 key;
    unsigned __int64 n;
    Thing *t;
    if (ua < ub) {
        key = (ua << 32) + ub;
    } else {
        key = (ub << 32) + ua;
    }
    n = fn_82CEA748(self + 0x30, key, 0);
    if (n == 0) {
        return 0;
    }
    n = n - 1;
    if (n > 0) {
        t = fn_82CE5410();
        fn_82CEA650(self + 0x30, t->x10, key, n);
    } else {
        fn_82CEAB20(self + 0x30, key);
    }
    return (int)n;
}
