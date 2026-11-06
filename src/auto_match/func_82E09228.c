typedef struct Obj_82E09228 Obj_82E09228;
typedef struct ObjVtbl_82E09228 {
    void *slots[9];
    void (*fn24)(Obj_82E09228 *self, char *name);
} ObjVtbl_82E09228;
struct Obj_82E09228 {
    ObjVtbl_82E09228 *vt;
};

extern void fn_82E09080(unsigned int a, char *b);
extern void fn_83082708(unsigned int a, char *b, char *c);
extern Obj_82E09228 *lbl_832654E4;
extern unsigned int lbl_832654E8;
extern unsigned int lbl_832654EC;
extern char lbl_8323FDA0[];
extern char lbl_82193FA8[];
extern char lbl_821944E8[];

void fn_82E09228(void)
{
    lbl_832654E4->vt->fn24(lbl_832654E4, lbl_8323FDA0);
    fn_82E09080(lbl_832654E8, lbl_82193FA8);
    fn_83082708(lbl_832654EC, lbl_82193FA8, lbl_821944E8);
}
