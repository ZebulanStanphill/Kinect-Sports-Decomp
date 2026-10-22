typedef struct {
    unsigned int a;
    unsigned int b;
    unsigned int id;
} Entry;

int fn_8277C208(unsigned char *param_1, unsigned int i, unsigned int j, unsigned int id)
{
    Entry *e1;
    Entry *e2;

    e1 = 0;
    e2 = 0;
    if (i < *(unsigned int *)(param_1 + 0x120)) {
        e1 = *(Entry **)(param_1 + 0x11c) + i;
    }
    if (j < *(unsigned int *)(param_1 + 0x12c)) {
        e2 = *(Entry **)(param_1 + 0x128) + j;
    }
    if (e1 != 0) {
        if (e2 == 0) goto check1;
        if (e1->id == e2->id) {
            return 0;
        }
    }
    if (e2 != 0 && e2->id == id) {
        return 2;
    }
check1:
    if (e1 != 0 && e1->id == id) {
        return 3;
    }
    return 0;
}
