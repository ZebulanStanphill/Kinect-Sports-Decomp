extern unsigned int *lbl_83212A1C;

void fn_828869B8(unsigned int **counters, int index)
{
    unsigned int *counter = counters[index];
    unsigned int value = *counter;
    unsigned int width = lbl_83212A1C[index];
    *counter = value + 1;
    if (value + 1 < (1U << width)) {
        return;
    }
    *counter = 0;
}
