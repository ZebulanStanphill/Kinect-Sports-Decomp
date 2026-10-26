typedef struct {
    void *ptr;
    void *rep;
} SharedPtr;

typedef struct {
    char pad[0xd4];
    void *movie;
} Game;

extern SharedPtr *fn_8229AE10(SharedPtr *ret, void *src);
extern void fn_82672C20(void *obj, const char *name, int a, int b);
extern void fn_822315A0(void *rep);

void fn_823DBB58(Game **self)
{
    SharedPtr sp;

    fn_82672C20(fn_8229AE10(&sp, (*self)->movie)->ptr, "_root.hideAllCoopMarker", 0, 0);
    if (sp.rep != 0) {
        fn_822315A0(sp.rep);
    }
}
