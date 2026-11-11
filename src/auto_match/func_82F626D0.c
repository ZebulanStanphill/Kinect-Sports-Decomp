typedef struct {char cs[0x1c];} Lock_82F626D0;
extern Lock_82F626D0 lbl_83263258[];
extern void fn_82F63AD0(void *);
void fn_82F626D0(int *p) {if (*p<4) fn_82F63AD0(&lbl_83263258[*p]);}
