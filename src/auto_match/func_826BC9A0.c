/* Is the value positive zero (bit-identical to the 8 zero bytes at lbl_820082FC)? */
int memcmp(const void *a, const void *b, unsigned int n);

extern const double lbl_820082FC;

int fn_826BC9A0(double value)
{
    return memcmp(&value, &lbl_820082FC, sizeof(double)) == 0;
}
