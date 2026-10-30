void fn_82C2CE70(int *arr, int n, char *o, int mode)
{
    int i;
    *(int *)(o + 0x30) = 0;
    if (mode != 3) return;
    if (*(int *)(o + 0x28) == 0) return;
    if (arr == 0) return;
    if (n <= 0) return;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            *(int *)(o + 0x30) = 1;
            return;
        }
    }
}
