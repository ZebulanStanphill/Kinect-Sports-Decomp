typedef struct Shape_82E18118 {
    char pad0[0xc];
    unsigned char type;             /* 0x0c */
} Shape_82E18118;

typedef struct Container_82E18118 Container_82E18118;

extern int fn_82CEB2D8(Container_82E18118 *parent, int key, void *context);
extern Container_82E18118 *fn_82CFD5B0(Shape_82E18118 *shape);
extern int fn_82E17EE8(Shape_82E18118 *shape);
extern int fn_82CEAE80(Container_82E18118 *container);
extern Shape_82E18118 *fn_82CEAEA8(Container_82E18118 *container, int index);

int fn_82E18118(Container_82E18118 *parent, Shape_82E18118 *shape, int key, void *context)
{
    int ok = fn_82CEB2D8(parent, key, context);

    if (shape->type == 0x19) {
        Container_82E18118 *container = fn_82CFD5B0(shape);
        if (container != 0) {
            int count = fn_82E17EE8(shape);
            int k;
            for (k = 0; k < count; k++) {
                int i;
                for (i = 0; i < fn_82CEAE80(container); i++) {
                    Shape_82E18118 *child = fn_82CEAEA8(container, i);
                    if (!fn_82E18118(container, child, i, context))
                        ok = 0;
                }
            }
        }
    }
    return ok;
}
