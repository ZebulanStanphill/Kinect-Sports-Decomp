extern void *fn_82CFFFC8(void *map);
extern void *fn_82D00000(void *map, void *it);
extern void *fn_82D00020(void *map, void *it);
extern void *fn_82D00060(void *map, void *it);
extern void fn_82D000A0(void *dst, void *key, void *val);
extern void fn_82D002F0(char *out, void *map, void *it);

void fn_82E09390(char *dst, char *src)
{
    void *map;
    void *it;
    void *val;
    void *key;
    char valid;

    map = src + 8;
    it = fn_82CFFFC8(map);
    fn_82D002F0(&valid, map, it);
    while (valid != 0) {
        val = fn_82D00020(map, it);
        key = fn_82D00000(map, it);
        fn_82D000A0(dst + 8, key, val);
        it = fn_82D00060(map, it);
        fn_82D002F0(&valid, map, it);
    }
}
