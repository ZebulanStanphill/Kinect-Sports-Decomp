extern void fn_82963318(unsigned int *info, int index, unsigned int **out);
extern void fn_82949650(int self, int a2, int a3, unsigned int v4, unsigned int v3,
                        unsigned int *l0, unsigned int *l1, unsigned int *l2,
                        unsigned int count, int z0, int z1, int z2, int found, int a5);

void fn_82949AB0(int self, int a2, int a3, int a4, int a5)
{
    unsigned int *info;
    unsigned int count;
    unsigned int v3;
    unsigned int v4;
    unsigned int *lists[3];
    int found;
    unsigned int i;
    unsigned int j;

    info = *(unsigned int **)(self + 0x104);
    count = info[0] & 0xfffff;
    v3 = info[3];
    v4 = info[4];
    fn_82963318(info, 0, &lists[0]);
    fn_82963318(*(unsigned int **)(self + 0x104), 1, &lists[1]);
    fn_82963318(*(unsigned int **)(self + 0x104), 2, &lists[2]);
    found = 0;
    if (a4 != 0) {
        for (i = 0; i < 3; i++) {
            if (found)
                break;
            if (lists[i] != 0) {
                for (j = 0; j < count; j++) {
                    if ((((unsigned int **)*(int *)(self + 0x14))[lists[i][j]][j * 32] & 0x1000000) != 0) {
                        found = 1;
                        break;
                    }
                }
            }
        }
    }
    fn_82949650(self, a2, a3, v4, v3, lists[0], lists[1], lists[2], count, 0, 0, 0, found, a5);
}
