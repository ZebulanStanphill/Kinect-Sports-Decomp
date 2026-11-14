/* Is the value negative zero (bit-identical to the double -0.0 at lbl_820082F4)? */
int memcmp(const void *a, const void *b, unsigned int n);

extern const double lbl_820082F4;

int fn_826BC9E0(double value)
{
    return memcmp(&value, &lbl_820082F4, sizeof(double)) == 0;
}
