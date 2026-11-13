typedef struct Table_82A344D8 Table_82A344D8;
struct Table_82A344D8 {
    Table_82A344D8 *next;
    void (*f[11])(void);
    int enabled;
};
extern Table_82A344D8 *lbl_8315D3D0;
extern void fn_82A38678(void);
extern void fn_82A38700(void);
extern void fn_82A38AA0(void);
extern void fn_82A38AD8(void);
extern void fn_82A38C08(void);
extern void fn_82A38C78(void);
extern void fn_82A38DE0(void);
extern void fn_82A38F00(void);
extern void fn_82A38FB0(void);
extern void fn_82A39078(void);
extern void fn_82A39170(void);

void fn_82A344D8(Table_82A344D8 *t)
{
    t->next = lbl_8315D3D0;
    t->f[0] = fn_82A39170;
    t->f[1] = fn_82A39078;
    t->f[3] = fn_82A38FB0;
    t->f[4] = fn_82A38F00;
    t->f[5] = fn_82A38DE0;
    t->f[7] = fn_82A38C78;
    t->f[6] = fn_82A38C08;
    t->f[8] = fn_82A38AD8;
    t->f[2] = fn_82A38AA0;
    t->f[9] = fn_82A38700;
    t->f[10] = fn_82A38678;
    lbl_8315D3D0 = t;
    t->enabled = 1;
}
