/* Branchless median of three: picks a, b or c with sign masks instead of branches. */
int fn_830C6378(int a, int b, int c)
{
    int pickA = b - a;
    int pickB = ((b - c) ^ pickA) >> 31;

    pickA >>= 31;
    return (c & ~(pickB | pickA)) | (pickA & a) | (pickB & b);
}
