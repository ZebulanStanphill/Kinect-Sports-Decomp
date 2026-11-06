typedef struct Crit_82F71B08 {
    int words[7];
} Crit_82F71B08;

typedef struct Entry_82F71B08 {
    Crit_82F71B08 *lock;
    int kind;
} Entry_82F71B08;

extern int fn_82F71A70(Crit_82F71B08 *cs, unsigned int spin);
extern Entry_82F71B08 lbl_831BB940[36];
extern Crit_82F71B08 lbl_83263418[14];

int fn_82F71B08(void)
{
    int i;
    int next = 0;

    for (i = 0; i < 36; i++) {
        if (lbl_831BB940[i].kind == 1) {
            lbl_831BB940[i].lock = &lbl_83263418[next++];
            if (fn_82F71A70(lbl_831BB940[i].lock, 4000) == 0) {
                lbl_831BB940[i].lock = 0;
                return 0;
            }
        }
    }
    return 1;
}
