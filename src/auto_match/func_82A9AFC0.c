typedef struct Transition_82A9AFC0 {
    int id;             /* 0x0 */
    int callee;         /* 0x4 */
    unsigned int flags; /* 0x8 */
} Transition_82A9AFC0;

typedef struct List_82A9AFC0 {
    Transition_82A9AFC0 *data; /* 0x0 */
    unsigned int count;        /* 0x4 */
} List_82A9AFC0;

extern char lbl_82196F10[];
extern char lbl_82196F18[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99D88(void *, const char *, const char *);
extern void fn_82A99CF8(void *, const char *, void *, unsigned int, unsigned int);

static __forceinline void Attribute_82A9AFC0(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

void fn_82A9AFC0(void *self, void *writer, List_82A9AFC0 *transitions, void *context)
{
    Transition_82A9AFC0 *transition;
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "funcEntryExitInfo");
    fn_82A9A860(writer);
    for (transition = transitions->data; transition < transitions->data + transitions->count; transition++) {
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "transition");
        Attribute_82A9AFC0(writer, "id", transition->id);
        fn_82A99D88(writer, "entry", (transition->flags & 0x20000) ? lbl_82196F18 : lbl_82196F10);
        Attribute_82A9AFC0(writer, "callee", transition->callee);
        fn_82A99CF8(writer, "pc", context, (transition->flags >> 18) & 1, transition->flags >> 19);
        fn_82A9A810(writer);
    }
    fn_82A99C28(writer, "funcEntryExitInfo");
}
