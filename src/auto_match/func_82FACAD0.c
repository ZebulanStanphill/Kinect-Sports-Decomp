typedef struct Node_82FACAD0 {
    char pad0[0x34];
    char children[0x2c];    /* 0x34 */
    void *link;             /* 0x60 */
} Node_82FACAD0;

/* The node is embedded at +4 of a reference-counted object (count at +0x2c, as in fn_82FB5408). */
typedef struct Object_82FACAD0 {
    char pad0[0x2c];
    int refs;               /* 0x2c */
} Object_82FACAD0;

extern void fn_82FB3690(void *children);
extern void fn_82FA9050(Node_82FACAD0 *self, int arg);
extern void fn_82FAAD70(void *link, int arg);
extern void fn_82FA9208(Object_82FACAD0 *obj);

void fn_82FACAD0(Node_82FACAD0 *self, int arg)
{
    Object_82FACAD0 *obj = (Object_82FACAD0 *)((char *)self - 4);
    obj->refs++;
    fn_82FB3690(self->children);
    if (self->link != 0) {
        fn_82FA9050(self, arg);
        fn_82FAAD70(self->link, arg);
    } else {
        fn_82FA9050(self, arg);
    }
    fn_82FA9208(obj);
}
