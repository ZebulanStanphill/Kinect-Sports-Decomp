int fn_822EEF98(void *self, char digit, char zero, char upper, char lower)
{
    if (zero <= digit && digit <= zero + 9) {
        return digit - zero;
    }
    if (upper <= digit && digit <= upper + 5) {
        return digit - upper + 10;
    }
    if (lower <= digit && digit <= lower + 5) {
        return digit - lower + 10;
    }
    return -1;
}
