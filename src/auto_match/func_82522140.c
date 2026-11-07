typedef unsigned int uint;
typedef __int64 longlong;

typedef struct Globals_82522140 {
    int state;                 /* 0x000 */
    char pad004[0x67C];        /* 0x004 */
    unsigned int value;        /* 0x680 */
    int field684;              /* 0x684 */
    longlong field688;         /* 0x688 */
    int field690;              /* 0x690 */
} Globals_82522140;

extern void fn_82521468(int state);
extern void fn_825220C8(int param_1);
extern unsigned char fn_828EA608(unsigned int v);
extern unsigned char fn_828EA618(void);
extern Globals_82522140 lbl_83265A58;

void fn_82522140(int param_1)
{
    unsigned int v;

    v = **(unsigned int **)(param_1 + 4);
    if (fn_828EA618() == 0 && fn_828EA608(v) != 0) {
        lbl_83265A58.value = v;
        lbl_83265A58.field684 = 0;
        lbl_83265A58.field688 = 0;
        lbl_83265A58.field690 = -1;
        if (lbl_83265A58.state != 6) {
            fn_82521468(6);
        }
    }
    fn_825220C8(param_1);
}
