typedef struct State_828635C8 {
    char pad[0x90];
    char *data;         /* 0x90 */
    unsigned int count; /* 0x94 */
} State_828635C8;

typedef struct Entry_828635C8 {
    char pad[0xd4];
} Entry_828635C8;

typedef struct Table_828635C8 {
    unsigned short count; /* 0x0 */
    char pad[6];
    Entry_828635C8 *entries; /* 0x8 */
} Table_828635C8;

extern Table_828635C8 lbl_832116A8;

extern State_828635C8 *fn_8285A808(void);
extern void fn_82863400(void *, void *, unsigned int, void *, float *);
extern int fn_827EAAF0(void *, void *, float, unsigned char *);
extern int fn_827EB678(void *, void *, void *, unsigned char *);

int fn_828635C8(void)
{
    unsigned char flag;
    float amount;
    float temp[3];
    int i;
    State_828635C8 *self = fn_8285A808();
    flag = 0;
    if (self->count != 0) {
        for (i = 0; i < lbl_832116A8.count; i++) {
            Entry_828635C8 *entry = &lbl_832116A8.entries[i];
            fn_82863400(self->data + 4, self->data + 16, self->count, temp, &amount);
            if (fn_827EAAF0((char *)entry + 4, temp, amount, &flag) != 0) {
                return 1;
            }
        }
    } else {
        for (i = 0; i < lbl_832116A8.count; i++) {
            if (fn_827EB678((char *)&lbl_832116A8.entries[i] + 4, self->data + 4, self->data + 16, &flag) !=
                0) {
                return 1;
            }
        }
    }
    return 0;
}
