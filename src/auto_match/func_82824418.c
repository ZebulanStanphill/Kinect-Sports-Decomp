extern int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);

typedef struct {
    char pad[0x3f8];
    char path[0x104];
} Obj_82824418;

void fn_82824418(Obj_82824418 *o, const char *src)
{
    fn_82F66368(o->path, sizeof(o->path), src, sizeof(o->path));
}
