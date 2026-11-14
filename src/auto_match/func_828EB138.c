typedef struct Map_828EB138 {
    int pad0;
    unsigned int end;
} Map_828EB138;

typedef struct Self_828EB138 {
    char pad[0x5c];
    Map_828EB138 map;
    char pad64[0xc];
    void *table;
} Self_828EB138;

extern unsigned int fn_82CE1210(void *table, unsigned __int64 key, unsigned int *value);
extern void fn_828B3DF8(unsigned int *out, Map_828EB138 *map, unsigned __int64 *key);
extern void fn_828B30E8(unsigned int *out, Map_828EB138 *map, unsigned int it);

unsigned char fn_828EB138(Self_828EB138 *self, unsigned __int64 *key)
{
    unsigned char ok;
    Map_828EB138 *map;
    {
        unsigned int value;
        if (fn_82CE1210(self->table, *key, &value) == 0) ok = value != 0; else ok = 0;
    }
    map = &self->map;
    {
        unsigned int it;
        fn_828B3DF8(&it, map, key);
        if (it == self->map.end) {
            return ok ? 0 : 2;
        }
        if (ok) {
            fn_828B30E8(&it, map, it);
            return 0;
        }
        return 1;
    }
}
