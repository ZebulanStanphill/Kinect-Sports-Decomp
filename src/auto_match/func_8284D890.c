typedef struct Scene_8284D890 {
    char pad0[0x28];
    void *root;
} Scene_8284D890;

typedef struct Obj_8284D890 {
    char pad0[0x138];
    Scene_8284D890 *scene;
} Obj_8284D890;

extern int fn_82F6DCE0(char *buf, unsigned int size, const char *fmt, ...);
extern void fn_828182C0(void *root, const char *path, int flags, void **out);
extern void fn_82817C98(void *node, void *arg);

int fn_8284D890(Obj_8284D890 *self, const char *a, const char *b, void *arg)
{
    void *node = 0;
    char path[100];

    fn_82F6DCE0(path, 100, "%s.%s", a, b);
    path[99] = 0;
    if (self->scene != 0 && self->scene->root != 0) {
        Scene_8284D890 *scene = self->scene;
        fn_828182C0(scene->root, path, 0, &node);
        if (node != 0) {
            fn_82817C98(node, arg);
            return 1;
        }
    }
    return 0;
}
